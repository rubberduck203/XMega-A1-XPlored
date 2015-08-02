/*
* Blink.c
*
* Created: 7/26/2015 11:29:20 AM
*  Author: Christopher
*/

#include <stdint.h>
#include <stdbool.h>
#include <avr/interrupt.h>

#include "led.h"

ISR(TCC0_OVF_vect)
{    
    // LEDs are active low, so invert the lights 
    //  and shift left to get next active light.
    Lights newLightPosition = (~LED_PORT) << 1;
    
    // If lights are off after shifting, we get a 0.
    if (!newLightPosition) 
    { 
        // restart the sequence by lighting the first light.
        newLightPosition = 0b00000001;
    }
    
    // We have something like 0b00010000 right now.
    //  Invert it back before assigning lights back
    setLights(~newLightPosition);
}

int main(void)
{
    initLeds();
    startLedTimer();
    
    // enable global interrupts:
    sei();
    
    while(true)
    {
        // let the interrupts handle it
    }
}

