
#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_

#include "../../Utilities/registers.h"
#include "../../Utilities/types.h"
#include "../../Utilities/bit_manipulation.h"

/************************************************************************/
/* Interrupt Vector                                                     */
/************************************************************************/

/* External Interrupt Vector */
/* External Interrupt Request 0 */
#define EXT_INT_0 __vector_1
/* External Interrupt Request 1 */
#define EXT_INT_1 __vector_2
/* External Interrupt Request 2 */
#define EXT_INT_2 __vector_3

/* Timer Interrupt Vector */

/*Timer 2*/
/* Timer/Counter2 Compare Match */
#define TIMER2_COMP __vector_4
/* Timer/Counter2 Overflow */
#define TIMER2_OVF __vector_5

/*Timer 1*/
/* Timer/Counter1 Capture Event */
#define TIMER1_CAPT __vector_6
/* Timer/Counter1 Compare Match A */
#define TIMER1_COMPA __vector_7
/* Timer/Counter1 Compare Match B */
#define TIMER1_COMPB __vector_8
/* Timer/Counter1 Overflow */
#define TIMER1_OVF __vector_9

/*Timer 0*/
/* Timer/Counter0 Compare Match */
#define TIMER0_COMP __vector_10
/* Timer/Counter0 Overflow */
#define TIMER0_OVF __vector_11

/* Set Global Interrupt, Set the I-bit in status register to 1 */
#define sei() __asm__ __volatile__ ("sei" ::: "memory")

/* Clear Global Interrupt, Set the I-bit in status register to 0 */
#define cli() __asm__ __volatile__ ("cli" ::: "memory")

/* ISR definition */
#define ISR(INT_VECT)void INT_VECT(void) __attribute__((signal,used));\
void INT_VECT(void)

/* Interrupt Bits */
/* GICR bits */
#define INT1 7
#define INT0 6
#define INT2 5

/* GIFR bits */
#define INTF1 7
#define INTF0 6
#define INTF2 5

/* MCUCR bits */
#define ISC00 0
#define ISC01 1
#define ISC10 2
#define ISC11 3

/* MCUCSR bits */
#define ISC2 7

/* Interrupt PORT - Pins */
/* Interrupt 0 */
#define INT0_PORT PORT_D
#define INT0_PIN 2
/* Interrupt 1 */
#define INT1_PORT PORT_D
#define INT1_PIN 3
/* Interrupt 2 */
#define INT2_PORT PORT_B
#define INT2_PIN 2

#define INT_FAILING 0
#define INT_RISING 1

/* Function Prototypes */
/* Using this function to enable Interrupt 1
 * INPUT : uint8_t --> FAILING OR RISING
 * RETURN OK OR ERROR OF EXCUTE */
extern ERROR_H Enable_INT0 (uint8_t INT_STATE);

/* Using this function to enable Interrupt 1
 * INPUT : uint8_t --> FAILING OR RISING
 * RETURN OK OR ERROR OF EXCUTE */
extern ERROR_H Enable_INT1 (uint8_t INT_STATE);

/* Using this function to enable Interrupt 1
 * INPUT : uint8_t --> FAILING OR RISING
 * RETURN OK OR ERROR OF EXCUTE */
extern ERROR_H Enable_INT2 (uint8_t INT_STATE);

#endif /* INTERRUPTS_H_ */