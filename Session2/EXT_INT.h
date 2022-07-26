/*
 * EXT_INT.h
 *
 * Created: 7/26/2022 7:34:10 AM
 *  Author: BLU-RAY
 */ 
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#define EXT_INT_DDR DDRD
#define EXT_INT_PORT PORTD
#define EXT_INT_PIN PD2
#ifndef EXT_INT_H_
#define EXT_INT_H_


void Enable_INT0();
void LED_Interrupt_Set_Place();

#endif /* EXT_INT_H_ */