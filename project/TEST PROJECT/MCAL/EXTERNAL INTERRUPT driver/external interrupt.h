
#ifndef _AVR_INTERRUPT_H_
#define _AVR_INTERRUPT_H_
#include <avr/io.h>
//#include "../../utilities/regeisters.h"
 #define I     7
 #define INT1  7
 #define INT0  6
 #define INT2  5
 #define ISC00 0
 #define ISC01 1
 #define ISC10 2
 #define ISC11 3
 typedef enum EN_DriverState_t
 {
	 DriverOK,Driver_failed
 }EN_DriverState_t;
# define sei()  __asm__ __volatile__ ("sei" ::: "memory")
EN_DriverState_t INTERRUPT_init();
# define cli()  __asm__ __volatile__ ("cli" ::: "memory")
#  define ISR(vector, ...)            \
    void vector (void) __attribute__ ((signal,__INTR_ATTRS)) __VA_ARGS__; \
    void vector (void)
#endif
