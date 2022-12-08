/*
 * Application.c
 *
 * Created: 13/11/2022 04:12:06 م
 *  Author: MH7B
 */ 
#include "application.h"

extern volatile uint8_t PedistrianExist;
extern uint8_t Car_green;
extern uint8_t Car_red;
extern uint8_t Car_yellow;
volatile uint8_t pushCounts=0;
void APP_init(){
	LED_init(PORT_A,CarRedled);
	LED_init(PORT_A,CarGreenled);
	LED_init(PORT_A,CarYellowled);
	LED_init(PORT_B,PedisterianGreenled);
	LED_init(PORT_B,PedisterianYellowled);
	LED_init(PORT_B,PedisterianRedled);	 
	LED_off(PORT_A,CarGreenled);
	LED_off(PORT_A,CarYellowled) ;
	LED_off(PORT_A,CarRedled) ;
	INTERRUPT_init();
	TIMER0_init();	   
			
	
}
void APP_start(){
	if (PedistrianExist==0)
	{  
		normalMode();
	}
	else{  cli();
		pedistrianMode();
		PedistrianExist=0;
		sei();	  
		
		}
		 
		}
ISR(INT0_vect){

		PedistrianExist=1;
	
		}