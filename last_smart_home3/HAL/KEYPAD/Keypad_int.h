/*
 * Keypad_int.h
 *
 *  Created on: Feb 2, 2023
 *      Author: aya_enan
 */

#ifndef KEYPAD_KEYPAD_INT_H_
#define KEYPAD_KEYPAD_INT_H_

#define NO_PRESSED_KEY  0xFF //255

#define ACTIVE_LOW_PRESSED   0

void H_KEYPAD_void_init(void);

u8   H_KEYPAD_u8_getPressesKey(void);


#endif /* KEYPAD_KEYPAD_INT_H_ */
