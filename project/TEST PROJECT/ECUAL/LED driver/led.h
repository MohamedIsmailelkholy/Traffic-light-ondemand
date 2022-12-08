/*
 * led.h
 *
 * Created: 13/11/2022 03:52:29 م
 *  Author: MH7B
 */ 


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO driver/dio.h"
 #include "../../MCAL/EXTERNAL INTERRUPT driver/external interrupt.h"
 #include "../../MCAL/TIMER0 driver/timer0.h"
	 EN_DriverState_t LED_init(uint8_t ledport,uint8_t ledpin);
	 EN_DriverState_t LED_on(uint8_t ledport,uint8_t ledpin) ;
	 EN_DriverState_t LED_off(uint8_t ledport,uint8_t ledpin) ;
	 EN_DriverState_t LED_toggle(uint8_t ledport,uint8_t ledpin) ;
	 



#endif /* LED_H_ */