/*
* Blink.c
*
* Created: 7/26/2015 11:29:20 AM
*  Author: Christopher
*/

#include <stdint.h>
#include "led.h"
#include "bool.h"

#ifdef DEBUG
    #define DELAYITERATIONS 0
#else
    #define DELAYITERATIONS 10000
#endif 

void delay(volatile uint32_t d)
{
    while (d-- != 0)     // loops while non-0 and decrements
    ;
}

int main(void)
{
    initLights();
    
    while(true)
    {
        //left shift until it overflows after the 8th light
        for (light_positions lights = 1; lights != 0; lights <<= 1) {
            setLights(lights);
            
            delay(DELAYITERATIONS);
        }
    }
}