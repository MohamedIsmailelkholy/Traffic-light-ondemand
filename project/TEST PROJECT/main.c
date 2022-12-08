/*
 * TEST PROJECT.c
 *
 * Created: 06/11/2022 05:15:24 
 * Author : MH7B
 */ 

//#include "regeisters.h"
#include "Application/application.h"
#include "TESTing/test.h"
//define system clock to 1 MHZ
//#define F_CPU 1000000
// #include <util/delay.h>

int main(void)
{
	//define the direction of pin A to output
	 /*DIO_init(PORT_A,4,OUT);
	 DIO_init(PORT_A,5,OUT);*/
	 APP_init();
	
	 
    while (1) 
    {
		//toggle the pin
		/*DIO_write(PORT_A,4,HIGH);
		DIO_write(PORT_A,5,LOW); 
		//LED_off(PORT_A,4);*/
		APP_start();
    }
}	
		
   		
 

