/*
 * LM35.c
 *
 * Created: 7/24/2022 6:03:35 PM
 *  Author: BLU-RAY
 */ 
#include "LM35.h"

void LM35_Init()
{
	ADC_DDR = 0x00;
	ADMUX =0xC0;
	ADCSRA =0x87;
}

int LM35_Read(unsigned char channel)
{
	ADMUX |= channel & 0x0f;
	int ALow,Ahigh;
	int Ain;
	ADCSRA |= (1 << ADSC);
	while((ADCSRA&(1<<ADIF))==0);
	_delay_us(300);
	ALow = (int)ADCL;
	Ahigh = (int)(ADCH << 8);
	Ain = Ahigh + ALow;
	return Ain;
}

