#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <WiFiClientSecureBearSSL.h>
#include <ArduinoJson.h>
#include "SafeCommunication.hpp"

#define baudRate 9600
#define keyLength 16
#define senderPin D0
#define okayWifiPin D1
#define okayCloudPin D2
#define okayEndDevicePin D3
#define buzzerPin D4
#define buttonPin D5
#define deviceCount 1

// Cihaz Bilgileri
String deviceName = "test";
String username = "test@test.com";
String password = "Test12345.";

// Wi-Fi Bilgileri
String wifiSSID = "iPhone - Kemal";
String wifiPassword = "87654321";

// HTTP Sertifikası
uint8_t fingerprint[20] = {0x30, 0x7E, 0xFD, 0x5B, 0x1B, 0x19, 0x4E, 0x08, 0x13, 0x86, 0xE0, 0x77, 0xF4, 0x6F, 0x6A, 0xF8, 0xC9, 0x91, 0xAC, 0xA9};
String cloudURL = "https://websecurity.suyonetimi.duckdns.org/api/machine/saveData";

// Uç Cihazların Bilgileri
String databaseOfEndDevice[deviceCount][3] = {{"Cihaz1", "kemal", "kemal123"}};

SafeCommunication* safeCommunication;
HTTPClient* httpClient;
std::unique_ptr<BearSSL::WiFiClientSecure>wifiClient(new BearSSL::WiFiClientSecure);

enum OkayMode{
	full,
	partially
};

bool findDevice(String deviceName, String deviceUsername, String devicePassword){
	for(int i = 0; i < deviceCount; ++i){
		if(databaseOfEndDevice[i][0] == deviceName && databaseOfEndDevice[i][1] == deviceUsername && databaseOfEndDevice[i][2] == devicePassword)
			return true;
	}
	return false;
}

void clearSerialBuffer(){
	while(Serial.available())
		Serial.read();
}

void control(){
	while(digitalRead(buttonPin) == LOW)								// Tuşa basılmasını bekle.
		yield();
}

// Onay pinini gönderilen moda göre ya 1 saniye (8*124) boyunca aralıklı kapatıp açar ya da tamamen açar. 
void okaySection(uint8_t pin, OkayMode okayMode){
	if(okayMode == OkayMode::full)
		digitalWrite(pin, HIGH);
	else{
		for(int i = 0; i < 8; ++i){
			digitalWrite(pin, HIGH);
			delay(62);
			digitalWrite(pin, LOW);
			delay(62);
		}
	}
}

// Bütün pinlerin modunu ayarlar. 
void configurePins(){
	pinMode(senderPin, OUTPUT);
	pinMode(okayWifiPin, OUTPUT);
	pinMode(okayCloudPin, OUTPUT);
	pinMode(okayEndDevicePin, OUTPUT);
	pinMode(buzzerPin, OUTPUT);
	pinMode(buttonPin, INPUT);
}

// WiFi'yı ayarlar. 
void configureWifi(){
	WiFi.mode(WIFI_STA);
	wifiClient->setFingerprint(fingerprint);
}

// HTTP'yi ayarlar. 
void configureHTTP(){
	httpClient = new HTTPClient();
}

// Seri bağlantıyı ayarlar.
void configureSerial(){
	Serial.begin(baudRate);
}

// Sistem bir hata ile karşılaştığında çağrılır.
// Tuşa basılana kadar belirtilen hata pinini ve buzzer'ı  aktive eder.
void error(uint8_t errorPin){
	digitalWrite(errorPin, LOW);
	digitalWrite(buzzerPin, HIGH);

	control();

	digitalWrite(buzzerPin, LOW);
}

// Tüm pinleri kapatıp "Wifi Hata" ve "Buzzer" pinlerini aktive eder. 
void errorWifi(){
	error(okayWifiPin);
}

// Tüm pinleri kapatıp "Bulut Hata" ve "Buzzer" pinlerini aktive eder. 
void errorCloud(){	
	error(okayCloudPin);
}

// Tüm pinleri kapatıp "Uç Cihaz Hata" ve "Buzzer" pinlerini aktive eder. 
void errorEndDevice(){
	error(okayEndDevicePin);
}

