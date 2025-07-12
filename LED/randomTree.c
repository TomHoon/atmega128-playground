/*
 * Course2.c
 *
 * Created: 2025-07-12 ���� 6:11:34
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
		
		PORTA = rand()%256; // rand �Լ��� 0x7fff ���� ��������� ���� �������� ���
		_delay_ms(((rand()%50)+1)*100); // 0.1�� ~ 0.5��
	}

}

