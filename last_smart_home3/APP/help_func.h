/*
 * help_func.h
 *
 *  Created on: Feb 21, 2023
 *      Author: mohamed
 */

#ifndef HELP_FUNC_H_
#define HELP_FUNC_H_

#include "STD_TYPES.h"

#define FAIL  0
#define PASS  1

void Init_system(void);
//to initlaize the system

void wlcome_screen(void);
//this do  before while 1

void update_US_read(void);
//get the ultrasonic read
u8 TAKE_action(void);
/*
 * 1- take password and check
 * 2- stop system of u try more than 3 times
 * 3- show the range of ultrasonic
 * 4- show the temp of room to know switch on or off of dc
 * 5- at the end this func return check
 */
void ALL_LEDS_ON(void);
void ALL_LEDS_OFF(void);
void DC_MOTOR(void) ; // dc motpr on and of and show temp



#endif /* HELP_FUNC_H_ */
