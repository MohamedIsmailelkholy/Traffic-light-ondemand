/*
 * button.c
 *
 * Created: 13/11/2022 04:40:42 م
 *  Author: MH7B
 */ //include header files
#include "button.h"
 void BUTTON_init(uint8_t portnumber,uint8_t pinnumber){
	DIO_init(portnumber,pinnumber,IN); 
	 
 }
 void BUTTON_read(uint8_t portnumber,uint8_t pinnumber,uint8_t* value){
	DIO_read(portnumber,pinnumber,value); 
	 
	 
 }
