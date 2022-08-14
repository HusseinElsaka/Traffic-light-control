
#ifndef APPLICATION_H_
#define APPLICATION_H_

#include "../HAL/LED Driver/led.h"
#include "../HAL/Button Driver/button.h"


/* Defines for Modes */
#define TRAFFIC_NORMAL_MODE 0
#define TRAFFIC_PEDESTRAIN_MODE_RED 1
#define TRAFFIC_PEDESTRAIN_MODE_YELLOW 2
#define TRAFFIC_PEDESTRAIN_MODE_GREEN 3

/* Define for state of Traffic Light for car */
#define TRAFFIC_CAR_GREEN 0
#define TRAFFIC_CAR_YELLOW_RED 1
#define TRAFFIC_CAR_RED 2
#define TRAFFIC_CAR_YELLOW_GREEN 3

/* global variables */
uint8_t TRAFFIC_MODE;
uint8_t LED_TRAFFIC_COUNTER;

/* Timer Config */
Str_Timer0Configuration_t TIMER0_APP;
Str_Timer1Configuration_t TIMER1_APP;

/*
initialization :
--> Initailization LEDS for Traffic lighter and Predestrains light
--> Initailization Button for Predestrains
--> init ,config and Start of Timer1 that use to generate 5sec
--> init and config of Timer0 that use to generate 0.25 sec
--> start LED at green for cars and red for predestrains
*/
void APP_init(void);

/*
--> in application
-->select state of the traffic light of cars and pedestrians
---->normal mode
------> every light turn on for 5 sec then switch to next
---->Pedestrains mode
------> if the traffic light of car is green 
----------->blink yellow and go to red and change mode
------>if the traffic light of car is yellow go to green
----------->Reset timer1 wait 5 sec and go to red
------> if the traffic light of car is red
----------->Reset timer1 wait 5 sec
------>if the traffic light of car is yellow go to red
----------->Reset timer1 wait 5 sec and go to red
*/
void APP_start(void);

void Traffic_states(void);

#endif /* APPLICATION_H_ */