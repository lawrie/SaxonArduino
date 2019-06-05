/*
  wiring_shift.c - shiftOut() function
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2005-2006 David A. Mellis

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA

  $Id: wiring.c 248 2007-02-03 15:36:30Z mellis $
*/

#include "Arduino.h"
uint8_t shiftIn(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder) {
	(*(volatile uint32_t*) IO_MUX) |= (1 << SHIFT_IN_MUX); // Switch clock pin to shiftIn peripheral
        pinMode(SHIFT_IN_CLOCK_PIN, OUTPUT);
        pinMode(SHIFT_IN_DATA_PIN, INPUT); 
	(*(volatile uint32_t*) IO_SHIFT_IN_PRE_SCALE) = 50;
	(*(volatile uint32_t*) IO_SHIFT_IN_BIT_ORDER) = bitOrder;
        delayMicroseconds(100);
	return (*(volatile uint32_t*) IO_SHIFT_IN_BYTE_VALUE);
}

void shiftOut(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder, uint8_t val)
{
	(*(volatile uint32_t*) IO_MUX) |= (1 << SHIFT_OUT_MUX); // Switch clock and data pins to shiftOut peripheral
        pinMode(SHIFT_OUT_CLOCK_PIN, OUTPUT);
        pinMode(SHIFT_OUT_DATA_PIN, OUTPUT);
	(*(volatile uint32_t*) IO_SHIFT_OUT_PRE_SCALE) = 1000;
	(*(volatile uint32_t*) IO_SHIFT_OUT_BIT_ORDER) = bitOrder;
	(*(volatile uint32_t*) IO_SHIFT_OUT_BYTE_VALUE) = val;
}
