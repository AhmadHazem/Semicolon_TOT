/*
 * Motors_session.c
 *
 * Created: 8/4/2022 3:16:38 PM
 * Author : BLU-RAY
 */ 
#define F_CPU 8000000UL
#include <avr/io.h>
#include "Servo.h"
#include "Stepper.h"
#include "EXT_INT.h"
#include "EXT_INT1.h"
#include "DC_Motor.h"
#include "Var_Res.h"

int main(void)
{
	Enable_INT0();
	Enable_INT1();
	Servo_init();
	Stepper_Init();
	VAR_RES_init();
	DC_motor_init();
	DC_motor_setspeed(50);	
	while(1)
	{
		Stepper_rot1();
		Stepper_rot2();
		Stepper_rot3();
		Stepper_rot4();
		DC_motor_setspeed(VAR_RES_read());
	}
}

