#include <Arduino.h>
#include "SafeCommunication.hpp"
#include "Thermistor.hpp"

#define baudRate 9600
#define keyLength 16
#define senderPin D0
#define okayMainDevicePin D1
#define buzzerPin D2
#define buttonPin D3
#define analogPin A0
#define referanceVolt 15000
#define adcBit 10

// Cihaz bilgileri
String deviceName = "Cihaz1";
String username = "kemal";
String password = "kemal123";

SafeCommunication* safeCommunication;
Thermistor* thermistor;

enum OkayMode{
	full,
	partially
};

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
	pinMode(okayMainDevicePin, OUTPUT);
	pinMode(buzzerPin, OUTPUT);
	pinMode(buttonPin, INPUT);
}

// Seri portu ayarlar.
void configureSerial(){
	Serial.begin(baudRate);
}

// Sıcaklık ölçeri ayarlar.
void configureThermistor(){
	thermistor = new Thermistor(analogPin, referanceVolt, adcBit);
}

// Sistem bir hata ile karşılaştığında çağrılır.
// Tuşa basılana kadar belirtilen hata pinini ve buzzer'ı  aktive eder.
void error(uint8_t errorPin){
	digitalWrite(errorPin, LOW);
	digitalWrite(buzzerPin, HIGH);

	control();

	digitalWrite(buzzerPin, LOW);
}

// Tüm pinleri kapatıp "Ana Cihaz Hata" ve "Buzzer" pinlerini aktive eder. 
void errorMainDevice(){
	error(okayMainDevicePin);
}

// Ana cihaz ile bağlantı kurar.
bool mainDeviceAuthentication(){
	safeCommunication = new SafeCommunication(Mode::sender, keyLength);
	byte commonKey[16] = {0x10, 0x15, 0x20, 0x50, 0x77, 0x13, 0x41, 0x32, 0x89, 0x32, 0x42, 0x11, 0x05, 0x00, 0x85, 0x64};
	String message;

	bool isInitialized = safeCommunication->initialize(commonKey);										// İki cihaz arası gizli anahtar paylaşılır.
	if(isInitialized == false)
		return false;

	message = safeCommunication->receivedMessage();														// Cihaz türü soruluyor ve yollanıyor.
	if(message.compareTo("Cihaz Adı?") != 0)
		return false;
	safeCommunication->sendMessage(deviceName);

	message = safeCommunication->receivedMessage();														// Kullanıcı adı soruluyor ve yollanıyor.
	if(message.compareTo("Kullanıcı Adı?") != 0)
		return false;
	safeCommunication->sendMessage(username);

	message = safeCommunication->receivedMessage();														// Şifre soruluyor ve yollanıyor. 
	if(message.compareTo("Şifre?") != 0)
		return false;
	safeCommunication->sendMessage(password);

	message = safeCommunication->receivedMessage();														// Onay bekleniyor ve ona göre vaziyet alınıyor.
	int returnCode = message.toInt();
	if(returnCode != 0)
		return false;

	return true;
}

void setup() {
	// Cihazdaki durum pinlerinin modları ayarlanır. 
	configurePins();
	configureSerial();
	configureThermistor();

	// Uç cihaz ile şifreli bağlantı kurulur.
	control();
	clearSerialBuffer();																	// Seri port kullanılmadan önce temizlenir.
	while(!mainDeviceAuthentication())
		errorMainDevice();
	okaySection(okayMainDevicePin, OkayMode::full);
}

void loop() {
	String temperature;
	temperature = String(thermistor->calculateTemperature());
	safeCommunication->sendMessage(temperature);
	okaySection(senderPin, OkayMode::partially);
	delay(5000);
}
