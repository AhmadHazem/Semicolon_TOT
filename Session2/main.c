/*
 * Session2.c
 *
 * Created: 7/20/2022 8:10:24 PM
 * Author : BLU-RAY
 */ 

#include <avr/io.h>
#include "LCD.h"
#include "LM35.h"
#include "EXT_INT.h"

int main(void)
{
    LCD_init();
	LM35_Init();
	LCD_sendstring("Hello LM35");
	_delay_ms(500);
	LCD_Clear();
	Enable_INT0();
	int val;
	while(1)
	{
		val = LM35_Read(1)*2.5/10;
		LCD_sendnumber(val);
		_delay_ms(300);
		LCD_Clear();
	}
	

}

