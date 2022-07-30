/*
 * Timers.c
 *
 * Created: 7/27/2022 8:46:39 PM
 *  Author: BLU-RAY
 */ 
#include "Timers.h"

ISR(TIMER0_OVF_vect)
{
	PORTB ^= (1 << PB3);
	TCNT0 = 0;
}

void TIMER0_NORMAL_INIT(uint8_t val)
{
	sei();
	DDRB |= (1 << PB3);
	TIMSK |= (1 << TOIE0);
	TCNT0 = val;
	TCCR0= 0x05;
}

void TIMER0_CTC_INIT()
{
	DDRB |= (1 << PB3);	/* PB3 (OC0) as output */	
	TCCR0 = 0x1D;		/* CTC mode, toggle on compare match,
                      		clk- no pre-scaling */ 
	OCR0 = 200;  		/* compare value */
}