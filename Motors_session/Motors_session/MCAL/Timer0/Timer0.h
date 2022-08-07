/*
 * Timer0.h
 *
 * Created: 8/6/2022 3:47:45 PM
 *  Author: BLU-RAY
 */ 
#include <avr/io.h>

#ifndef TIMER0_H_
#define TIMER0_H_
#define TIMER0_DDR DDRB
#define TIMER0_PORT PORTB
#define OC0 PB3
void Timer0_init();
void Timer0_setDutyCycle(unsigned int dutycycle);



#endif /* TIMER0_H_ */