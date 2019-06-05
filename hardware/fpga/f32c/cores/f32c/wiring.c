/*-
 * Copyright (c) 2015 Marko Zec, University of Zagreb
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $Id$
 */

#include "Arduino.h"
#include "dev/io.h"


static uint32_t tsc_hi, tsc_lo;

const volatile uint32_t *pintype2ioaddr[PIN_TYPE_SIZE] = {
  [PIN_TYPE_NC]     = NULL,
  [PIN_TYPE_INPUT]  = (volatile uint32_t *)IO_GPIO_A_DATA,
  [PIN_TYPE_OUTPUT] = (volatile uint32_t *)IO_GPIO_A_DATA,
  [PIN_TYPE_GPIO]   = (volatile uint32_t *)IO_GPIO_A_DATA,
  [PIN_TYPE_GPIOB]  = (volatile uint32_t *)IO_GPIO_B_DATA
};

const volatile uint32_t *pintype2ioaddr_in[PIN_TYPE_SIZE] = {
  [PIN_TYPE_NC]     = NULL,
  [PIN_TYPE_INPUT]  = (volatile uint32_t *)IO_GPIO_A_INPUT,
  [PIN_TYPE_OUTPUT] = (volatile uint32_t *)IO_GPIO_A_INPUT,
  [PIN_TYPE_GPIO]   = (volatile uint32_t *)IO_GPIO_A_INPUT,
  [PIN_TYPE_GPIOB]  = (volatile uint32_t *)IO_GPIO_B_INPUT
};

const struct variant_pin_map_s variant_pin_map[] = VARIANT_DIGITAL_PIN_MAP;
const uint32_t variant_pin_map_size = sizeof(variant_pin_map);

static void
update_tsc(void)
{
	uint32_t tsc;

	tsc = (*(volatile uint32_t *)IO_MACHINE_TIMER);

	/* check for 32-bit overflow */
	if (tsc < tsc_lo)
		tsc_hi++;
	tsc_lo = tsc;
}


uint32_t
millis(void)
{
	uint64_t tsc64;

	update_tsc();
	tsc64 = tsc_hi;
	tsc64 <<= 32;
	tsc64 += tsc_lo;
	
	return(tsc64 / 1000);
}


uint32_t
micros(void)
{
	uint64_t tsc64;

	update_tsc();
	tsc64 = tsc_hi;
	tsc64 <<= 32;
	tsc64 += tsc_lo;
	
	return(tsc64);
}


void
delay(uint32_t ms)
{
	int32_t t, target;
	target = (*(volatile uint32_t *)IO_MACHINE_TIMER);
	while (ms--)
	{
		target += 1000;
		do
			t = (*(volatile uint32_t *)IO_MACHINE_TIMER);
		while((target-t) > 0);
	}
}

void 
delayMicroseconds(uint32_t usec){
    if (usec == 0) return;

    int32_t endwait = micros() + usec;
    while( ((int32_t)micros())-endwait < 0);
}

