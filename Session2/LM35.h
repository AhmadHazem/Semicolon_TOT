/*
 * LM35.h
 *
 * Created: 7/24/2022 6:03:19 PM
 *  Author: BLU-RAY
 */ 

#include <avr/io.h>
#include <util/delay.h>
#define ADC_DDR DDRA
#ifndef LM35_H_
#define LM35_H_

void LM35_Init();
int LM35_Read(unsigned char channel);


#endif /* LM35_H_ */