/*
 * adc.h
 *
 * Created: 19/11/2022 05:07:21 م
 *  Author: MH7B
 */ 


#ifndef ADC_H_
#define ADC_H_

#include "../../utilities/regeisters.h"
#include "../../utilities/types.h"
#define REFS1 7
#define REFS0 6	 
#define ADLAR 5	
#define MUX0 0	
#define MUX1 1	
#define MUX2 2	
#define MUX3 3
#define ADEN 7
#define ADSC 6
#define ADATE 5
#define ADIF 4
#define ADTS2 7
#define ADTS1 6
#define ADTS0 5
void ADC_init();
void ADC_read();





#endif /* ADC_H_ */