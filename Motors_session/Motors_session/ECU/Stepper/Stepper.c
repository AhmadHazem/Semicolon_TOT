/*
 * Stepper.c
 *
 * Created: 8/6/2022 1:13:28 PM
 *  Author: BLU-RAY
 */ 
#include "Stepper.h"

void Stepper_Init()
{
	STEPPER_DDR |= (1 << IN1);
	STEPPER_DDR |= (1 << IN2);
	STEPPER_DDR |= (1 << IN3);
	STEPPER_DDR |= (1 << IN4);
}

void Stepper_rot1()
{
	STEPPER_PORT |= (1 << IN1);
	STEPPER_PORT |= (1 << IN4);
	_delay_ms(800);
	STEPPER_PORT &= ~(1 << IN1);
	STEPPER_PORT &= ~(1 << IN4);
	_delay_ms(200);	
}

void Stepper_rot2()
{
	STEPPER_PORT |= (1 << IN1);
	STEPPER_PORT |= (1 << IN3);
	_delay_ms(800);
	STEPPER_PORT &= ~(1 << IN1);
	STEPPER_PORT &= ~(1 << IN3);
	_delay_ms(200);
}

void Stepper_rot3()
{
	STEPPER_PORT |= (1 << IN2);
	STEPPER_PORT |= (1 << IN3);
	_delay_ms(800);
	STEPPER_PORT &= ~(1 << IN2);
	STEPPER_PORT &= ~(1 << IN3);
	_delay_ms(200);
}

void Stepper_rot4()
{
	STEPPER_PORT |= (1 << IN2);
	STEPPER_PORT |= (1 << IN4);
	_delay_ms(800);
	STEPPER_PORT &= ~(1 << IN2);
	STEPPER_PORT &= ~(1 << IN4);
	_delay_ms(200);
}