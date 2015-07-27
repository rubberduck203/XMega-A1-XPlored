/*
 * led.c
 *
 * Created: 7/26/2015 3:10:08 PM
 *  Author: Christopher
 */ 

#include "led.h"

#define LEDPORT_DIR PORTE_DIR

void init(void)
{
    LEDPORT_DIR = 0b11111111; //Configure LED port for output
    LEDPORT = 0b11111111; //LEDs are active low, this makes sure they're off on start up
}

//Turns light at provided port pin on and all others off.
void toggleLights(int ledPosition)
{
    LEDPORT = ~(1 << ledPosition);
}