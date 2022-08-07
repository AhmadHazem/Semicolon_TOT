/*
 * EXT_INT1.c
 *
 * Created: 8/6/2022 4:20:20 PM
 *  Author: BLU-RAY
 */ 
#include "EXT_INT1.h"

void Enable_INT1()
{
	DDRD &= ~(1 << PD3);
	PORTD |= (1 << PD3);
	GICR |= (1<<INT1);		/* Enable INT0*/
	MCUCR |= ((1<<ISC10)|(1<<ISC11));/* Trigger INT0 on Rising Edge triggered */
	sei();				/* Enable Global Interrupt */
}