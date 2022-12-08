/*
 * test.c
 *
 * Created: 23/11/2022 08:25:43 م
 *  Author: MH7B
 */ 

#include "test.h"
 uint8_t X=0;


void DIOdriver_Test(){
	DIO_init(PORT_A,1,OUT);
	DIO_write(PORT_A,1,HIGH);
	TIMER0_start(1,4);
	TIMER0_delay(20,4);
	int i=0	;
	while(i<4) {
	DIO_toggle(PORT_A,1);
	 	TIMER0_start(1,1);
	 	TIMER0_delay(20,1);
		 i++;
	}
	DIO_read(PORT_A,4,&X)	;
	
	
}

void LEDdriver_Test(){
	LED_init(PORT_A,1);
	LED_on(PORT_A,1);
	TIMER0_start(1,2);
	TIMER0_delay(20,2);
	LED_off(PORT_A,1);
	TIMER0_start(1,2);
	TIMER0_delay(20,2);
	 int i=0	;
	 while(i<6) {
		 LED_toggle(PORT_A,1);
		 TIMER0_start(1,1);
		 TIMER0_delay(2,1);
		 i++;}
LED_off(PORT_A,1);	
}
void TIMER0driver_Test(){
	 LED_init(PORT_A,1);
	 int i=0	;
	 while(i<6) {
		 LED_toggle(PORT_A,1);
		 TIMER0_start(1,1);
		 TIMER0_delay(3,1);
	 i++;}
	
}
void Interruptdriver_Test(){
	INTERRUPT_init();
}
