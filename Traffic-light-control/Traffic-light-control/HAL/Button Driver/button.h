

#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/DIO Driver/dio.h"
#include "../../MCAL/INTERRUPTS Driver/interrupts.h"

#define BUTTON_HIGH 1
#define BUTTON_LOW 0


#define PEDESTRIAN_BUTTON_PORT INT0_PORT
#define PEDESTRIAN_BUTTON_PIN INT0_PIN

/* Initialization the button
input : take port and pin of button
return OK or ERROR */
extern ERROR_H BUTTON_init(uint8_t buttonPort, uint8_t buttonPin);

/* READ the button
input : take port and pin of button
output : the value on the pin
return OK or ERROR */
extern ERROR_H BUTTON_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t *value);
 
 
/*
Make the button for read and enable interrupt for that pin
input : --
output : --
return OK or ERROR
*/
extern ERROR_H Pedestrian_Button_Init(void);



#endif /* BUTTON_H_ */