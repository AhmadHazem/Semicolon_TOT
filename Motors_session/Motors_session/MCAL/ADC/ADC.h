/*
 * ADC.h
 *
 * Created: 8/6/2022 4:36:13 PM
 *  Author: BLU-RAY
 */ 
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#ifndef ADC_H_
#define ADC_H_


void ADC_init();
unsigned int ADC_Read(unsigned char channel);


#endif /* ADC_H_ */