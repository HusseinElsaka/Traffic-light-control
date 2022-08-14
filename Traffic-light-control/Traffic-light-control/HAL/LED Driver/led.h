
#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO Driver/dio.h"
#include "../../MCAL/INTERRUPTS Driver/interrupts.h"
#include "../../MCAL/TIMERS Driver/TIMER0/timer0.h"
#include "../../MCAL/TIMERS Driver/TIMER1/timer1.h"


/* defines for traffic LEDs */
#define TRAFFIC_PORT PORT_A
#define PEDESTRIAN_PORT PORT_B

#define TRAFFIC_GREEN_LED_PIN PIN0
#define TRAFFIC_YELLOW_LED_PIN PIN1
#define TRAFFIC_RED_LED_PIN PIN2

#define PEDESTRIAN_GREEN_LED_PIN PIN0
#define PEDESTRIAN_YELLOW_LED_PIN PIN1
#define PEDESTRIAN_RED_LED_PIN PIN2



/* 
	Use to initialization the LED by DIO 
	input: Port and Pin for LED
	return OK or ERROR
*/
ERROR_H LED_init(uint8_t ledPort, uint8_t ledPin);

/*
	Use to turn on the LED by DIO
	input: Port and Pin for LED
	return OK or ERROR
*/
ERROR_H LED_on(uint8_t ledPort, uint8_t ledPin);

/*
	Use to turn off the LED by DIO
	input: Port and Pin for LED
	return OK or ERROR
*/
ERROR_H LED_off(uint8_t ledPort, uint8_t ledPin);

/*
	Use to blink the LED the LED by DIO
	input: Port and Pin for LED
	return OK or ERROR
*/
ERROR_H LED_blink(uint8_t ledPort, uint8_t ledPin);


/*
Traffic leds init
INPUT : --
OUTPUT : ERROR - OK
*/
ERROR_H Traffic_LED_Init(void);

/*
	Traffic Car Move by enable Green light and turn off Red and Yellow
	INPUT : --
	OUTPUT : ERROR - OK
*/
ERROR_H Traffic_Car_Move(void);
 
/*
	Traffic Car Stop by enable red light and turn off Green and Yellow
	INPUT : --
	OUTPUT : ERROR - OK
*/
 ERROR_H Traffic_Car_Stop(void);
 
/*
	Traffic Car change by enable Yellow light and turn off Red and Green
	INPUT : --
	OUTPUT : ERROR - OK
*/
 ERROR_H Traffic_Car_Change(void);
 



#endif /* LED_H_ */