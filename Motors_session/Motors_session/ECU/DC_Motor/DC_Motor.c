/*
 * DC_Motor.c
 *
 * Created: 8/6/2022 3:47:13 PM
 *  Author: BLU-RAY
 */ 
#include "DC_Motor.h"

ISR(INT1_vect)
{
	DC_MOTOR_PORT ^= (1 << DC1);
	DC_MOTOR_PORT ^= (1 << DC2);
	_delay_ms(50);
}


void DC_motor_init()
{
	DC_MOTOR_DDR |= (1 << DC1) | (1 << DC2);
	DC_MOTOR_PORT |= (1 << DC1);
	DC_MOTOR_PORT &= ~(1 << DC2);
	Timer0_init();
}


void DC_motor_setspeed(unsigned int speed)
{
	if (speed >= 0 && speed <= 100)
	{
		Timer0_setDutyCycle(speed);
	}
	else
	{
		Timer0_setDutyCycle(0);
	}
	
}