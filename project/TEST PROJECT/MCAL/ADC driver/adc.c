/*
 * adc.c
 *
 * Created: 19/11/2022 05:07:10 م
 *  Author: MH7B
 */ 
#include "adc.h"
typedef unsigned int uint32_t ;
uint32_t AnalogValue;
uint32_t DigitalValue;
uint32_t SensorValue;
uint32_t TempValue;
#define ADC_CHANNEL_0  0
void ADC_init(){
	//set port C and 2 pins from portD to outputs
	DDRC|=0XFF;
	DDRD|=(1<<0)|(1<<1);
	//set ADC0 to input
	DDRA&=~(1<<0);
	//set ADC with External RVCC to pin 0 of the ADC
	ADMUX |=(1<<REFS0);	   
	//ENABLE ADC WITH NO INTERRUOTS AND /2 PRESCALER
	ADCSRA |=(1<<ADEN);


}
void ADC_read()	{
//choose ADC channel
ADMUX|=(ADC_CHANNEL_0 & (0X0F))	;
//Start conversion
ADCSRA |=(1<<ADSC);
//Wait for conversion to complete
while((ADCSRA & (1<<ADIF))==0);
	//Read	ADC values
	PORTC=ADCL;
	PORTD=ADCH;	
	
	
	
}
