/*
 * atmelprep.c
 *
 * Created: 28/06/2020 11:43:37 ص
 * Author : ahmed
 */ 

#include <util/delay.h>
#include "LED_ECU_driver.h"
#include "Switch_ECU_driver.h"
#include "Data_Type.h"
#define F_CPU 8000000UL

int main(void)
{
    /* Replace with your application code */
	LED_vInit('A',6);
	//Switch_vInit('D',1);
    while (1) {
		//if(1 == Switch_u8Read('D',1)){
			LED_vOn('A',6);
			/*_delay_ms(300);
			LED_vOff('A',6);*/
		/*}
		else{
			LED_vOff('A',6);
		}*/
	}
}

