// Pins.h

#ifndef _PINS_h
#define _PINS_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif


#define relay1_Pin 22 // digital out for "NC Beleuchtung 230V"
#define relay2_Pin 24 // digital out for "NO 12V Beleuchtung Key Box"
#define relay3_Pin 26 // digital out for "NC Alarmanlage"
#define relay4_Pin 28 // digital out for "NO 12V Taster Bereitschaft Nebelmaschine"
#define relay5_Pin 30 // digital out for "NO Rundumleuchte"
#define relay6_Pin 32 // digital out for "NO Laser"
#define relay7_Pin 34 // digital out for "NO 12V Spulen Key Box"
#define relay8_Pin 36 // digital out for "NO Nebelmaschine"

#define ledRingGreen 2 	// pin for green LEDs
#define ledRingRedIn 4 	// pin for inner red LEDs
#define ledRingRedMid 6 // pin for middle red LEDs
#define ledRingRedOut 8 // pin for outer red LEDs

#define ledDebug 13 // yellow LED on board

class Pins
{
	public:
		/* Functions */
		void	vInit			(void);
		
		void	vSetPinDigital  (uint8_t usiPinNumber, bool bState);
		bool	bGetPinDigital  (uint8_t usiPinNumber);
		void    vSetPinAnalog   (uint8_t usiPinNumber, uint8_t usiValue);
		uint8_t usiGetPinAnalog (uint8_t usiPinNumber);
		
	protected:
	private:
};

extern Pins pins;

#endif

