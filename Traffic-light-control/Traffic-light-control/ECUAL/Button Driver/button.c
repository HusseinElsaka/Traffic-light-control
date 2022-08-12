
#include "button.h"



ERROR_H BUTTON_init(uint8_t buttonPort, uint8_t buttonPin)
{
	DIO_init(buttonPort, buttonPin, IN);
	return OK;
}

ERROR_H BUTTON_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t *value)
{
	DIO_read(buttonPort, buttonPin, value);
	return OK;
}
