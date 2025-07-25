/*
 * Course2.c
 *
 * Created: 2025-07-21
 * Author : gnsdl
 */ 

#include <avr/io.h>
#include <stdlib.h>
#include <avr/interrupt.h>
#define F_CPU 16000000UL
#include <util/delay.h>

int index = 0;
unsigned char digit[] = {0x28, 0xb3, 0xba, 0x78};

void setup() {
	DDRA = 0xff;
	DDRB = 1;     // PB0 출력
	DDRE = 0;     // PE4 입력z	
	
	DDRD = 0x04; 
	PORTD = 0x04; // 천의자리만 켜기
	
	PORTE = 48;   // PE4 내부 풀업 켜기 (0b00110000)

		
	EIMSK = 0x30; // INT4 인터럽트 활성화 (0b00110000)
    EICRB = 0x0b;     // INT4 rising edge (0b00001100)

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
	 _delay_ms(50); // crude debounce (needs <util/delay.h>)

    PORTA = digit[index];
    index = index + 1;
    if (index >= 5) {
	    index = 0;
    }
}

ISR (INT5_vect)
{
	PORTA = 0x00;
}


