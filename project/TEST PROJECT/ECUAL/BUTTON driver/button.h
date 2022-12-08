/*
 * button.h
 *
 * Created: 13/11/2022 04:40:54 م
 *  Author: MH7B
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/DIO driver/dio.h"
// BUTTON I/O PORTS
#define BUTTON_1_PORT PORT_C
#define BUTTON_1_PIN  4
//BUTTON States
#define HIGH 1
#define LOW 0

  void BUTTON_init(uint8_t portnumber,uint8_t pinnumber);
  void BUTTON_read(uint8_t portnumber,uint8_t pinnumber,uint8_t *value);




#endif /* BUTTON_H_ */