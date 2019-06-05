#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#define digitalPinToInterrupt(p) (p)

/* PIN_TYPE_* are enum's defined in wiring.h */
/* PIN_TYPE_OUTPUT is LED */
/* PIN_TYPE_INPUT is PUSHBUTTON */
#define VARIANT_DIGITAL_PIN_MAP \
{ \
/* pin     port             bit   pwm       icp      */ \
  [ 0] = { PIN_TYPE_OUTPUT,   0,  OCP_NONE, ICP_NONE }, \
  [ 1] = { PIN_TYPE_OUTPUT,   1,  OCP_NONE, ICP_NONE }, \
  [ 2] = { PIN_TYPE_OUTPUT,   2,  OCP_NONE, ICP_NONE }, \
  [ 3] = { PIN_TYPE_OUTPUT,   3,  OCP_NONE, ICP_NONE }, \
  [ 4] = { PIN_TYPE_GPIO,     4,  OCP_NONE, ICP_NONE }, \
  [ 5] = { PIN_TYPE_GPIO,     5,  OCP_NONE, ICP_NONE }, \
  [ 6] = { PIN_TYPE_GPIO,     6,  OCP_NONE, ICP_NONE }, \
  [ 7] = { PIN_TYPE_GPIO,     7,  OCP_NONE, ICP_NONE }, \
  [ 8] = { PIN_TYPE_INPUT,    8,  OCP_NONE, ICP_NONE }, \
  [ 9] = { PIN_TYPE_INPUT,    9,  OCP_NONE, ICP_NONE }, \
  [10] = { PIN_TYPE_GPIO,    10,  OCP_NONE, ICP_NONE }, \
  [11] = { PIN_TYPE_GPIO,    11,  OCP_NONE, ICP_NONE }, \
  [12] = { PIN_TYPE_GPIO,    12,  OCP_NONE, ICP_NONE }, \
  [13] = { PIN_TYPE_GPIO,    13,  OCP_NONE, ICP_NONE }, \
  [14] = { PIN_TYPE_GPIO,    14,  OCP_NONE, ICP_NONE }, \
  [15] = { PIN_TYPE_GPIO,    15,  OCP_NONE, ICP_NONE }, \
  [16] = { PIN_TYPE_GPIO,    16,  OCP_NONE, ICP_NONE }, \
  [17] = { PIN_TYPE_GPIO,    17,  OCP_NONE, ICP_NONE }, \
  [18] = { PIN_TYPE_GPIO,    18,  OCP_NONE, ICP_NONE }, \
  [19] = { PIN_TYPE_GPIO,    19,  OCP_NONE, ICP_NONE }, \
  [20] = { PIN_TYPE_GPIO,    20,  OCP_NONE, ICP_NONE }, \
  [21] = { PIN_TYPE_GPIO,    21,  OCP_NONE, ICP_NONE }, \
  [22] = { PIN_TYPE_GPIO,    22,  OCP_NONE, ICP_NONE }, \
  [23] = { PIN_TYPE_GPIO,    23,  OCP_NONE, ICP_NONE }, \
  [24] = { PIN_TYPE_GPIO,    24,  OCP_NONE, ICP_NONE }, \
  [25] = { PIN_TYPE_GPIO,    25,  OCP_NONE, ICP_NONE }, \
  [26] = { PIN_TYPE_GPIO,    26,  OCP_NONE, ICP_NONE }, \
  [27] = { PIN_TYPE_GPIO,    27,  OCP_NONE, ICP_NONE }, \
  [28] = { PIN_TYPE_GPIO,    28,  OCP_NONE, ICP_NONE }, \
  [29] = { PIN_TYPE_GPIO,    29,  OCP_NONE, ICP_NONE }, \
  [30] = { PIN_TYPE_GPIO,    30,  OCP_NONE, ICP_NONE }, \
  [31] = { PIN_TYPE_GPIO,    31,  OCP_NONE, ICP_NONE }, \
  [32] = { PIN_TYPE_GPIOB,     0,  OCP_NONE, ICP_NONE }, \
  [33] = { PIN_TYPE_GPIOB,     1,  OCP_NONE, ICP_NONE }, \
  [34] = { PIN_TYPE_GPIOB,     2,  OCP_NONE, ICP_NONE }, \
  [35] = { PIN_TYPE_GPIOB,     3,  OCP_NONE, ICP_NONE }, \
  [36] = { PIN_TYPE_GPIOB,     4,  OCP_NONE, ICP_NONE }, \
  [37] = { PIN_TYPE_GPIOB,     5,  OCP_NONE, ICP_NONE }, \
  [38] = { PIN_TYPE_GPIOB,     6,  OCP_NONE, ICP_NONE }, \
  [39] = { PIN_TYPE_GPIOB,     7,  OCP_NONE, ICP_NONE }, \
  [40] = { PIN_TYPE_GPIOB,     8,  OCP_NONE, ICP_NONE }, \
  [41] = { PIN_TYPE_GPIOB,     9,  OCP_NONE, ICP_NONE }, \
  [42] = { PIN_TYPE_GPIOB,    10,  OCP_NONE, ICP_NONE }, \
  [43] = { PIN_TYPE_GPIOB,    11,  OCP_NONE, ICP_NONE }, \
  [44] = { PIN_TYPE_GPIOB,    12,  OCP_NONE, ICP_NONE }, \
  [45] = { PIN_TYPE_GPIOB,    13,  OCP_NONE, ICP_NONE }, \
  [46] = { PIN_TYPE_GPIOB,    14,  OCP_NONE, ICP_NONE }, \
  [47] = { PIN_TYPE_GPIOB,    15,  OCP_NONE, ICP_NONE }, \
  [48] = { PIN_TYPE_GPIOB,    16,  OCP_NONE, ICP_NONE }, \
  [49] = { PIN_TYPE_GPIOB,    17,  OCP_NONE, ICP_NONE }, \
  [50] = { PIN_TYPE_GPIOB,    18,  OCP_NONE, ICP_NONE }, \
  [51] = { PIN_TYPE_GPIOB,    19,  OCP_NONE, ICP_NONE }, \
  [52] = { PIN_TYPE_GPIOB,    20,  OCP_NONE, ICP_NONE }, \
  [53] = { PIN_TYPE_GPIOB,    21,  OCP_NONE, ICP_NONE }, \
  [54] = { PIN_TYPE_GPIOB,    22,  OCP_NONE, ICP_NONE }, \
  [55] = { PIN_TYPE_GPIOB,    23,  OCP_NONE, ICP_NONE }, \
  [56] = { PIN_TYPE_GPIOB,    24,  OCP_NONE, ICP_NONE }, \
  [57] = { PIN_TYPE_GPIOB,    25,  OCP_NONE, ICP_NONE }, \
  [58] = { PIN_TYPE_GPIOB,    26,  OCP_NONE, ICP_NONE }, \
  [59] = { PIN_TYPE_GPIOB,    27,  OCP_NONE, ICP_NONE }, \
  [60] = { PIN_TYPE_GPIOB,    28,  OCP_NONE, ICP_NONE }, \
  [61] = { PIN_TYPE_GPIOB,    29,  OCP_NONE, ICP_NONE }, \
  [62] = { PIN_TYPE_GPIOB,    30,  OCP_NONE, ICP_NONE }, \
  [63] = { PIN_TYPE_GPIOB,    31,  OCP_NONE, ICP_NONE }, \
}

#endif
