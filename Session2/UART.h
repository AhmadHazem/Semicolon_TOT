/*
 * UART.h
 *
 * Created: 8/10/2022 4:32:02 PM
 *  Author: BLU-RAY
 */ 
#define F_CPU 8000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <string.h>

#ifndef UART_H_
#define UART_H_
#define BAUD_CLC(BAUD_RATE) (((F_CPU)/(16*BAUD_RATE)) - 1)
unsigned char UART_RecieveChar();
void UART_init(unsigned long baudRate);
void UART_SendChar(unsigned char Character);
void UART_SendString(char* str);

#endif /* UART_H_ */