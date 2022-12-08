/*
 * external_interrupt.c
 *
 * Created: 17/11/2022 09:36:08 م
 *  Author: MH7B
 */ 
#include "external interrupt.h"

  EN_DriverState_t INTERRUPT_init() {
	  SREG|=(1<<7);
	  MCUCR|=(1<<1);   //falling edge
	  GICR|=(1<<6);
	  return DriverOK;
	  
  }
 