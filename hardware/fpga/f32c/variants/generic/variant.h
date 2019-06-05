
#ifndef _f32c_variant_h
#define _f32c_variant_h

#include <stdint.h>

/* LEDs */
#define PIN_LED_13           3
#define PIN_LED              3
#define LED_BUILTIN          3

#include "Arduino.h"
#ifdef __cplusplus
#include "UARTClass.h"
#endif

#ifdef __cplusplus
extern UARTClass Serial;
#endif

// These aren't yet used
#define SERIAL_INTERFACES_COUNT 1
#define WIRE_INTERFACES_COUNT 1
#define SPI_INTERFACES_COUNT 1
#define SEVEN_SEGMENT_INTERFACES_COUNT 2
#define SERVO_INTERFACES_COUNT 4
#define PULSE_IN_INTERFACES_COUNT 2
#define SHIFT_IN_INTERFACES_COUNT 1
#define SHIFT_OUT_INTERFACES_COUNT 1
#define TONE_INTERFACES_COUNT 1
#define QUADRATURE_INTERFACES_COUNT 1

/*
 * Analog pins - currently dummies to make thing compile
 */
static const uint8_t A0  = 16;
static const uint8_t A1  = 17;
static const uint8_t A2  = 18;
static const uint8_t A3  = 19;
static const uint8_t A4  = 20;
static const uint8_t A5  = 21;

// Other pins
static const uint8_t SPI_START_PIN = 40;
static const int8_t  PWM_PINS[] = {14,-1,-1,12,13};
static const uint8_t TONE_PIN = 47;
static const uint8_t SERVO_PINS[] = {7,6,15,16};
static const uint8_t SHIFT_IN_CLOCK_PIN = 5;
static const uint8_t SHIFT_OUT_CLOCK_PIN = 6;
static const uint8_t SHIFT_OUT_DATA_PIN = 7;
static const uint8_t SHIFT_IN_DATA_PIN = 45;
static const int8_t PULSE_IN_PINS[] = {45,44};
static const uint8_t QUAD_PIN_A = 16;
static const uint8_t QUAD_PIN_B = 17;
static const int8_t SEVEN_SEGMENT_A_SEG_PINS[] = {34,33,32,39,38,37,36};
static const int8_t SEVEN_SEGMENT_B_SEG_PINS[] = {26,25,24,19,18,17,16};
static const uint8_t SEVEN_SEGMENT_A_DIGIT_PIN = 35;
static const uint8_t SEVEN_SEGMENT_B_DIGIT_PIN = 27;

// Muxes
static const uint8_t SHIFT_IN_MUX = 0;
static const uint8_t SHIFT_OUT_MUX = 1;
static const uint8_t SEVEN_SEGMENT_A_MUX = 4;
static const uint8_t SERVO_MUX = 3;
static const uint8_t SEVEN_SEGMENT_B_MUX = 2;
static const uint8_t SPI_MASTER_MUX = 5;
static const uint8_t PWM_MUX = 6;
static const uint8_t TONE_MUX = 9;

#endif /* _f32c_variant_h */

