/*
 * LM35_prog.c
 *
 *  Created on: Feb 22, 2023
 *      Author: mohamed
 */

#ifndef LM35_LM35_PROG_C_
#define LM35_LM35_PROG_C_

#include "STD_TYPES.h"
#include "ADC_int.h"

void H_TempSensor_void_Init(void)
{
	M_ADC_void_init();
}

u16 H_TempSensor_u16_read(void)
{
	u16 Temp_Read =(M_ADC_u16_adcRead() * (f32) 500 ) / 1023 ;
	return Temp_Read ;
}
#endif /* LM35_LM35_PROG_C_ */
