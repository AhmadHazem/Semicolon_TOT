/*
 * Keypad.c
 *
 * Created: 7/15/2022 10:48:57 PM
 *  Author: BLU-RAY
 */ 

#include "Keypad.h"
#include "LCD.h"
#include <util/delay.h>

const uint8_t KEYPAD[4][4] =
{
	{'7','8','9','/'},
	{'4','5','6','X'},
	{'1','2','3','-'},
	{'C','0','=','+'}
};

void keypad_init()
{
	KEYPAD_DIR = 0x0F;
	KEYPAD_PORT = 0xFF;
	DDRA = 0xFF;

}



unsigned char readKeypad()
{
	
	int row_number = 0;
	unsigned char temp = 0;
	int coloumn_number = 4;
	unsigned char val = 'b';
	int flag = 1;
	while (flag)
	{ 
		for (row_number = 0 ; row_number < 4 ; row_number++)
		{
			KEYPAD_PORT &= ~(1 << row_number);
			for (coloumn_number = 4; coloumn_number < 8; coloumn_number++)
			{
				temp = (KEYPAD_PIN >> coloumn_number) & 1;
				if (temp == 0)
				{
					while (temp == 0)
					{
						temp = (KEYPAD_PIN >> coloumn_number) & 1;
					}
					flag = 0;	
					val = KEYPAD[row_number - 0][coloumn_number - 4];
					_delay_us(100);
				}
			}
			KEYPAD_PORT |= (1 << row_number);
		}
	
	}	
	return val;
}