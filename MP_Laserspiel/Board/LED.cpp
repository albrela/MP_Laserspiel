// 
// 
// 

// Driver
#include "../Driver/Pins.h"

// This class
#include "LED.h"


void LED::vInit()
{
	pinMode(ledDebug, OUTPUT);
}

void LED::vSetBrightness(uint8_t usiLed, uint8_t usiBrightness)
{
	uint8_t l_usiLedBrightness;
	
	// Proof if brightness in range
	if (usiBrightness > LED_BRIGTHNESS_MAX)
	{
		l_usiLedBrightness = LED_BRIGTHNESS_MAX;
	}
	else if (usiBrightness < LED_BRIGTHNESS_MIN)
	{
		l_usiLedBrightness = LED_BRIGTHNESS_MIN;
	}
	else
	{
		l_usiLedBrightness = usiBrightness;
	}
	
	// Set LED brightness
	pins.vSetPinAnalog(usiLed, l_usiLedBrightness);
}

LED led;