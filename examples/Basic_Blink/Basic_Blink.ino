// Select your board: uncomment ONE line

//#define ARDUINO_UNO
//#define ARDUINO_NANO
//#define ARDUINO_MEGA
//#define ESP8266_NODEMCU
#define ESP32_DEVKIT
//#define RASPBERRY_PI_PICO
//#define STM32_BLUEPILL

#include <Blink.h>

Blink led;

void setup() {
  led.begin();
}

void loop() {
  led.blink(500,500);   // blink(on_time_ms, off_time_ms)
}
