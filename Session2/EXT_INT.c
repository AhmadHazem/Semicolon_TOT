/*
 * EXT_INT.c
 *
 * Created: 7/26/2022 7:34:23 AM
 *  Author: BLU-RAY
 */ 

#include "EXT_INT.h"

ISR(INT0_vect)
{
	PORTC=~PORTC;		/* Toggle PORTC */
	_delay_ms(50);  	/* Software debouncing control delay */
}

void LED_Interrupt_Set_Place()
{
	DDRC |= (1 << PC7);
	PORTC &= ~(1 << PC7);
}
void Enable_INT0()
{
	sei();
	LED_Interrupt_Set_Place();
	EXT_INT_DDR &= ~(1 << EXT_INT_PIN);			/* make PORTD pin7 as input */
	EXT_INT_PORT |= (1 << EXT_INT_PIN);			/* make PORTD pin7 as pull-up */
	GICR = 1<<INT0;		/* Enable INT0*/
	MCUCR = 1<<ISC01 | 1<<ISC00;  /* Trigger INT0 on rising edge */
}