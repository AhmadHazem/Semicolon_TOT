/*
 * DIO.h
 *
 * Created: 1/9/2021 9:34:33 PM
 *  Author: karim
 */ 


#ifndef DIO_H_
#define DIO_H_
/*Macros*/
#include "DIO_CONFIG.h"
/*Function Prototypes*/
void DIO_SetPin_Direction(uint8_t port, uint8_t pin, uint8_t direction);
/*
If direction is defined as output
Set - Clear
Toggle
*/
void DIO_SetPin_Value(uint8_t port, uint8_t pin, uint8_t value);
void DIO_TglPin_Value(uint8_t port, uint8_t pin);

/*
If Direction defined as input 
Read(Get value)
*/
uint8_t DIO_GetPin_Value(uint8_t port, uint8_t pin);
/*activate internal pull-up*/
void DIO_SetPULLUp(uint8_t port, uint8_t pin);

#endif /* DIO_H_ */