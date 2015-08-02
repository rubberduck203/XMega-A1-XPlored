/*
 * led.c
 * 
 * Created: 7/26/2015 3:10:08 PM
 *  Author: Christopher McClellan
 */ 

#include "led.h"

#define LEDPORT_DIR PORTE_DIR

void initLeds(void)
{
    LEDPORT_DIR = 0b11111111; //Configure LED port for output
    LEDPORT = 0b11111111; //LEDs are active low, this makes sure they're off on start up
}

void setLights(Lights lights)
{
    LEDPORT = lights;
}

//[obsolete]
//terribly bad busy-loop wait, replace this
void delay(volatile uint32_t d)
{
    while (d-- != 0)     // loops while non-0 and decrements
    ;
}

//[obsolete]
void blinkInSequence(int seconds)
{
    //left shift until it overflows after the 8th light
    for (Lights lights = 1; lights != 0; lights <<= 1) {
        setLights(lights);
        
        delay(seconds);
    }
}

void startTimer()
{
    // Set up Timer/Counter 0.
    
    // Default System Clock is 2MHz; (2,000,000ticks/sec)
    // 65,535 ticks in default Period (16 bit integer)
    // Clock/Prescaler/Period = Light Cycles/sec
    // 2,000,000/64/65,535 = 31,250/65,535 = 1 overflow/0.4768444 secs =~ 2 overflows/sec
    // TODO: get a more precise 2Hz lights cycle (use a compare or a different period?)
    
    // TODO: change to a 4Hz cycle
    
    TCC0.PER = LED_PERIOD //ticks before overflow
    TCC0.CTRLA = (TCC0.CTRLA & ~TC0_CLKSEL_gm) | LED_CLOCK; //Sets clock to be used
    TCC0.INTCTRLA = ( TCC0.INTCTRLA & ~TC0_OVFINTLVL_gm ) | TC_OVFINTLVL_LO_gc; // Enable overflow interrupt as low level
    
    //enable all low level interrupts
    PMIC.CTRL |= PMIC_LOLVLEN_bm; //0b00000001
}

