/*
 * Stepper.h
 *
 * Created: 8/6/2022 1:13:14 PM
 *  Author: BLU-RAY
 */ 
#define F_CPU 8000000UL
#include <avr/io.h>
#include <stdint.h>
#include <util/delay.h>

#ifndef STEPPER_H_
#define STEPPER_H_
#define STEPPER_DDR DDRC
#define STEPPER_PORT PORTC
#define IN1 PC0
#define IN2 PC1
#define IN3 PC2
#define IN4 PC3
void Stepper_Init();
void Stepper_rot1();
void Stepper_rot2();
void Stepper_rot3();
void Stepper_rot4();


#endif /* STEPPER_H_ */