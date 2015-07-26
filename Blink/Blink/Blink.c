/*
* Blink.c
*
* Created: 7/26/2015 11:29:20 AM
*  Author: Christopher
*/


#include <avr/io.h>
#include <stdint.h>

void delay(volatile uint32_t d)
{
    while (d-- != 0)     // loops while non-0 and decrements
    ;
}

int main(void)
{
    PORTE_DIR = 0b11111111; //Configure PORTE (LEDS) for output
    PORTE_OUT = 0b11111111; //LEDs are active low, this makes sure they're off on start up
    
    while(1)
    {
        for (int i = 0; i < 8; i++)
        {
            PORTE_OUT = ~(1 << i);
            delay(10000);
        }
    }
}