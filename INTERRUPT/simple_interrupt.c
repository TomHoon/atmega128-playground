/*
 * Course2.c
 *
 * Created: 2025-07-12 오후 6:11:34
 * Author : gnsdl
 */ 

#include <avr/io.h>
#include <stdlib.h>
#include <avr/interrupt.h>
#define F_CPU 16000000UL

void setup() {
	DDRA = 0xff;
	DDRB = 1;     // PB0 출력
	DDRE = 0;     // PE4 입력
	PORTE = 48;   // PE4 내부 풀업 켜기 (0b00110000)

	EICRB = 0x00; // INT4(PE4) 저레벨 감지
	EIMSK = 0x30; // INT4 인터럽트 활성화 (0b00110000)

	sei();        // 전역 인터럽트 허용
}

int main() {
	setup();
	while (1) {
		// 계속 대기
	}
}

ISR (INT4_vect) 
{
	PORTA = 0x01;
}

ISR (INT5_vect)
{
	PORTA = 0x00;
}


