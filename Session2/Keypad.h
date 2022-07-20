/*
 * Keypad.h
 *
 * Created: 7/15/2022 10:48:38 PM
 *  Author: BLU-RAY
 */ 

#include <avr/io.h>
#define KEYPAD_PORT PORTB
#define KEYPAD_DIR  DDRB
#define KEYPAD_PIN  PINB
#ifndef KEYPAD_H_
#define KEYPAD_H_

void keypad_init();
unsigned char readKeypad();


#endif /* KEYPAD_H_ */