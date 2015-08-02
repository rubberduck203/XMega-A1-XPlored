/*
 * switches.h
 *
 * Created: 8/2/2015 11:33:51 AM
 *  Author: Christopher
 */ 


//Eight mechanical button switches are connected to XMEGA PORTD(PD0:PD5) and
//PORTR(PR0:PR1). Internal pull-ups should be enabled to detect when the buttons
//are pushed, as they short the respective line to GND.

//Switch 0-5 are on PORTD
#define SW0 PD0
#define SW1 PD1
#define SW2 PD2
#define SW3 PD3
#define SW4 PD4
#define SW5 PD5
// I don't need all 8 switches right now. 
// Let's just deal with PORTD
////Switches 6 & 7 are on PORTR (I don't know why they call it PORTR, it seems to be PORTH to me)
//#define SW6 PH0
//#define SW7 PH1

#define SWITCHPORT PORTD
#define SWITCHPORT_MASK_gc	(0x3F<<0) // Pin 0-5

// I don't need all 8 switches right now.
// Let's just deal with PORTD
//#define SWITCHPORTH PORTR
//#define SWITCHPORTH_MASK_gc	(0x03<<0) // Pin 0-1
//
//// Pin 0-1 on PORTR are used to represent Switch 6-7,
//// in order to position the bits rigth in a byte they
//// need to be shifted with an offset
//#define SWITCHPORTH_OFFSET 6

#define SWITCHPORT_INT0_vect PORTD_INT0_vect
//#define SWITCHPORTH_INT0_vect PORTR_INT0_vect