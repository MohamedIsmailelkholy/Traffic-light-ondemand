/*
 * dio.h
 *
 * Created: 07/11/2022 10:04:10 
 *  Author: MH7B
 */ 


#ifndef DIO_H_
#define DIO_H_
//all driver typedefs
//typedef char uint8_t  ;
//driver includes
#include "../../utilities/regeisters.h"
#include "../../utilities/types.h"
typedef enum EN_DioDriverState_t
{
	DIODriverOK,Unkown_Port,Wrong_Direction,Wrong_Value
}EN_DioDriverState_t;
//all driver special macros
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'
//direction defines
#define IN 0
#define OUT 1
//value defines
#define LOW 0
#define HIGH 1


//all driver functions prototypes


 EN_DioDriverState_t DIO_init(uint8_t portnumber,uint8_t pinnumber,uint8_t direction);
 EN_DioDriverState_t DIO_write(uint8_t portnumber,uint8_t pinnumber,uint8_t value);
 EN_DioDriverState_t DIO_read(uint8_t portnumber,uint8_t pinnumber,uint8_t *value);
 EN_DioDriverState_t DIO_toggle(uint8_t portnumber,uint8_t pinnumber);




#endif /* DIO_H_ */