#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include <GamepadEnums.h>

#define PIN_DPAD_UP 9
#define PIN_DPAD_DOWN 28
#define PIN_DPAD_RIGHT 27
#define PIN_DPAD_LEFT 29

#define PIN_BUTTON_B1 25
#define PIN_BUTTON_B2 23
#define PIN_BUTTON_B3 26
#define PIN_BUTTON_B4 24

#define PIN_BUTTON_R1 13
#define PIN_BUTTON_R2 12
#define PIN_BUTTON_L1 12
#define PIN_BUTTON_L2 10

#define PIN_BUTTON_S1 0
#define PIN_BUTTON_S2 1
#define PIN_BUTTON_A1 4
#define PIN_BUTTON_A2 5
#define PIN_BUTTON_R3 3
#define PIN_BUTTON_L3 2

#define PIN_BUTTON_TURBO -1
#define PIN_SLIDER_LS -1
#define PIN_SLIDER_RS -1

#define DEFAULT_SOCD_MODE SOCD_MODE_UP_PRIORITY
#define BUTTON_LAYOUT BUTTON_LAYOUT_STICKLESS
#define BUTTON_LAYOUT_RIGHT BUTTON_LAYOUT_NOIR8

#define SPLASH_MODE STATICSPLASH
#define TURBO_LED_PIN -1
#define BOARD_LEDS_PIN -1

#define HAS_I2C_DISPLAY 1
#define I2C_SDA_PIN 8
#define I2C_SCL_PIN 9
#define I2C_BLOCK i2c0
#define I2C_SPEED 400000

#define ANALOG_ADC_VRY -1
#define ANALOG_ADC_VRX -1

#endif
