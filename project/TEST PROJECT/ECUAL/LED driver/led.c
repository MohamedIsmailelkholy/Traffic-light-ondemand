/*
 * led.c
 *
 * Created: 13/11/2022 03:52:43 م
 *  Author: MH7B
 */ 
 #include "led.h"
 
EN_DriverState_t LED_init(uint8_t ledport,uint8_t ledpin){
	uint8_t i=  DIO_init(ledport,ledpin,OUT);
	if (i==0)
	{
		return DriverOK;
	}
	  return  Driver_failed;
 }
 EN_DriverState_t LED_on(uint8_t ledport,uint8_t ledpin) {
	  uint8_t i =DIO_write(ledport,ledpin,HIGH);
	  	if (i==0)
	  	{
		  	return DriverOK;
	  	}
	  	return  Driver_failed;
 }
 EN_DriverState_t LED_off(uint8_t ledport,uint8_t ledpin) {
	 uint8_t i= DIO_write(ledport,ledpin,LOW);
	   if (i==0)
	   {
		   return DriverOK;
	   }
	   return  Driver_failed;
	   
 }	 
EN_DriverState_t LED_toggle(uint8_t ledport,uint8_t ledpin) {
	 uint8_t i=  DIO_toggle(ledport,ledpin);
	if (i==0)
	{
		return DriverOK;
	}
	return  Driver_failed; 
	 
 }	
 
 
 