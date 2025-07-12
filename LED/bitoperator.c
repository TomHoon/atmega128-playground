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
	int bitOperator = 0x01;
		
	while(1) {
		
		_delay_ms(1000);
		
		PORTA = bitOperator;
		
		if (bitOperator == 0x01) {
			flag = 0;
		} else if (bitOperator == 0x80){
			flag = 1;
		}
	
		if (flag == 1) {
			bitOperator = bitOperator >> 1;
		} else {
			bitOperator = bitOperator << 1;
		}
	
	}

}

