#include <math.h>
#include "Thermistor.hpp"

Thermistor::Thermistor(uint8_t pin, uint16_t referanceMiliVolt, uint8_t adcBit) {
	this->pin = pin;
	this->referanceMiliVolt = referanceMiliVolt;
	this->maxAdcValue = pow(2, adcBit) - 1;
}

float Thermistor::calculateTemperature() {
	uint16_t digitalVoltage = analogRead(this->pin);
	float analogVoltage = digitalVoltage * this->referanceMiliVolt / (float)this->maxAdcValue;
	float celciusDegree = analogVoltage / 10;
	return celciusDegree;
}
