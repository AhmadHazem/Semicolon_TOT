/*
 * Servo.c
 *
 * Created: 8/5/2022 8:58:02 AM
 *  Author: BLU-RAY
 */ 
#include "Servo.h"
char status = 'A';
ISR(INT0_vect)
{
	if (status == 'A')
	{
		Servo_rotate_left();
		status = 'B';
	}
	else if (status == 'B')
	{
		Servo_rotate_intial();
		status = 'C';
	}
	else if (status == 'C')
	{
		Servo_rotate_right();
		status = 'D';
	}
	else if (status == 'D')
	{
		Servo_rotate_intial();
		status = 'A';
	}
}


void Servo_init()
{
	Timer1_init();
}

void Servo_rotate_left()
{
	Timer1_setDutyCycle(5);
	_delay_ms(1500);
}

void Servo_rotate_intial()
{
	Timer1_setDutyCycle(7.5);
	_delay_ms(1500);
}

void Servo_rotate_right()
{
	Timer1_setDutyCycle(10);
	_delay_ms(1500);
}
