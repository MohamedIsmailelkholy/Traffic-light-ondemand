/*
 * test.h
 *
 * Created: 22/11/2022 09:17:14 م
 *  Author: MH7B
 */ 


#ifndef TEST_H_
#define TEST_H_
//#include "../MCAL/DIO driver/dio.h"
#include "../ECUAL/LED driver/led.h"
//#include "../MCAL/EXTERNAL INTERRUPT driver/external interrupt.h"
//#include "../MCAL/TIMER0 driver/timer0.h"
 #include "../MODES driver/modes.h"
void DIOdriver_Test();
void LEDdriver_Test();
void TIMER0driver_Test();
void Interruptdriver_Test();
void ModesDriver_test();

#endif /* TEST_H_ */