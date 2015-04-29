#ifndef SAUART_H
#define SUART_H
/*
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
*/



#define TIMSK TIMSK1
#define TIFR  TIFR1
#define TICIE1 ICIE1
#define XTAL 20e6
#define BAUD 38400

#define SRX     PA0     // sensor 0
#define SRXPIN  PINA

#define STX     PD7     // OC1A on Mega8
#define STXDDR  DDRD


#define kbhit()	(srx_done)	// true if byte received


typedef unsigned char  u8;
typedef   signed char  s8;
typedef unsigned short u16;
typedef   signed short s16;
typedef unsigned long  u32;
typedef   signed long  s32;

//extern volatile u8 srx_done;
/************************************************************************/
/*                                                                      */
/*                      Software UART using T1                          */
/*                                                                      */
/*              Author: P. Dannegger                                    */
/*                      danni@specs.de                                  */
/*                                                                      */
/************************************************************************/


extern volatile u8 srx_done;

#define kbhit()	(srx_done)	// true if byte received

void suart_init( void );
void sputchar( u8 val );
u8 sgetchar( void );
void sputs( u8 *txt );

#endif
