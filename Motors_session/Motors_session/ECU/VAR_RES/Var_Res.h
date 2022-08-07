/*
 * Var_Res.h
 *
 * Created: 8/6/2022 5:19:18 PM
 *  Author: BLU-RAY
 */ 
#include "Timer0.h"
#include "ADC.h"

#ifndef VAR_RES_H_
#define VAR_RES_H_
#define VAR_RES_DDR DDRA
#define VAR_RES_PORT PORTA
#define VAR_RES_CHANNEL PA0

void VAR_RES_init();
unsigned int VAR_RES_read();


#endif /* VAR_RES_H_ */