// Verilen mesaj için bir JSON dosyası oluşturur. 
String createJSON(String message){
	DynamicJsonDocument doc(100);
	String json;

	doc["MachineName"] = deviceName;
	doc["Username"] = username;
	doc["Password"] = password;
	doc["Data"] = message;
	serializeJson(doc, json);

	return json;
}

// WiFi bağlantısını kurar ve HTTPS için gerekli ayarları yapar. 
bool connectWifi(){
	WiFi.begin(wifiSSID, wifiPassword);

	for (int i = 0; i < 50; ++i){										// Wifi bağlantısı için 5(50*100/1000) saniye uğraşır.
		if(WiFi.status() != WL_CONNECTED)
			delay(100);
		else
			return true;												// Bağlantı kuruldu.
	}

	return false;														// Bağlantı kurulamadı.
}

// Verilen mesajı buluttaki sunucuya POST isteği ile yollar. 
bool httpRequest(String message){
	for(int i = 0; i < 3; ++i){											// HTTP isteğini aralarında 1'er saniyeyle 3 defa dener. 
		httpClient->begin(*wifiClient, cloudURL);
		httpClient->addHeader("Content-Type", "application/json");
		int httpCode = httpClient->POST(message);

		if(httpCode > 0){
			httpClient->end();
		}

		if(httpCode == 200)
			return true;

		delay(1000);
	}
	
	return false;
}

// Bulut bağlantısını kontrol eder. 
bool cloudAuthentication(){
	String message = createJSON("");
	return httpRequest(message);
}

void checkWifi(){
	while(WiFi.status() != WL_CONNECTED){
		if(connectWifi())
			break;
		errorWifi();
	}
}

// Uç cihaz ile bağlantı kurar. 
bool endDeviceAuthentication(){
	safeCommunication = new SafeCommunication(Mode::receiver, keyLength);
	byte commonKey[16] = {0x10, 0x15, 0x20, 0x50, 0x77, 0x13, 0x41, 0x32, 0x89, 0x32, 0x42, 0x11, 0x05, 0x00, 0x85, 0x64};

	bool isInitialized = safeCommunication->initialize(commonKey);										// İki cihaz arası gizli anahtar paylaşılır.
	if(isInitialized == false)
		return false;
	
	safeCommunication->sendMessage("Cihaz Adı?");
	String deviceName = safeCommunication->receivedMessage();

	safeCommunication->sendMessage("Kullanıcı Adı?");
	String deviceUsername = safeCommunication->receivedMessage();

	safeCommunication->sendMessage("Şifre?");
	String devicePassword = safeCommunication->receivedMessage();

	bool isFounded = findDevice(deviceName, deviceUsername, devicePassword);
	
	if(isFounded == true){
		safeCommunication->sendMessage("0");
		return true;
	}
	else{
		safeCommunication->sendMessage("1");
		return false;
	}
}

void setup() {
	// Cihazdaki durum pinlerinin modları ayarlanır. 
	configurePins();
	configureWifi();
	configureHTTP();
	configureSerial();

	// Cihaz internete bağlanır.
	control();
	while(!connectWifi())
		errorWifi();
	okaySection(okayWifiPin, OkayMode::full);

	// Cihaz buluta bağlanır.
	control();
	while(!cloudAuthentication())
		errorCloud();
	okaySection(okayCloudPin, OkayMode::full);
	
	// Uç cihaz ile şifreli bağlantı kurulur.
	control();
	clearSerialBuffer();																		// Seri port kullanılmadan önce temizlenir.
	while(!endDeviceAuthentication())
		errorEndDevice();
	okaySection(okayEndDevicePin, OkayMode::full);
}

void loop() {
	while(!Serial.available());
	String message;
	message = safeCommunication->receivedMessage();
	message = createJSON(message);

	while(!httpRequest(message)){
		checkWifi();
		okaySection(okayWifiPin, OkayMode::full);
		errorCloud();
		okaySection(okayCloudPin, OkayMode::full);
		clearSerialBuffer();
	}
	
	okaySection(senderPin, OkayMode::partially);
}
