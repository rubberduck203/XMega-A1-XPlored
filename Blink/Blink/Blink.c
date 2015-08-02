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

volatile uint8_t currentLightPosition = 0;

ISR(TCC0_OVF_vect)
{
    if (currentLightPosition > 7)
    {
        currentLightPosition = 0;
    }
    
    LEDPORT = ~(1 << currentLightPosition);
    
    currentLightPosition++;
}

int main(void)
{
    initLeds();
    startTimer();
    
    // enable global interrupts:
    sei();
    
    while(true)
    {
        // let the interrupts handle it
    }
}

