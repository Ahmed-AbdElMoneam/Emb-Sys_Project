﻿/*
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
/*External Interrupt Registers*/
#define XGICR *((volatile u_int8 * const)0x5B)
#define INT1 7
#define INT0 6
#define INT2 5

#define XMCUCR *((volatile u_int8 * const)0x55)
#define ISC00 0
#define ISC01 1
#define ISC10 2
#define ISC11 3

#define XMCUCSR *((volatile u_int8 * const)0x54)
#define ISC2  6

#define XGIFR *((volatile u_int8 * const)0x5A)
#define INTF1 7
#define INTF0 6
#define INTF2 5

#define XSREG *((volatile u_int8 * const)0x5F)
/**************/
/*Internal EEPROM Registers*/
#define XEEARH *((volatile u_int8 * const)0x3F)
#define XEEARL *((volatile u_int8 * const)0x3E)
#define XEEDR  *((volatile u_int8 * const)0x3D)
#define XEECR  *((volatile u_int8 * const)0x3C)

#define EERE   0
#define EEWE   1
#define EEMWE  2
#define EERIE  3
/**************/
#endif /* REGISTER_H_ */