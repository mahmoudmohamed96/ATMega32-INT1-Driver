/*
 * INT0.C
 *
 *  Created on: Oct 23, 2018
 *      Author: Mahmoud Mohamed Younis
 */

#include "INT1.h"

#if MODE == 1

void INT1_INIT (void)
{
	// Enable General interrupts.
	sei();
	// Enable External interrupt #1.
	GICR  |= (1<<INT1);
	// Select Mode
	// ISC11 & ISC10 are initially zeros.
}

#endif

#if MODE == 2

void INT1_INIT (void)
{
	// Enable General interrupts.
	sei();
	// Enable External interrupt #1.
	GICR  |= (1<<INT1);
	// Select Mode
	MCUCR |= (1<<ISC10); // ISC11 initiallly zero
}

#endif

#if MODE == 3

void INT1_INIT (void)
{
	// Enable General interrupts.
	sei();
	// Enable External interrupt #1.
	GICR  |= (1<<INT1);
	// Select Mode
	MCUCR |= (1<<ISC11); // ISC10 initiallly zero
}

#endif

#if MODE == 4

void INT1_INIT (void)
{
	// Enable General interrupts.
	sei();
	// Enable External interrupt #1.
	GICR  |= (1<<INT1);
	// Select Mode
	MCUCR |= (1<<ISC10) | (1<<ISC11);
}

#endif
