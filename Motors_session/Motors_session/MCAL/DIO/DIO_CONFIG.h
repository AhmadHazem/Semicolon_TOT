/*
* DIO_CONFIG.h
*
* Created: 1/9/2021 9:34:25 PM
*  Author: karim
*/


#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_

#include "avr/io.h"
#include <stdint.h>
typedef enum
{
	PORT_A = 0,
	PORT_B = 1,
	PORT_C = 2,
	PORT_D = 3
}DIO_Port;//New user-define data-type(Enum)
/*Renaming for ports*/
#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3
/*Renaming for pins*/
#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7
/*Renaming Pin Direction*/
#define DIO_PIN_INPUT  0
#define DIO_PIN_OUTPUT 1
/*Renaming Pin State*/
#define DIO_PIN_LOW  0
#define DIO_PIN_HIGH 1
/*Renaming Port Direction*/
#define DIO_PORT_INPUT  0x00
#define DIO_PORT_OUTPUT 0xFF
/*Renaming Port state*/
#define DIO_PORT_LOW  0x00
#define DIO_PORT_HIGH 0xFF
/*Bit Math operations*/
#define SET_BIT(REG, BIT)  REG |= (1<<BIT)
#define CLR_BIT(REG, BIT)  REG &=~(1<<BIT)
#define TGL_BIT(REG, BIT)  REG ^= (1<<BIT)
#define GET_BIT(REG, BIT)  ((REG>>BIT)&1)
#endif /* DIO_CONFIG_H_ */