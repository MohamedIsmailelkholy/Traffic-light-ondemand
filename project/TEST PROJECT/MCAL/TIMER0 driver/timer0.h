/*
 * timer0.h
 *
 * Created: 16/11/2022 08:58:12 م
 *  Author: MH7B
 */ 


#ifndef TIMER0_H_
#define TIMER0_H_
#define TOV0 0
#define CS00 0
#define CS01 1
#define CS02 2
#include "../../utilities/regeisters.h"
#include "../../utilities/types.h"
#include "../../MODES driver/modes.h"
#include "../EXTERNAL INTERRUPT driver/external interrupt.h"
extern volatile uint8_t PedistrianExist;
//typedef unsigned int uint32_t ;
EN_DriverState_t TIMER0_init();
//void TIMER0_start(uint8_t mode ,uint8_t prescalerValue,uint8_t startValue);
EN_DriverState_t TIMER0_start(uint8_t prescalerValue,uint8_t startValue);
EN_DriverState_t TIMER0_delay(uint8_t numberOfOverflows,uint8_t sartValue);
//void TIMER0_state(uint8_t *state);


#endif /* TIMER0_H_ */