/*
 * led.c
 * 
 * Created: 7/26/2015 3:10:08 PM
 *  Author: Christopher McClellan
 */ 

#include "led.h"

#define LEDPORT_DIR PORTE_DIR

//Timer-Counter C0
#define LED_TIMER TCC0
#define CLOCK_SEL_MASK TC0_CLKSEL_gm 
#define OVERFLOW_INTERRUPT_LVL_MASK TC0_OVFINTLVL_gm 
#define INTERRUPT_LVL TC_OVFINTLVL_LO_gc //Use the low level overflow interrupt

void initLeds(void)
{
    LEDPORT_DIR = 0b11111111; //Configure LED port for output
    LED_PORT = 0b11111111; //LEDs are active low, this makes sure they're off on start up
}

void setLights(Lights lights)
{
    LED_PORT = lights;
}

void startLedTimer()
{
    LED_TIMER.PER = LED_PERIOD //ticks before overflow
    LED_TIMER.CTRLA = (LED_TIMER.CTRLA & ~CLOCK_SEL_MASK) | LED_CLOCK; //Sets clock to be used
    LED_TIMER.INTCTRLA = ( LED_TIMER.INTCTRLA & ~OVERFLOW_INTERRUPT_LVL_MASK ) | INTERRUPT_LVL; //starts timer
    
    //enable all low level interrupts
    PMIC.CTRL |= PMIC_LOLVLEN_bm; //0b00000001
}

