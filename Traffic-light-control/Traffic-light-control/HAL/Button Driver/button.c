
#include "button.h"



ERROR_H BUTTON_init(uint8_t buttonPort, uint8_t buttonPin)
{
	if(DIO_init(buttonPort, buttonPin, IN) == 0)
	{
		return OK;
	}
	return ERROR;
}

ERROR_H BUTTON_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t *value)
{
	
	if(DIO_read(buttonPort, buttonPin, value) == 0)
	{
		return OK;
	}
	return ERROR;
}

/*
Make the button for read and enable interrupt for that pin
input : --
output : --
return OK or ERROR
*/
extern ERROR_H Pedestrian_Button_Init(void)
{
	BUTTON_init(PEDESTRIAN_BUTTON_PORT,PEDESTRIAN_BUTTON_PIN);
	Enable_INT0 (INT_RISING);
	return OK;
}



