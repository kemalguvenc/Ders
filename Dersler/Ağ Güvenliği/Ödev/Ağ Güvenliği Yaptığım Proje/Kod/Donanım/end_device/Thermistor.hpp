#ifndef THERMISTOR_H
#define THERMISTOR_H
#include <Arduino.h>

class Thermistor {
private:
	uint8_t pin ;
	uint16_t referanceMiliVolt;
	uint32_t maxAdcValue;

public:
	Thermistor(uint8_t pin, uint16_t referanceMiliVolt, uint8_t adcBit);
	float calculateTemperature();
};

#endif
