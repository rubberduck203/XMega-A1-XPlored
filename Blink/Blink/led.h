/*
 * led.h
 *
 * Created: 7/26/2015 2:55:00 PM
 *  Author: Christopher
 */ 

#include <avr/io.h>

#define LEDPORT PORTE_OUT

typedef uint8_t light_positions;

void initLights(void);
void setLights(light_positions lights);