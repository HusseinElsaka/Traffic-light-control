
#include "application.h"

void APP_init(void)
{
	LED_init(PORT_A, PIN4);
}
void APP_start(void)
{
	LED_blink(PORT_A, PIN4);
}