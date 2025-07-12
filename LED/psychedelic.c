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
	DDRA = 0xff;
	
	int flag = 0;
		
	while(1) {
		
		_delay_ms(100);
		
		if (flag > 0) {
			// 0000 0000
			// 1 + 2 + 4 + 8
			// 128 + 64 + 32 + 16
			// 144 + 96
			// 240
			// 15
			flag = 0;
			PORTA = 0x0f;
		} else {
			flag = 1;
			PORTA = 0xf0;
		}
	}

}

