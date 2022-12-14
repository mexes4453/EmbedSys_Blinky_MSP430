/*
# Author : UDOH CHIEMEZIE ALBERT
# TARGET : MSP430 TEXAS INSTRUMENT MICROCONTROLLER
# DATE   : 17.09.22
# PROJECT: BLINKY
*/

# include <msp430.h>
# include "led.h"

int main(void)
{
	volatile unsigned int i;

	WDTCTL = WDTPW + WDTHOLD;		// Stop watchdog timer
	led_init();
	while (1)
	{
		led_toggle();
		for (i=10000; i>0; i--);	// delay
	}

}
