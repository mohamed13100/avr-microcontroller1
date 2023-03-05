/*
 * EEPROM_interface.h
 *
 *  Created on: Feb 18, 2023
 *      Author: mohamed
 */

#ifndef EEPROM_EEPROM_INTERFACE_H_
#define EEPROM_EEPROM_INTERFACE_H_

#include "STD_TYPES.h"



/*
Function Name        : EEPROM_write
Function Returns     : void
Function Arguments   : unsigned short address, unsigned char data
Function Description :  write one byte to the given  address.
*/
void EEPROM_write(u16 address, u8 data );
/*
Function Name        : EEPROM_read
Function Returns     : unsigned char
Function Arguments   :  unsigned short address
Function Description :  read one byte from the given  address.
*/
u8 EEPROM_read( u16 address );

#endif /* EEPROM_EEPROM_INTERFACE_H_ */
