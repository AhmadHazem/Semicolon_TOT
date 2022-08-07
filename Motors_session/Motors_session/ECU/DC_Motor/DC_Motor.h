/*
 * DC_Motor.h
 *
 * Created: 8/6/2022 3:46:56 PM
 *  Author: BLU-RAY
 */ 
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "Timer0.h"

#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_
#define DC_MOTOR_DDR DDRB
#define DC_MOTOR_PORT PORTB
#define DC1 PB1
#define DC2 PB2
 
void DC_motor_init();
void DC_motor_setspeed(unsigned int speed);


#endif /* DC_MOTOR_H_ */