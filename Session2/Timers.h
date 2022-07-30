/*
 * Timers.h
 *
 * Created: 7/27/2022 8:46:26 PM
 *  Author: BLU-RAY
 */ 
#include <avr/io.h>
#include <avr/interrupt.h>

#ifndef TIMERS_H_
#define TIMERS_H_

void TIMER0_NORMAL_INIT(uint8_t val);
void TIMER0_CTC_INIT();


#endif /* TIMERS_H_ */