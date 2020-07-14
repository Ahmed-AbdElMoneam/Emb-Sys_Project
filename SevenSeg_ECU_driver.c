/*
 * SevenSeg_ECU_driver.c
 *
 * Created: 06/07/2020 08:21:12 م
 *  Author: ahmed
 */ 

#include "SevenSeg_ECU_driver.h"
#define Low_Nibble 0
#define High_Nibble 1
u_int8 mode;
u_int8 port;
u_int8 nibble;

void SevenSeg_Init(u_int8 Mode, u_int8 portnum, u_int8 Nibble){
	if(EIGHTBIT == Mode){
		GPIO_vSETPORT_DDR(portnum, 0xff);
		mode = Mode;
		port = portnum;
		nibble = Nibble;
	}
	else if(FOURBIT == Mode){
		if(Nibble == Low_Nibble){
			GPIO_vLowNibble_Set_DDR(portnum,1);
			/*GPIO_vSETPIN_DDR(portnum,0,1);
			GPIO_vSETPIN_DDR(portnum,1,1);
			GPIO_vSETPIN_DDR(portnum,2,1);
			GPIO_vSETPIN_DDR(portnum,3,1);*/
		}
		else if(Nibble == High_Nibble){
			GPIO_vHighNibble_Set_DDR(portnum,1);
			/*GPIO_vSETPIN_DDR(portnum,4,1);
			GPIO_vSETPIN_DDR(portnum,5,1);
			GPIO_vSETPIN_DDR(portnum,6,1);
			GPIO_vSETPIN_DDR(portnum,7,1);*/
		}
	}
}

void SevenSeg_Display(u_int8 val){
	if(mode == FOURBIT){
		if(nibble == Low_Nibble){
			GPIO_vLowNibble_write(port,val);
		}
		else if(nibble == High_Nibble){
			GPIO_vHighNibble_write(port,val);
		}
	}
	else if(mode == EIGHTBIT){
		if(val >= 0 && val <= 9){
			u_int8 Seven_Segment_arr[10] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};
			GPIO_vWRITEPORT(port, Seven_Segment_arr[val]);
		}
		else{
			#define A 0
			#define B 1
			#define C 2
			#define D 3
			#define E 4
			#define F 5
			u_int8 arr[6] = {0x77, 0x1f, 0x39, 0x5e, 0x79, 0x71};
			GPIO_vWRITEPORT(port, arr[val]);
		}
	}
}


