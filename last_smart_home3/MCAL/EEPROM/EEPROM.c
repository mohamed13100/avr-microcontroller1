/*
 * EEPROM_prog.C
 *
 *  Created on: Feb 18, 2023
 *      Author: mohamed
 */

#ifndef EEPROM_EEPROM_PROG_C_
#define EEPROM_EEPROM_PROG_C_


#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "EEPROM_private.h"

void EEPROM_write(u16 address, u8 data )
{
	while(GET_BIT(EECR,EEWE) == 1);
	while(GET_BIT(SPMCR,SPMEN) == 1);

	/*set up address register*/
	EEARL = (char)address;
	EEARH = (char)(address>>8);
	/*set up data register*/
	EEDR = data ;
	/*write logical one to EEMWE*/
	SET_BIT(EECR,EEMWE);
	/*start EEPROM write by setting EEWE*/
	SET_BIT(EECR,EEWE);
	/* wait for completion of  write operation*/
	while(GET_BIT(EECR,EEWE) == 1);
}
u8 EEPROM_read( u16 address )
{
	/*set up address register*/
	EEARL = (char)address;
	EEARH = (char)(address>>8);
	/*start EEPROM read by setting EERE*/
	SET_BIT(EECR,EERE);
	/*return data from data register*/
	return EEDR ;
}

#endif /* EEPROM_EEPROM_PROG_C_ */
