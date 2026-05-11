#pragma once

#ifdef ARDUINO_UNO
  #define BLINK_LED_PIN 13

#elif defined(ARDUINO_NANO)
  #define BLINK_LED_PIN 13

#elif defined(ARDUINO_MEGA)
  #define BLINK_LED_PIN 13

#elif defined(ESP8266_NODEMCU)
  #define BLINK_LED_PIN 2

#elif defined(WEMOS_D1_MINI)
  #define BLINK_LED_PIN 2

#elif defined(ESP32_DEVKIT)
  #define BLINK_LED_PIN 2

#elif defined(ESP32_C3)
  #define BLINK_LED_PIN 8

#elif defined(ESP32_S3)
  #define BLINK_LED_PIN 48

#elif defined(RASPBERRY_PI_PICO)
  #define BLINK_LED_PIN 25

#elif defined(RASPBERRY_PI_PICO_W)
  #define BLINK_LED_PIN LED_BUILTIN

#elif defined(STM32_BLUEPILL)
  #define BLINK_LED_PIN PC13

#elif defined(STM32_BLACKPILL)
  #define BLINK_LED_PIN PC13

#else
  #define BLINK_LED_PIN LED_BUILTIN
#endif
