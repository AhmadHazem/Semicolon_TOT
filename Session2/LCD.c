/*
 * LCD.c
 *
 * Created: 7/19/2022 6:49:36 PM
 *  Author: BLU-RAY
 */ 

#include "LCD.h"

void LCD_cmd( unsigned char cmnd )
{
	
	LCD_Port = (LCD_Port & 0x0F) | (cmnd & 0xF0);/* Sending upper nibble */
	LCD_Port &= ~ (1<<RS);		/* RS=0, command reg. */
	LCD_Port |= (1<<EN);		/* Enable pulse */
	_delay_ms(1);
	LCD_Port &= ~ (1<<EN);
	_delay_us(200);
	LCD_Port = (LCD_Port & 0x0F) | (cmnd << 4);/* Sending lower nibble */
	LCD_Port |= (1<<EN);
	_delay_us(1);
	LCD_Port &= ~ (1<<EN);
	_delay_ms(2);
}

void LCD_init()
{
	DDRD = 0xFF;
	DDRB = 0xFF;
	_delay_ms(20);
	
	LCD_cmd(0x02);		        /* send for 4 bit initialization of LCD  */
	LCD_cmd(0x28);              /* 2 line, 5*7 matrix in 4-bit mode */
	LCD_cmd(0x0c);              /* Display on cursor off*/
	LCD_cmd(0x06);              /* Increment cursor (shift cursor to right)*/
	LCD_cmd(0x01);              /* Clear display screen*/
	
	_delay_ms(2);
}

void LCD_sendletter(unsigned char data)
{
	LCD_Port = (LCD_Port & 0x0F) | (data & 0xF0);/* Sending upper nibble */
	LCD_Port |= (1<<RS);		/* RS=0, command reg. */
	LCD_Port |= (1<<EN);		/* Enable pulse */
	_delay_ms(1);
	LCD_Port &= ~ (1<<EN);
	_delay_us(200);
	LCD_Port = (LCD_Port & 0x0F) | (data << 4);/* Sending lower nibble */
	LCD_Port |= (1<<EN);
	_delay_us(1);
	LCD_Port &= ~ (1<<EN);
	_delay_ms(2);
}

void LCD_sendstring(const char* str)
{
	uint8_t i = 0;
	for (i = 0; i < strlen(str) ; i++)
	{
		LCD_sendletter(str[i]);
	}
}

void LCD_Clear()
{
	LCD_cmd(0x01);
}

void LCD_sendnumber(int num)
{
	char str[10];
	itoa(num,str,10);
	LCD_sendstring(str);
}