#include "SafeCommunication.hpp"

void copyByteArray(byte* destinationByteArray, byte* sourceByteArray, uint32_t length){
	for(int i = 0; i < length; i++)
		destinationByteArray[i] = sourceByteArray[i];
}

void byteArrayFiller(byte* byteArray, uint32_t length){
	for (int i = 0; i < length; i++)
		byteArray[i] = random(0, 256);
}

void sumByteArray(byte* newByteArray, byte* byteArray1, byte* byteArray2, uint32_t lengthOfArrays){
	for (int i = 0; i < lengthOfArrays; i++)
		newByteArray[i] = byteArray1[i] + byteArray2[i];
}

String byteArrayToString(byte* byteArray, uint32_t byteArraylength){
	byte tempByteArray[byteArraylength + 1];
	copyByteArray(tempByteArray, byteArray, byteArraylength);
	tempByteArray[byteArraylength] = '\0';
	return String((char*)tempByteArray);
}

void stringToByteArray(byte* byteArray, String string){
	uint32_t length = string.length();

	for(int i = 0; i < length; ++i){
		byteArray[i] = string[i];
	}
}

String base64EncoderString(String base64DecodedMessage){
	uint32_t bytesBase64DecodedMessageLength = base64DecodedMessage.length();
	byte bytesBase64DecodedMessage[bytesBase64DecodedMessageLength];
	base64DecodedMessage.getBytes(bytesBase64DecodedMessage, bytesBase64DecodedMessageLength);

	uint32_t bytesBase64EncodedMessageLength = base64::encodeLength(bytesBase64DecodedMessageLength);
	byte bytesBase64EncodedMessage[bytesBase64EncodedMessageLength];
	base64::encode(bytesBase64DecodedMessage, bytesBase64DecodedMessageLength, (char*)bytesBase64EncodedMessage);

	String base64EncodedMessage = String((char*)bytesBase64EncodedMessage);
	return base64EncodedMessage;
}

String base64DecoderString(String base64EncodedMessage){
	uint32_t bytesBase64EncodedMessageLength = base64EncodedMessage.length();
	byte bytesBase64EncodedMessage[bytesBase64EncodedMessageLength];
	base64EncodedMessage.getBytes(bytesBase64EncodedMessage, bytesBase64EncodedMessageLength);

	uint32_t bytesBase64DecodedMessageLength = base64::decodeLength((char*)bytesBase64EncodedMessage);
	byte bytesBase64DecodedMessage[bytesBase64DecodedMessageLength];
	base64::decode((char*)bytesBase64EncodedMessage, bytesBase64DecodedMessage);

	String base64DecodedMessage = String((char*)bytesBase64DecodedMessage);
	return base64DecodedMessage;
}

SafeCommunication::SafeCommunication(Mode mode, uint32_t privateKeyLength){
	this->mode = mode;
	this->keyLength = privateKeyLength;
	this->privateKey = new byte[this->keyLength];
	this->ivKey = new byte[this->keyLength];
	aesLib.set_paddingmode((paddingMode)0);
	
	byteArrayFiller(this->privateKey, this->keyLength);
	copyByteArray(this->ivKey, (byte*)"abcdefghabcdefgh", this->keyLength);
}

SafeCommunication::~SafeCommunication(){
	delete this->privateKey;
}

bool SafeCommunication::initialize(byte* commonKey){
	uint32_t messageLength = base64::encodeLength(this->keyLength);
	char message[messageLength] = "";
	byte partOfPrivateKey[this->keyLength];
	sumByteArray(this->privateKey, commonKey, this->privateKey, this->keyLength);
	
	if(this->mode == Mode::receiver){
		while(!Serial.available());																			// İstek bekleniyor

		Serial.readString().toCharArray(message, messageLength);
		if(strcmp(message, "hello") != 0)																	// Yanlış bir istek olursa işlem sonlandırılıyor. 
			return false;
		
		base64::encode(this->privateKey, this->keyLength, message);											// Özel anahtar parçası yollanır. 
		Serial.print(message);

		while(!Serial.available());																			// Karşı taraftan özel anahtarın parçası bekleniyor.
		Serial.readBytes(message, messageLength);
		base64::decode(message, partOfPrivateKey);
	}

	else if(this->mode == Mode::sender){
		Serial.print("hello");																				// İstek atılıyor. 

		while(!Serial.available());																			// Karşı taraftan özel anahtarın parçası bekleniyor.
		Serial.readBytes(message, messageLength);
		base64::decode(message, partOfPrivateKey);

		base64::encode(this->privateKey, this->keyLength, message);											// Özel anahtar parçası yollanır. 
		Serial.print(message);
	}
	
	sumByteArray(this->privateKey, partOfPrivateKey, this->privateKey, this->keyLength);					// Özel anahtarlar birleştirilerek gerçek özel anahtar elde edilir. 
	return true;
}

void SafeCommunication::sendMessage(String decryptedMessage){
	uint32_t bytesDecryptedMessageLength = decryptedMessage.length();
	byte bytesDecryptedMessage[bytesDecryptedMessageLength];
	stringToByteArray(bytesDecryptedMessage, decryptedMessage);

	uint32_t bytesEncryptedMessageLength = aesLib.get_cipher_length(bytesDecryptedMessageLength);
	byte bytesEncryptedMessage[bytesEncryptedMessageLength];
	aesLib.encrypt(bytesDecryptedMessage, bytesDecryptedMessageLength, bytesEncryptedMessage, this->privateKey, this->keyLength, this->ivKey);

	uint32_t bytesBase64EncodedMessageLength = base64::encodeLength(bytesEncryptedMessageLength);
	byte bytesBase64EncodedMessage[bytesBase64EncodedMessageLength];
	base64::encode(bytesEncryptedMessage, bytesEncryptedMessageLength, (char*)bytesBase64EncodedMessage);

	String base64EncodedMessage = String((char*)bytesBase64EncodedMessage);
	Serial.print(base64EncodedMessage);
}

String SafeCommunication::receivedMessage(){
	while(!Serial.available());
	String base64EncodedMessage = Serial.readString();

	uint32_t bytesBase64EncodedMessageLength = base64EncodedMessage.length() + 1;
	byte bytesBase64EncodedMessage[bytesBase64EncodedMessageLength];
	base64EncodedMessage.getBytes(bytesBase64EncodedMessage, bytesBase64EncodedMessageLength);

	uint32_t bytesEncryptedMessageLength = base64::decodeLength((char*)bytesBase64EncodedMessage);
	byte bytesEncryptedMessage[bytesEncryptedMessageLength];
	base64::decode((char*)bytesBase64EncodedMessage, bytesEncryptedMessage);

	uint32_t bytesDecryptedMessageLength = bytesEncryptedMessageLength;
	byte bytesDecryptedMessage[bytesDecryptedMessageLength];
	uint32_t decryptedMessageLength = aesLib.decrypt(bytesEncryptedMessage, bytesEncryptedMessageLength, bytesDecryptedMessage, this->privateKey, this->keyLength, this->ivKey);

	String decryptedMessage;
	if(decryptedMessageLength >= 1000)
		decryptedMessage = "";
	else
		decryptedMessage = byteArrayToString(bytesDecryptedMessage, decryptedMessageLength);

	return decryptedMessage;
}
