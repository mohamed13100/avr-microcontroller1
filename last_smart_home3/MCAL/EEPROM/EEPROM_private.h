/*
 * EEPROM_Praivet.h
 *
 *  Created on: Feb 18, 2023
 *      Author: mohamed
 */

#ifndef EEPROM_EEPROM_PRAIVET_H_
#define EEPROM_EEPROM_PRAIVET_H_

#include "STD_TYPES.h"

#define EEARL     (*((volatile u8*)0x3E))
#define EEARH     (*((volatile u8*)0x3F))
#define EEDR      (*((volatile u8*)0x3D))
#define EECR      (*((volatile u8*)0x3C))
#define SPMCR      (*((volatile u8*)0x57))
#define EEMWE	2
#define EEWE	1
#define EERE	0

#define SPMEN	0




#endif /* EEPROM_EEPROM_PRAIVET_H_ */
