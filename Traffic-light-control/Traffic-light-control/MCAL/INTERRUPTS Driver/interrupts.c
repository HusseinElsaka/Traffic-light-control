#include "interrupts.h"

/* Using this function to enable Interrupt 1
 * INPUT : uint8_t --> FAILING OR RISING
 * RETURN OK OR ERROR OF EXCUTE */
extern ERROR_H Enable_INT0 (uint8_t INT_STATE)
{
	sei();
	GICR |= (1<< INT0);
	if(INT_STATE == INT_FAILING)
	{
		MCUCR |= (1<< ISC01);
	}
	else if(INT_STATE == INT_RISING)
	{
		MCUCR |= (1<< ISC01) | (1<< ISC00);
	}
	else
	{
		return ERROR;
	}

	return OK;
}

/* Using this function to enable Interrupt 1
 * INPUT : uint8_t --> FAILING OR RISING
 * RETURN OK OR ERROR OF EXCUTE */
extern ERROR_H Enable_INT1 (uint8_t INT_STATE)
{
	sei();
	GICR |= (1<< INT1);
	if(INT_STATE == INT_FAILING)
	{
		MCUCR |= (1<< ISC11);
	}
	else if(INT_STATE == INT_RISING)
	{
		MCUCR |= (1<< ISC10) | (1<< ISC11);
	}
	else
	{
		return ERROR;
	}
	return OK;
}

/* Using this function to enable Interrupt 1
 * INPUT : uint8_t --> FAILING OR RISING
 * RETURN OK OR ERROR OF EXCUTE */
extern ERROR_H Enable_INT2 (uint8_t INT_STATE)
{
	sei();
	GICR |= (1<< INT2);
	if(INT_STATE == INT_FAILING)
	{
		CLR_BIT(MCUCSR,ISC2);
	}
	else if(INT_STATE == INT_RISING)
	{
		SET_BIT(MCUCSR,ISC2);
	}
	else
	{
		return ERROR;
	}
	return OK;
}
