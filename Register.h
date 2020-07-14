/*
 * Register.h
 *
 * Created: 28/06/2020 12:08:36 م
 *  Author: ahmed
 */ 


#ifndef REGISTER_H_
#define REGISTER_H_
#include "Data_Type.h"
/*PORTA*/
#define XPORTA *((volatile u_int8 * const)0x3B)
#define XDDRA  *((volatile u_int8 * const)0x3A)
#define XPINA  *((volatile u_int8 * const)0x39)
/*************/
/*PORTB*/
#define XPORTB *((volatile u_int8 * const)0x38)
#define XDDRB  *((volatile u_int8 * const)0x37)
#define XPINB  *((volatile u_int8 * const)0x36)
/*************/
/*PORTC*/
#define XPINC  *((volatile u_int8 * const)0x33)
#define XPORTC *((volatile u_int8 * const)0x35)
#define XDDRC  *((volatile u_int8 * const)0x34)
/*************/
/*PORTD*/
#define XPORTD *((volatile u_int8 * const)0x32)
#define XDDRD  *((volatile u_int8 * const)0x31)
#define XPIND  *((volatile u_int8 * const)0x30)
/*************/

#endif /* REGISTER_H_ */