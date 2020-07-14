/*
 * SevenSeg_ECU_driver.h
 *
 * Created: 06/07/2020 08:20:41 م
 *  Author: ahmed
 */ 


#ifndef SEVENSEG_ECU_DRIVER_H_
#define SEVENSEG_ECU_DRIVER_H_

#include "GPIO.h"
#include "Data_Type.h"
#define EIGHTBIT 0
#define FOURBIT 1

void SevenSeg_Init(u_int8 Mode, u_int8 portnum, u_int8 Nibble);

void SevenSeg_Display(u_int8 val);



#endif /* SEVENSEG_ECU_DRIVER_H_ */