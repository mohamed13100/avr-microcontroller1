/*
 * MAIN.c
 *
 *  Created on: Feb 20, 2023
 *      Author: mohamed
 */
#include<util/delay.h>
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "Dio_int.h"
#include "LED_int.h"
#include "LCD_int.h"
#include "Keypad_int.h"
#include "ADC_int.h"
#include "ultrasonic.h"
#include "help_func.h"
#include "dc_init.h"



int main ()
{


	Init_system(); //to open all system while
	wlcome_screen(); //just repeated only one time

	u8 check = FAIL;
	while(1)
	{


		update_US_read();


		check = TAKE_action();
		if(check == FAIL)
		{
			H_LCD_void_sendString((const s8*)"OUT OF SYSTEM ");
		}
		else if(check == PASS)
		{
			H_LCD_void_clear();
			H_LCD_void_sendString((const s8*) "1-leds ON ");

			H_LCD_void_gotXY(1, 0) ;
			H_LCD_void_sendString((const s8*) "2-leds oFF ");
			_delay_ms(1000);

			u8 get_num =NO_PRESSED_KEY ;
			while(get_num == NO_PRESSED_KEY)
			{
				get_num = H_KEYPAD_u8_getPressesKey();
			}
			switch(get_num)
			{
			case '1' :

				ALL_LEDS_ON();
				break ;
			case '2' :
				ALL_LEDS_OFF();

				break;

			default: break;
			}
		get_num = NO_PRESSED_KEY;
		}
			H_LCD_void_clear();
	}

	return 0 ;
}
