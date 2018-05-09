// LED.h

#ifndef _LED_h
#define _LED_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

#define LED_BRIGTHNESS_MIN 0
#define LED_BRIGTHNESS_MAX 255


class LED
{
public:
	void vInit(void);
	void vSetBrightness(uint8_t usiPinNumber, uint8_t usiBrigthness);
	
protected:
private:
};

extern LED led;



#endif

