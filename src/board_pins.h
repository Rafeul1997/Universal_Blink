#pragma once

// ---------- Arduino Classic ----------
#ifdef ARDUINO_UNO_R3
#define BLINK_LED_PIN 13

#elif defined(ARDUINO_NANO)
#define BLINK_LED_PIN 13

#elif defined(ARDUINO_MEGA_2560)
#define BLINK_LED_PIN 13

#elif defined(ARDUINO_LEONARDO)
#define BLINK_LED_PIN 13

#elif defined(ARDUINO_MICRO)
#define BLINK_LED_PIN 13

#elif defined(ARDUINO_PRO_MINI)
#define BLINK_LED_PIN 13

#elif defined(ARDUINO_MINI)
#define BLINK_LED_PIN 13


// ---------- Modern Arduino ----------
#elif defined(ARDUINO_UNO_R4_MINIMA)
#define BLINK_LED_PIN LED_BUILTIN

#elif defined(ARDUINO_UNO_R4_WIFI)
#define BLINK_LED_PIN LED_BUILTIN

#elif defined(ARDUINO_NANO_EVERY)
#define BLINK_LED_PIN LED_BUILTIN

#elif defined(ARDUINO_NANO_33_IOT)
#define BLINK_LED_PIN LED_BUILTIN

#elif defined(ARDUINO_NANO_33_BLE)
#define BLINK_LED_PIN LED_BUILTIN

#elif defined(ARDUINO_DUE)
#define BLINK_LED_PIN LED_BUILTIN


// ---------- ESP8266 ----------
#elif defined(NODEMCU_ESP8266)
#define BLINK_LED_PIN 2

#elif defined(WEMOS_D1_MINI)
#define BLINK_LED_PIN 2

#elif defined(ESP_01)
#define BLINK_LED_PIN 1

#elif defined(ESP_12E)
#define BLINK_LED_PIN 2

#elif defined(ADAFRUIT_HUZZAH_ESP8266)
#define BLINK_LED_PIN 0


// ---------- ESP32 ----------
#elif defined(ESP32_DEVKIT_V1)
#define BLINK_LED_PIN 2

#elif defined(NODEMCU_32S)
#define BLINK_LED_PIN 2

#elif defined(DOIT_ESP32_DEVKIT)
#define BLINK_LED_PIN 2

#elif defined(ESP32_S2_DEVKIT)
#define BLINK_LED_PIN 15

#elif defined(ESP32_S3_DEVKIT)
#define BLINK_LED_PIN 48

#elif defined(ESP32_C3_DEVKIT)
#define BLINK_LED_PIN 8

#elif defined(ESP32_C6_DEVKIT)
#define BLINK_LED_PIN 8

#elif defined(ESP32_H2_DEVKIT)
#define BLINK_LED_PIN 8


// ---------- Raspberry Pi Pico ----------
#elif defined(RPI_PICO)
#define BLINK_LED_PIN 25

#elif defined(RPI_PICO_W)
#define BLINK_LED_PIN LED_BUILTIN

#elif defined(RPI_PICO_2)
#define BLINK_LED_PIN 25

#elif defined(RPI_PICO_2_W)
#define BLINK_LED_PIN LED_BUILTIN

#elif defined(ADAFRUIT_FEATHER_RP2040)
#define BLINK_LED_PIN 13

#elif defined(SEEED_XIAO_RP2040)
#define BLINK_LED_PIN LED_BUILTIN

#elif defined(SPARKFUN_PRO_MICRO_RP2040)
#define BLINK_LED_PIN 25


// ---------- STM32 ----------
#elif defined(STM32_BLUE_PILL)
#define BLINK_LED_PIN PC13

#elif defined(STM32_BLACK_PILL_F401)
#define BLINK_LED_PIN PC13

#elif defined(STM32_BLACK_PILL_F411)
#define BLINK_LED_PIN PC13

#elif defined(NUCLEO_F103RB)
#define BLINK_LED_PIN LED_BUILTIN

#elif defined(NUCLEO_F401RE)
#define BLINK_LED_PIN LED_BUILTIN

#elif defined(NUCLEO_L432KC)
#define BLINK_LED_PIN LED_BUILTIN

#elif defined(STM32F4_DISCOVERY)
#define BLINK_LED_PIN PD12

#elif defined(STM32L4_DISCOVERY)
#define BLINK_LED_PIN LED_BUILTIN


// ---------- Default ----------
#else
#define BLINK_LED_PIN LED_BUILTIN

#endif
