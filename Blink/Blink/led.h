/*
 * led.h
 *
 * Created: 7/26/2015 2:55:00 PM
 *  Author: Christopher
 */ 

#include <avr/io.h>

#define LEDPORT PORTE_OUT
#define LEDPORT_DIR PORTE_DIR

void init(void);
void toggleLights(int ledPosition);