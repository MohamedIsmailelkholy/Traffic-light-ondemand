/*
 * modes.h
 *
 * Created: 21/11/2022 04:36:18 م
 *  Author: MH7B
 */ 


#ifndef MODES_H_
#define MODES_H_
#include "../ECUAL/LED driver/led.h"


#define CarGreenled 0
#define CarYellowled 1
#define CarRedled 2
#define PedisterianGreenled 0
#define PedisterianYellowled 1
#define PedisterianRedled 2
volatile uint8_t PedistrianExist;
typedef enum EN_TrafficState_t
{
	 Dangerous,PassedSucessfully
}EN_TrafficState_t;

EN_TrafficState_t normalMode();
EN_TrafficState_t pedistrianMode();



#endif /* MODES_H_ */