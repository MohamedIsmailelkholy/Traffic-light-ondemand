/*
 * timer0.c
 *
 * Created: 16/11/2022 08:58:28 م
 *  Author: MH7B
 */ 
 // include header files
 
#include "timer0.h"
 
//function definitions
 
 EN_DriverState_t TIMER0_init(){
	
	
		TCCR0=0x00;
		TCNT0=0X00;
		return DriverOK;
	
	}
	 
 EN_DriverState_t TIMER0_start(uint8_t prescalerValue,uint8_t startValue){
	 TCNT0=startValue;
	 TCCR0|=(1<<0)|(1<<2);
	 return DriverOK;
 }
 
 EN_DriverState_t TIMER0_delay(uint8_t numberOfOverflows,uint8_t sartValue){
	 uint8_t timerOverflowCounts=0;
	  
	 while(timerOverflowCounts<numberOfOverflows)	{
		  
		 while((TIFR&(1<<0))==0 && PedistrianExist==0);
		 if (PedistrianExist==1)
		 {
			 return DriverOK;
		 }
		 
		 TIFR|=(1<<0);
		 TCNT0= sartValue;
		 timerOverflowCounts++;
	 }
	 	 TCCR0=0x00;
		  timerOverflowCounts=0;
		  return DriverOK;
 }
 //void TIMER0_state(uint8_t *state){}