/*
 * UART.c
 *
 * Created: 8/10/2022 4:32:20 PM
 *  Author: BLU-RAY
 */ 
#include "UART.h"



void UART_init(unsigned long baudRate)
{
	UCSRB |=  (1 << TXEN) | (1 << RXEN);
	UCSRC |= (1 << URSEL) | (1 << UCSZ1) | (1 << UCSZ0);
	baudRate = BAUD_CLC(baudRate);
	UBRRL = baudRate;
	UBRRH = (baudRate >> 8);
}

unsigned char UART_RecieveChar()
{
	while(((1 << UCSRA) & RXC) == 0);
	return (unsigned char)(UDR);
}

void UART_SendChar(unsigned char Character)
{
	while(((1 << UCSRA) & UDRIE) == 0);
	UDR = Character;
}

void UART_SendString(char* str)
{
	for (int i=0 ; i < strlen(str); i++)
	{
		UART_SendChar(str[i]);
	}
}