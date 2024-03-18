#ifndef SAFE_COMMUNICATION_H
#define SAFE_COMMUNICATION_H

#include "AESLib.h"
#include "arduino_base64.hpp"

enum Mode {
	sender,
	receiver
};

class SafeCommunication{
	private:
	AESLib aesLib;
	Mode mode; 
	byte* privateKey;
    byte* ivKey;
	uint32_t keyLength;

	public:
	SafeCommunication(Mode mode, uint32_t privateKeyLength);
	~SafeCommunication();
	bool initialize(uint8_t* commonKey);
	void sendMessage(String message);
	String receivedMessage();
};

#endif

