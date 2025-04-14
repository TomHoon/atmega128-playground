/*
 * GccApplication2.c
 *
 * Created: 2025-04-14 오후 9:31:10
 * Author : gnsdl
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>
#define NULL 0

void init_uart0()	// UART0 초기화 함수
{
	UCSR0B = 0x08;   // 송신 transmit(TX) enable
	UCSR0C = 0x06;   // UART mode, 8 bit data,no parity, 1 stop bit
	UBRR0H = 0;		 // baudradte 세팅
	UBRR0L = 103;	 // 16MHz, 9600 baud
}

void putchar0(char c) 
{
	while(!(UCSR0A & (1 <<UDRE0)))
	;
	UDR0 = c;
}

void puts0(char *ptr)
{
	while(1)
	{
		if (*ptr != NULL) // string 끝이 아니면 1문자씩 전송
			putchar0(*ptr++);
		else
			return; // string 끝이면 종료
	}
}

int main(void)
{
	char prompt[] = "JCnet!";
	char *ptr;
	
	init_uart0();
	ptr = &prompt[0];
	
    while (1) 
    {
		putchar0('H');
		putchar0('i');
		putchar0('~');
		putchar0(' ');
		puts0(ptr);		// 문장으로 "JCnet!" 송신
		putchar0('\n'); // Line Feed 송신 - 커서 줄 바꿈
		putchar0('\r'); //Carriage Return 송신 - 커서 맨 앞으로 위치
		
    }
}

