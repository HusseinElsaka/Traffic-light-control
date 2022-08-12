#include "led.h"

ERROR_H LED_init(uint8_t ledPort, uint8_t ledPin)
{
	DIO_init(ledPort, ledPin, OUT);
	return OK;
}

ERROR_H LED_on(uint8_t ledPort, uint8_t ledPin)
{
	DIO_write(ledPort,ledPin,HIGH);
	return OK;
}

ERROR_H LED_off(uint8_t ledPort, uint8_t ledPin)
{
	DIO_write(ledPort,ledPin,LOW);
	return OK;
}

ERROR_H LED_blink(uint8_t ledPort, uint8_t ledPin)
{
	DIO_toggle(ledPort,ledPin);
	return OK;
}
 