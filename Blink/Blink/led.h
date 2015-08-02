/*
 * led.h
 *
 * Created: 7/26/2015 2:55:00 PM
 *  Author: Christopher McClellan
 */ 

#include <avr/io.h>

#define LEDPORT PORTE_OUT

//see startTimer for comment
#ifdef DEBUG
#define LED_CLOCK TC_CLKSEL_DIV1_gc
#else
#define LED_CLOCK TC_CLKSEL_DIV64_gc
#endif

//see startTimer for comment
#ifdef DEBUG
#define LED_PERIOD 0x01;
#else
#define LED_PERIOD 0xFFFF;
#endif

typedef uint8_t Lights;

void initLeds(void);
void startTimer(void);

void setLights(Lights lights);
void blinkInSequence(int seconds);