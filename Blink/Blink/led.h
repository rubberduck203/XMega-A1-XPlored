/*
* led.h
*
* Created: 7/26/2015 2:55:00 PM
*  Author: Christopher McClellan
*/

#include <avr/io.h>

#define LED_PORT PORTE_OUT //alias PORTE as LEDPORT for a better abstraction

// Default System Clock is 2MHz; (2,000,000ticks/sec)
// 65,535 ticks in default Period (16 bit integer)
//
// Clock/Prescaler/Period = Light Cycles/sec 
// 2MHz/64/0xFFFF = 2,000,000/64/65,535 = 31,250/65,535 = 1 overflow/0.4768444 secs =~ 2 overflows/sec == 2Hz light cycle
// 2MHz/64/0x7FFF = 2,000,000/64/32,767 = 31,250/32,767 = approx. 4Hz

// TODO: Get a more precise 4Hz cycle (use a compare or a different period?)

// debugging with the simulator is slow, use a faster clock for debug.
#ifdef DEBUG
#define LED_CLOCK TC_CLKSEL_DIV1_gc
#else
#define LED_CLOCK TC_CLKSEL_DIV64_gc
#endif

// debugging with the simulator is slow, use a faster clock for debug.
#ifdef DEBUG
#define LED_PERIOD 0x01;
#else
//#define LED_PERIOD 0xFFFF; //default period of 65,535 ticks
#define LED_PERIOD 0x7FFF; // half the default period 32,767 ticks/overflow
#endif

typedef uint8_t Lights;

void initLeds(void);
void startLedTimer(void);

void setLights(Lights lights);