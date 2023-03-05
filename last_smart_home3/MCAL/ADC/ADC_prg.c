/*
 * ADC_prg.c
 *
 *  Created on: Feb 16, 2023
 *      Author: majec
 */

#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include"ADC_pri.h"
#include"ADC_config.h"
#include"ADC_int.h"

void M_ADC_void_init(void)
{
	SET_BIT(ADMUX_REG,REFS0);
	SET_BIT(ADCSRA_REG,	ADEN_BIT);

	SET_BIT(ADCSRA_REG,ADPS0);
}

u16 M_ADC_u16_adcRead(void)
{
	unsigned short int read_val;

	SET_BIT(ADCSRA_REG,ADSC_BIT);
	while( GET_BIT(ADCSRA_REG,ADIF_BIT) == 0);//stay in your position till ADIF become 1
	SET_BIT(ADCSRA_REG,ADIF_BIT); // clear ADIF
	read_val=(ADCL);
	read_val|=(ADCH<<8);
	return read_val ;

}
