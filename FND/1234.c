/*
 * Course2.c
 *
 * Created: 2025-07-12 ¿ÀÈÄ 6:11:34
 * Author : gnsdl
 */ 

#include <avr/io.h>
#include <stdlib.h>

#define __DELAY_BACKWARD_COMPATIBLE__

#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
	DDRC = 0xff;
	DDRG = 0xff;
	DDRA = 0xff;
	DDRD = 0xff;
	

	while (1) {
	PORTA = 0x02;
	PORTC = 0x08;
	PORTD = 0x01;
	_delay_ms(1000);
	
	PORTA = 0xa6;
	PORTC = 0x04;
	PORTD = 0x02;
	_delay_ms(1000);
	
	PORTA = 0xb4;
	PORTC = 0x02;
	PORTD = 0x02;
	_delay_ms(1000);
	
	PORTA = 0xb0;
	PORTC = 0x01;
	PORTD = 0x01;
	_delay_ms(1000);
	}
	// 0100 1000
	// 64 + 8
	//
	// 0101 0011
	// 64 + 16 + 2 + 1
	// 19 + 64 = 83
	// 0x53
	
	// 0101 1010
	// 64 + 16 + 8 + 2
	// 26 + 64 = 90
	// 0x5A

	
}


