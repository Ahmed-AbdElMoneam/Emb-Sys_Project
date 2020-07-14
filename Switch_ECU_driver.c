/*
 * Switch_ECU_driver.c
 *
 * Created: 06/07/2020 06:31:41 م
 *  Author: ahmed
 */ 

#include "Switch_ECU_driver.h"

void Switch_vInit(u_int8 portnum, u_int8 pinnum){
	GPIO_vSETPIN_DDR(portnum,pinnum,0);
	GPIO_vInternal_pullupON(portnum,pinnum);
}
u_int8 Switch_u8Read(u_int8 portnum, u_int8 pinnum){
	u_int8 x;
	x = GPIO_u8READPIN(portnum,pinnum);
	return x;
}