/*
 * MyClass.cpp
 *
 * Created: 5/9/2018 11:42:28 PM
 * Author: Larsen
 */ 

// Board
#include "Board/LED.h"

// Driver
#include "Driver/Pins.h"

// This class
#include "MyClass.h"


void MyClass::setup()
{
	// Initialize board modules
	led.vInit();
} 

void MyClass::loop()
{
	// Test Debug LED
	uint8_t l_usiDebugLedBrightness = LED_BRIGTHNESS_MIN;
	
	while (true)
	{
		led.vSetBrightness(ledDebug, l_usiDebugLedBrightness);
		l_usiDebugLedBrightness++;
		
		if (l_usiDebugLedBrightness >= LED_BRIGTHNESS_MAX)
		{
			l_usiDebugLedBrightness = LED_BRIGTHNESS_MIN;
		}
		
		delay(10);
	}
}

MyClass myClass;

