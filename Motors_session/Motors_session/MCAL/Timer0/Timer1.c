/*
 * Timer1.c
 *
 * Created: 8/6/2022 3:47:58 PM
 *  Author: BLU-RAY
 */ 
#include "Timer0.h"

void Timer0_init()
{
	TIMER0_DDR |= (1 << OC0);
	TCNT0 = 0;
	TCCR0 |= (1 << WGM00) | (1 <<COM01) | (1 << CS01) | (1 << CS00); 
}

void Timer0_setDutyCycle(unsigned int dutycycle)
{
	OCR0 = dutycycle/100.0 * 256;
}