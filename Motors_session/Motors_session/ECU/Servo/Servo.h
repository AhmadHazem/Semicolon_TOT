/*
 * Servo.h
 *
 * Created: 8/5/2022 8:57:49 AM
 *  Author: BLU-RAY
 */ 
#include "Timer1.h"
#include <avr/interrupt.h>
#define F_CPU 8000000UL
#include <util/delay.h>

#ifndef SERVO_H_
#define SERVO_H_

void Servo_init();
void Servo_rotate_left();
void Servo_rotate_right();
void Servo_rotate_intial();


#endif /* SERVO_H_ */