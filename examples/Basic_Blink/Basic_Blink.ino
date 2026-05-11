// Select your board: uncomment ONE line

// ======================================================
// 1. Arduino Classic AVR
// ======================================================
//#define ARDUINO_UNO_R3
//#define ARDUINO_NANO
//#define ARDUINO_MEGA_2560
//#define ARDUINO_LEONARDO
//#define ARDUINO_MICRO
//#define ARDUINO_PRO_MINI
//#define ARDUINO_MINI

// ======================================================
// 2. Modern Arduino
// ======================================================
//#define ARDUINO_UNO_R4_MINIMA
//#define ARDUINO_UNO_R4_WIFI
//#define ARDUINO_NANO_EVERY
//#define ARDUINO_NANO_33_IOT
//#define ARDUINO_NANO_33_BLE
//#define ARDUINO_DUE

// ======================================================
// 3. ESP8266
// ======================================================
//#define NODEMCU_ESP8266
//#define WEMOS_D1_MINI
//#define ESP_01
//#define ESP_12E
//#define ADAFRUIT_HUZZAH_ESP8266

// ======================================================
// 4. ESP32 Classic
// ======================================================
//#define ESP32_DEVKIT_V1
//#define NODEMCU_32S
//#define DOIT_ESP32_DEVKIT

// ======================================================
// 5. ESP32 Variants
// ======================================================
//#define ESP32_S2_DEVKIT
#define ESP32_S3_DEVKIT
//#define ESP32_C3_DEVKIT
//#define ESP32_C6_DEVKIT
//#define ESP32_H2_DEVKIT

// ======================================================
// 6. Raspberry Pi Pico
// ======================================================
//#define RPI_PICO
//#define RPI_PICO_W
//#define RPI_PICO_2
//#define RPI_PICO_2_W

// third-party RP2040
//#define ADAFRUIT_FEATHER_RP2040
//#define SEEED_XIAO_RP2040
//#define SPARKFUN_PRO_MICRO_RP2040

// ======================================================
// 7. STM32 Blue/Black Pill
// ======================================================
//#define STM32_BLUE_PILL
//#define STM32_BLACK_PILL_F401
//#define STM32_BLACK_PILL_F411

// ======================================================
// 8. STM32 Nucleo
// ======================================================
//#define NUCLEO_F103RB
//#define NUCLEO_F401RE
//#define NUCLEO_L432KC

// ======================================================
// 9. STM32 Discovery
// ======================================================
//#define STM32F4_DISCOVERY
//#define STM32L4_DISCOVERY


#include <Blink.h>

Blink led;

void setup() {
  led.begin();
}

void loop() {
  led.blink(500,500);   // blink(on_time_ms, off_time_ms)
}
