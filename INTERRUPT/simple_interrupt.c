/*
 * Course2.c
 *
 * Created: 2025-07-12 ���� 6:11:34
 * Author : gnsdl
 */ 

#include <avr/io.h>
#include <stdlib.h>
#include <avr/interrupt.h>
#define F_CPU 16000000UL

void setup() {
	DDRA = 0xff;
	DDRB = 1;     // PB0 ���
	DDRE = 0;     // PE4 �Է�
	PORTE = 48;   // PE4 ���� Ǯ�� �ѱ� (0b00110000)

	EICRB = 0x00; // INT4(PE4) ������ ����
	EIMSK = 0x30; // INT4 ���ͷ�Ʈ Ȱ��ȭ (0b00110000)

	sei();        // ���� ���ͷ�Ʈ ���
}

int main() {
	setup();
	while (1) {
		// ��� ���
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


