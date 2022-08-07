/*
 * Var_Res.c
 *
 * Created: 8/6/2022 5:19:30 PM
 *  Author: BLU-RAY
 */ 
#include "Var_Res.h"

void VAR_RES_init()
{
	VAR_RES_DDR &= ~(1 << VAR_RES_CHANNEL);
	ADC_init();
}

unsigned int VAR_RES_read()
{
     return	(ADC_Read(0)/4.0)/ 256.0 *100;
}