/*
 * Timer1.c
 *
 * Created: 8/4/2022 5:19:41 PM
 *  Author: BLU-RAY
 */ 
#include "Timer1.h"

void Timer1_init()
{
	TCNT1 = 0;
	TIMER1_DDR |= (1 << OC1B);
	TCCR1B |= (1<<CS10) | (1<<CS11) | (1 << WGM13) | (1 << WGM12); // Set prescale clock clk/64 and choose mode 11
	TCCR1A |= (1 << WGM11) | (1 << WGM10) | (1 << COM1B1);
	OCR1A = 2499;
}

void Timer1_setDutyCycle(float dutyCycle)
{
	OCR1B = dutyCycle/100.0 * 2499;
}