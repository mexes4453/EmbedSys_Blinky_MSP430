/*
# Author : UDOH CHIEMEZIE ALBERT
# TARGET : MSP430 TEXAS INSTRUMENT MICROCONTROLLER
# DATE   : 17.09.22
# PROJECT: BLINKY
*/

#include "led.h"

void led_init(void)
{
	P1DIR |= 0x01;		// Set P1.0 to output direction
}

void led_toggle(void)
{
	P1OUT ^= 0x01;		// Toggle P1.0 using XOR
}

