/*
 * DIO_prog.c
 *
 *  Created on: Aug 24, 2019
 *      Author: Baraa
 */


# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "AVR_DIO_REG.h"
# include "DIO_interface.h"


void  DIO_voidSetPinDir(DIO_PORTS enuPortIdx_cpy, DIO_PINS enuPinIdx_cpy,DIO_Dir enuDir_cpy)
{

switch(enuPortIdx_cpy)
{
   case DIO_PORT_0:
	   if(enuDir_cpy ==DIO_INPUT) //clear
	   {
		   CLR_BIT(DDRA,enuPinIdx_cpy);
	   }
	   else if(enuDir_cpy==DIO_OUTPUT)
	   {
		   SET_BIT(DDRA,enuPinIdx_cpy);
	   }
	   else
	   {

	   }
   break;

   case DIO_PORT_1:
	   if(enuDir_cpy ==DIO_INPUT) //clear
	   	   {
	   		   CLR_BIT(DDRB,enuPinIdx_cpy);
	   	   }
	   	   else if(enuDir_cpy==DIO_OUTPUT)
	   	   {
	   		   SET_BIT(DDRB,enuPinIdx_cpy);
	   	   }
	   	   else
	   	   {

	   	   }
   break;

   case DIO_PORT_2:
	   if(enuDir_cpy ==DIO_INPUT) //clear
	   	   {
	   		   CLR_BIT(DDRC,enuPinIdx_cpy);
	   	   }
	   	   else if(enuDir_cpy==DIO_OUTPUT)
	   	   {
	   		   SET_BIT(DDRC,enuPinIdx_cpy);
	   	   }
	   	   else
	   	   {

	   	   }
   break;

   case DIO_PORT_3:
	   if(enuDir_cpy ==DIO_INPUT) //clear
	   	   {
	   		   CLR_BIT(DDRD,enuPinIdx_cpy);
	   	   }
	   	   else if(enuDir_cpy==DIO_OUTPUT)
	   	   {
	   		   SET_BIT(DDRD,enuPinIdx_cpy);
	   	   }
	   	   else
	   	   {

	   	   }
   break;
}


}

// set direction of whole required port
void  DIO_voidSetPortDir(DIO_PORTS enuPortIdx_cpy, u8 u8Direction_cpy)
{

	switch(enuPortIdx_cpy)
	{
	   case DIO_PORT_0:
		   DDRA=u8Direction_cpy;
	   break;

	   case DIO_PORT_1:
		   DDRB=u8Direction_cpy;

	   break;

	   case DIO_PORT_2:
		   DDRC=u8Direction_cpy;
		   break;

	   case DIO_PORT_3:
     DDRD=u8Direction_cpy;
	   break;
	}

}

// set  value of whole port
void  DIO_voidSetPortValue(DIO_PORTS enuPortIdx_cpy, u8 u8Value_cpy)
{

	switch(enuPortIdx_cpy)
	{
	   case DIO_PORT_0:
		   PORTA=u8Value_cpy;
	   break;

	   case DIO_PORT_1:
		   PORTB=u8Value_cpy;
	   break;

	   case DIO_PORT_2:
		   PORTC=u8Value_cpy;
		   break;

	   case DIO_PORT_3:
     PORTD=u8Value_cpy;
	   break;
	}

}


void  DIO_voidSetPinValue(DIO_PORTS enuPortIdx_cpy, DIO_PINS enuPinIdx_cpy,DIO_Value enuValue_cpy)
{

	switch(enuPortIdx_cpy)//which port
	{
	   case DIO_PORT_0:
		   if(enuValue_cpy ==DIO_LOW) //clear
		   {
			   CLR_BIT(PORTA,enuPinIdx_cpy);
		   }
		   else if(enuValue_cpy==DIO_HIGH)
		   {
			   SET_BIT(PORTA,enuPinIdx_cpy);
		   }
		   else
		   {

		   }
	   break;

	   case DIO_PORT_1:
		   if(enuValue_cpy ==DIO_LOW) //clear
		   	   {
		   		   CLR_BIT(PORTB,enuPinIdx_cpy);
		   	   }
		   	   else if(enuValue_cpy==DIO_HIGH)
		   	   {
		   		   SET_BIT(PORTB,enuPinIdx_cpy);
		   	   }
		   	   else
		   	   {

		   	   }
	   break;

	   case DIO_PORT_2:
		   if(enuValue_cpy ==DIO_LOW) //clear
		   	   {
		   		   CLR_BIT(PORTC,enuPinIdx_cpy);
		   	   }
		   	   else if(enuValue_cpy==DIO_HIGH)
		   	   {
		   		   SET_BIT(PORTC,enuPinIdx_cpy);
		   	   }
		   	   else
		   	   {

		   	   }
	   break;

	   case DIO_PORT_3:
		   if(enuValue_cpy ==DIO_LOW) //clear
		   	   {
		   		   CLR_BIT(PORTD,enuPinIdx_cpy);
		   	   }
		   	   else if(enuValue_cpy==DIO_HIGH)
		   	   {
		   		   SET_BIT(PORTD,enuPinIdx_cpy);
		   	   }
		   	   else
		   	   {

		   	   }
	   break;
	}
}
DIO_Value DIO_enuGetPinValue(DIO_PORTS enuPortIndx_cpy  ,DIO_PINS enuPinIndx_cpy)
{
	DIO_Value enuPinValue_loc;

     switch(enuPortIndx_cpy)
     {
         case DIO_PORT_0:

        	 enuPinValue_loc=Get_BIT(PINA,enuPinIndx_cpy);
    	      break;

         case DIO_PORT_1:

        	 enuPinValue_loc=Get_BIT(PINB,enuPinIndx_cpy);
            	 break;

         case DIO_PORT_2:

        	 enuPinValue_loc=Get_BIT(PINC,enuPinIndx_cpy);
            	 break;

         case DIO_PORT_3:

        	 enuPinValue_loc=Get_BIT(PIND,enuPinIndx_cpy);
            	 break;
     }

 	return  enuPinValue_loc;

}


