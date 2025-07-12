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
		for (int z = 0; z < 255; z ++) {
			delay_sec(1);	
			PORTA = z;
		}
		
	}

}

