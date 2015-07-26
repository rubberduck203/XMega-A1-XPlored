/*
* Blink.c
*
* Created: 7/26/2015 11:29:20 AM
*  Author: Christopher
*/

#include <stdint.h>
#include "led.h"

void delay(volatile uint32_t d)
{
    while (d-- != 0)     // loops while non-0 and decrements
    ;
}

int main(void)
{
    init();
    
    while(1)
    {
        for (int i = 0; i < 8; i++)
        {
            toggleLights(i);
            delay(10000);
        }
    }
}