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

#ifdef DEBUG
    #define DELAYITERATIONS 0
#else
    #define DELAYITERATIONS 10000
#endif

#ifdef DEBUG
    #define CLOCK TC_CLKSEL_DIV1_gc
#else 
    #define CLOCK TC_CLKSEL_DIV64_gc
#endif

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
    initLights();
        
	// Set up Timer/Counter 0.
    
    // Default System Clock is 2MHz; (2,000,000ticks/sec)
    // 65,535 ticks in default Period (16 bit integer)
    // Clock/Prescaler/Period = Light Cycles/sec
    // 2,000,000/64/65,535 = 31,250/65,535 = 1 overflow/0.4768444 secs =~ 2 overflows/sec
    // TODO: get a more precise 2Hz lights cycle (use a compare or a different period?)
    
    TCC0.CTRLA = (TCC0.CTRLA & ~TC0_CLKSEL_gm) | CLOCK;
    //TCC0.CTRLA = (TCC0.CTRLA & ~TC0_CLKSEL_gm) | TC_CLKSEL_DIV64_gc; 
	TCC0.INTCTRLA = ( TCC0.INTCTRLA & ~TC0_OVFINTLVL_gm ) | TC_OVFINTLVL_LO_gc; // Enable overflow interrupt.
    
    //enable low level interrupts
    PMIC.CTRL |= PMIC_LOLVLEN_bm; //0b00000001
    // enable global interrupts:
    sei();
    
    while(true)
    {   
        //blinkInSequence(DELAYITERATIONS);
    }
}

