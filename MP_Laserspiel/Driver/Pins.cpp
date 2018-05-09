// 
// 
// 

// This class
#include "Pins.h"

void Pins::vInit()
{
	return;
}

void Pins::vSetPinDigital(uint8_t usiPinNumber, bool bState)
{
	digitalWrite(usiPinNumber, bState);
}

bool Pins::bGetPinDigital(uint8_t usiPinNumber)
{
	bool bPinState = digitalRead(usiPinNumber);
	return bPinState;
}

void Pins::vSetPinAnalog(uint8_t usiPinNumber, uint8_t usiValue)
{
	analogWrite(usiPinNumber, usiValue);
}

uint8_t Pins::usiGetPinAnalog(uint8_t usiPinNumber)
{
	uint8_t usiPinValue = analogRead(usiPinNumber);
	return usiPinValue;
}


Pins pins;
