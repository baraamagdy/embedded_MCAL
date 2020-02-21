/*
 * AVR_DIO_REG.h
 *
 *  Created on: Aug 24, 2019
 *      Author: Baraa
 */

#ifndef AVR_DIO_REG_H_
#define AVR_DIO_REG_H_

# define DDRA  *((u8*)0x3A)//addresses of pins memory
# define PORTA *((u8*)0x3B)
# define PINA  *((u8*)0x39)

# define DDRB  *((u8*)0x37)
# define PORTB *((u8*)0x38)
# define PINB  *((u8*)0x36)

# define DDRC  *((u8*)0x34)//addresses of pins memory
# define PORTC *((u8*)0x35)
# define PINC  *((u8*)0x33)

# define DDRD  *((u8*)0x31)//addresses of pins memory
# define PORTD *((u8*)0x32)
# define PIND  *((u8*)0x30)



#endif /* AVR_DIO_REG_H_ */
