/*
 * LCD.h
 *
 * Created: 7/19/2022 6:48:44 PM
 *  Author: BLU-RAY
 */ 
#include <avr/io.h>
#include <stdint.h>
#include <string.h>
#include <util/delay.h>
#define LCD_DDR DDRD
#define LCD_PORT PORTD
#define LCD_Port LCD_PORT

#define RS PD0
#define EN PD1

#ifndef LCD_H_
#define LCD_H_

void LCD_cmd(unsigned char cmnd);
void LCD_init();
void LCD_sendletter(unsigned char data);

void LCD_sendstring(const char* str);

#endif /* LCD_H_ */