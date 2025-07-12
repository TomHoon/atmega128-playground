/*
 * Course2.c
 *
 * Created: 2025-07-12 ¿ÀÈÄ 6:11:34
 * Author : gnsdl
 */ 

#include <avr/io.h>


int main(void)
{
	
	void delay_sec(int sec) {
		volatile int i, j, k;
		
		for (k=0; k<sec; k++)
			for (i=0; i<1000; i++)
				for(j=0; j<1600; j++)
					;
	}
	
	while(1) {
		DDRA = 0xff;
		// 0000 0000 0x00;
		// 0000 0001 0x01;
		// 0000 0010 0x02;
		// 0000 0100 0x04;
		// 0000 1000 0x08;
		// 0001 0000 0x0f;
		// 0010 0000 0x1f;
		// 0100 0000 0x40;
		// 1000 0000 0x7e;
		PORTA = 0xff;
		delay_sec(1);
		PORTA = 0x01;
		delay_sec(1);
		PORTA = 0x02;
		delay_sec(1);
		PORTA = 0x04;
		delay_sec(1);
		PORTA = 0x08;
		delay_sec(1);
		PORTA = 0x10;
		delay_sec(1);
		PORTA = 0x20;
		delay_sec(1);
		PORTA = 0x40;
		delay_sec(1);
		PORTA = 0x80;
		
		
	}

}

