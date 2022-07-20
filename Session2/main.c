/*
 * Session2.c
 *
 * Created: 7/20/2022 8:10:24 PM
 * Author : BLU-RAY
 */ 

#include <avr/io.h>
#include "LCD.h"
#include "Keypad.h"

int main(void)
{
    LCD_init();
	LCD_sendstring("Hello");
	_delay_ms(500);
	LCD_cmd(0x01);
	keypad_init();
	while(1)
	{
		LCD_sendletter(readKeypad());
		_delay_ms(100);
	}
	

}

