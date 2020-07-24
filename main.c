/*
 * atmelprep.c
 *
 * Created: 28/06/2020 11:43:37 ص
 * Author : ahmed
 */ 

#include <util/delay.h>
#include <avr/interrupt.h>
#include "LED_ECU_driver.h"
#include "SevenSeg_ECU_driver.h"
#include "Switch_ECU_driver.h"
#include "Internal_EEPROM_MCAL.h"
#include "LCD_ECU_driver.h"
#include "Keypad_ECU_driver.h"
#include "Data_Type.h"
#include "Register.h"
#include "std_macros.h"
#define F_CPU 8000000UL

int main(void)
{
    /* Replace with your application code */
	OBJ x;
	LCD_vGet_Config(&x, EIGHT_BIT, HIGH_NIBBLE, 'A', 'B', 0, 'B', 1, 'B', 2);
	LCD_vInit();
	Keypad_vInit('C');
	u_int8 y;
    while (1) {
		y = Keypad_u8Check_Press('C');
		while(y != NOTPRESSED){
			_delay_ms(500);
			LCD_vSend_Char(y);
			_delay_ms(2000);
			y = NOTPRESSED;
		}
	}
}

