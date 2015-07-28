/*
* Blink.c
*
* Created: 7/26/2015 11:29:20 AM
*  Author: Christopher
*/

#include <stdint.h>
#include "led.h"
#include <stdbool.h>

#ifdef DEBUG
    #define DELAYITERATIONS 0
#else
    #define DELAYITERATIONS 10000
#endif

int main(void)
{
    initLights();
    
    while(true)
    {
        blinkInSequence(DELAYITERATIONS);
    }
}