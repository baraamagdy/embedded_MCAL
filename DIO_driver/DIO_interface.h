/*
 * DIO_interface.h
 *
 *  Created on: Aug 24, 2019
 *      Author: Baraa
 */

#include "STD_TYPES.h"
#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_


typedef enum{
	DIO_PORT_0,
	DIO_PORT_1,
	DIO_PORT_2,
	DIO_PORT_3,

}DIO_PORTS;

typedef enum{
	DIO_PIN_0,
	DIO_PIN_1,
	DIO_PIN_2,
	DIO_PIN_3,
	DIO_PIN_4,
	DIO_PIN_5,
	DIO_PIN_6,
	DIO_PIN_7,

}DIO_PINS;

typedef enum{
	DIO_INPUT,
	DIO_OUTPUT
}DIO_Dir;


typedef enum{
	DIO_LOW,
	DIO_HIGH
}DIO_Value;


/*
 Description:
 Inputs:
 Outputs:t
 */

//pin by pin

void  DIO_voidSetPinDir(DIO_PORTS enuPortIdx_cpy, DIO_PINS enuPinIdx_cpy,DIO_Dir enuDir_cpy);
void  DIO_voidSetPinValue(DIO_PORTS enuPortIdx_cpy, DIO_PINS enuPinIdx_cpy,DIO_Value enuValue_cpy);
//the whole port
void  DIO_voidSetPortDir(DIO_PORTS enuPortIdx_cpy , u8 u8Direction_cpy);
void  DIO_voidSetPortValue(DIO_PORTS enuPortIdx_cpy,u8 u8Value_cpy);
DIO_Value DIO_enuGetPinValue(DIO_PORTS enuPortIndx  ,DIO_PINS enuPinIndx);

#endif /* DIO_INTERFACE_H_ */
