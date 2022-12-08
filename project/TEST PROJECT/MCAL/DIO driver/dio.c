/*
 * dio.c
 *
 * Created: 07/11/2022 10:03:49 م
 *  Author: MH7B
 */ 

//all .h files inclusion
#include "dio.h"
//typedef char uint8_t  ;
//global variables
//function definitions
 EN_DioDriverState_t DIO_init(uint8_t portnumber,uint8_t pinnumber,uint8_t direction){
	 switch (portnumber){
		 case PORT_A:
		 if(direction==OUT)
		 DDRA|=(1<<pinnumber);
		 else if(direction==IN)
		 DDRA&=~(1<<pinnumber);
		 else{
			 return Wrong_Direction;
			 
		 }
			 break;
		case PORT_B:
		if(direction==OUT)
		DDRB|=(1<<pinnumber);
		else if(direction==IN)
		DDRB&=~(1<<pinnumber);
		
		else{
			return Wrong_Direction;
		}
		break;
		case PORT_C:
		if(direction==OUT)
		DDRC|=(1<<pinnumber);
		else if(direction==IN)
		DDRC&=~(1<<pinnumber);
		else{return Wrong_Direction;}
		break;
		default:
		return Unkown_Port;	 
 }
 return DIODriverOK;
 }
 EN_DioDriverState_t DIO_write(uint8_t portnumber,uint8_t pinnumber,uint8_t value){
	  switch (portnumber){
		  case PORT_A:
		  if(value==HIGH)
		  PORTA|=(1<<pinnumber);
		  else if(value==LOW)
		  PORTA&=~(1<<pinnumber);
		  else{ return Wrong_Value;}
		  break;
		  case PORT_B:
		  if(value==HIGH)
		  PORTB|=(1<<pinnumber);
		  else if(value==LOW)
		  PORTB&=~(1<<pinnumber);
		  else{
			  return Wrong_Value;
			  }
		  break;
		  case PORT_C:
		  if(value==HIGH)
		  PORTC|=(1<<pinnumber);
		  else if(value==LOW)
		  PORTC&=~(1<<pinnumber);
		  else{	 
			  return Wrong_Value;
			  //error handeling
		  }
		  break;
		  default:
		  return Unkown_Port;
		  
		  
	  }
	  return DIODriverOK;
	 	
 }
  EN_DioDriverState_t DIO_read(uint8_t portnumber,uint8_t pinnumber,uint8_t *value){
	  switch (portnumber){
		  case PORT_A:
		  *value=(PINA&(1<<pinnumber))>>pinnumber;
		  break;
		  case PORT_B:
		  		  *value=(PINB&(1<<pinnumber))>>pinnumber;
					break;
		 case PORT_C:
		// *value= (PINC & (1 << bits1)) ? 1 : 0;
		 *value=(PINC&(1<<pinnumber))>>pinnumber;
		 break;
		  case PORT_D:
		  *value=(PIND&(1<<pinnumber))>>pinnumber;
		  break;
		  default:
		  return Unkown_Port;
		  
	  }
	  return DIODriverOK;
  }

EN_DioDriverState_t DIO_toggle(uint8_t portnumber,uint8_t pinnumber){

		 switch (portnumber){
			 case PORT_A:
			 PORTA^=(1<<pinnumber);
			 break;
			 case PORT_B:
			 PORTB^=(1<<pinnumber);
			 break;
			 case PORT_C:
			 PORTC^=(1<<pinnumber);
			 break;
			 default:
			 return Unkown_Port;
		 } 
		 return DIODriverOK;
	 } 
	 