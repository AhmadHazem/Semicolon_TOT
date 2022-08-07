/*
 * ADC.c
 *
 * Created: 8/6/2022 4:36:04 PM
 *  Author: BLU-RAY
 */ 
#include "ADC.h"


void ADC_init()
{
		sei();
		ADCSRA = 0x87;
		ADMUX = 0x40;
}

unsigned int ADC_Read(unsigned char channel)
{
	ADMUX |= (channel & 0x07);
	unsigned int Ain,Alow,Ahigh;
	ADCSRA |= (1<<ADSC);		/* Start ADC conversion */
	while (!(ADCSRA & (1<<ADIF)));	
	ADCSRA |= (1<<ADIF);		
	_delay_ms(1);			
	Alow = (unsigned int)ADCL;
	Ahigh = (unsigned int)(ADCH * 256);
	Ain = Ahigh + Alow;
	return Ain;			/* Return ADC word */
}