/*
* blink.c
*
* Created: 7/25/2015 4:43:12 PM
*  Author: Christopher McClellan
*/

#include <xmega_a1_xplained/led.h>

void blink()
{
  LED_Toggle(LED0_GPIO);  
}