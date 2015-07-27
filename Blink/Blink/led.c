/*
 * led.c
 *
 * Created: 7/26/2015 3:10:08 PM
 *  Author: Christopher McClellan
 */ 

#include "led.h"

#define LEDPORT_DIR PORTE_DIR

void initLights(void)
{
    LEDPORT_DIR = 0b11111111; //Configure LED port for output
    LEDPORT = 0b11111111; //LEDs are active low, this makes sure they're off on start up
}

void setLights(light_positions lights)
{
    LEDPORT = lights;
}

//terribly bad busy-loop wait, replace this
void delay(volatile uint32_t d)
{
    while (d-- != 0)     // loops while non-0 and decrements
    ;
}

void blinkInSequence(int seconds)
{
    //left shift until it overflows after the 8th light
    for (light_positions lights = 1; lights != 0; lights <<= 1) {
        setLights(lights);
        
        delay(seconds);
    }
}