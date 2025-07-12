/*
 * Course2.c
 *
 * Created: 2025-07-12 오후 6:11:34
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
	
	while(1) {
		PORTA = 0xff;
		
		PORTA = rand()%256; // rand 함수는 0x7fff 까지 만들어져서 나눈 나머지로 사용
		_delay_ms(((rand()%50)+1)*100); // 0.1초 ~ 0.5초
	}

}

