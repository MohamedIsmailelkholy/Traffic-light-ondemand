/*
 * modes.c
 *
 * Created: 21/11/2022 04:36:03 م
 *  Author: MH7B
 */ 
#include "modes.h"
uint8_t Car_green =0;
uint8_t Car_red =0;
uint8_t Car_yellow =0;
EN_TrafficState_t normalMode( ){
	   LED_on(PORT_A,CarGreenled);
	   LED_off(PORT_B,PedisterianGreenled);
	   LED_on(PORT_B,PedisterianRedled);
	   Car_green=1;
	   TIMER0_start(1,12);
	   TIMER0_delay(20,12);
	   if (PedistrianExist==1)
	    {
		 return Dangerous;
	    }	
	   LED_off(PORT_A,CarGreenled);
	   Car_green=0;
	   int i=0;
	     while(i<10 &&PedistrianExist!=1){
		     LED_toggle(PORT_A,CarYellowled);
		     Car_yellow=1;
		     TIMER0_start(1,12);
		     TIMER0_delay(2,12);
	     i++;}
		 i=0;
	    if (PedistrianExist==1)
	    {
		    return Dangerous;
	    }
	   Car_yellow=0;
	  LED_off(PORT_A,CarYellowled)  ;
	  LED_off(PORT_B,PedisterianRedled);
	  LED_on(PORT_A,CarRedled);
	  LED_on(PORT_B,PedisterianGreenled);
	  Car_red=1;
	  TIMER0_start(1,12);
	  TIMER0_delay(20,12);
	  if (PedistrianExist==1)
	   	 {
		  return Dangerous;
	   	  }
	  LED_off(PORT_A,CarRedled) ;
	  Car_red=0;
	  
	  while(i<10 &&PedistrianExist!=1){
	      LED_toggle(PORT_A,CarYellowled);
	      Car_yellow=1;
	      TIMER0_start(1,12);
	      TIMER0_delay(2,12);
		  i++;}
		i=0;  
	  if (PedistrianExist==1)
	    {
		 return Dangerous;
	    }
	  LED_off(PORT_A,CarYellowled)  ;
	  LED_off(PORT_B,PedisterianGreenled);
	  Car_yellow=0;
	  return Dangerous;
}
EN_TrafficState_t pedistrianMode(){
	int i=0;
	if (Car_red==1){
		
		LED_off(PORT_B,PedisterianRedled);
		LED_on(PORT_B,PedisterianGreenled);
		PedistrianExist=0;
		TIMER0_start(1,12);
		TIMER0_delay(20,12);
	   }
	   
	else if(Car_green==1||Car_yellow==1){
		PedistrianExist=0;
		LED_off(PORT_B,PedisterianGreenled);
		LED_on(PORT_B,PedisterianRedled);
		
		LED_off(PORT_A,CarGreenled);
		//LED_off(PORT_A,CarYellowled);
		
		 while(i<10 &&PedistrianExist!=1){
			LED_toggle(PORT_B,PedisterianYellowled);
			LED_toggle(PORT_A,CarYellowled);
			TIMER0_start(1,12);
			TIMER0_delay(2,12);
		     i++;
			 }
		i=0;
		LED_off(PORT_B,PedisterianRedled)	;
		LED_off(PORT_A,CarYellowled)  ;
		LED_off(PORT_B,PedisterianYellowled)  ;
		LED_on(PORT_B,PedisterianGreenled);
		LED_on(PORT_A,CarRedled);
		TIMER0_start(1,12);
		TIMER0_delay(20,12);
		  }
		  
		LED_off(PORT_A,CarRedled) ;
		LED_off(PORT_A,CarYellowled)  ;
		LED_off(PORT_B,PedisterianYellowled)  ;
			i=0;
			while(i<10 &&PedistrianExist!=1){
				LED_toggle(PORT_B,PedisterianYellowled);
				LED_toggle(PORT_A,CarYellowled);
				TIMER0_start(1,12);
				TIMER0_delay(2,12);
			i++;}
		
		LED_off(PORT_A,CarYellowled)  ;
		LED_off(PORT_B,PedisterianYellowled)  ;
		LED_off(PORT_B,PedisterianGreenled);
		LED_on(PORT_A,CarGreenled);
		LED_on(PORT_B,PedisterianRedled);
		
		return PassedSucessfully;
	}