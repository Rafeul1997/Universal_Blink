# Blink

![Version](https://img.shields.io/badge/version-1.0.0-blue.svg) ![License](https://img.shields.io/badge/license-MIT-green.svg) ![Platform](https://img.shields.io/badge/platform-Arduino-orange.svg) ![Boards](https://img.shields.io/badge/boards-40%2B-brightgreen.svg)

Blink library.

No need to manually set built-in LED pin.
Just select your board and upload.

Supports:

# 1. Boards  ![Boards](https://img.shields.io/badge/40%2B-brightgreen.svg)

## Classic AVR
- Arduino Uno R3
- Arduino Nano
- Arduino Mega 2560
- Arduino Leonardo
- Arduino Micro
- Arduino Pro Mini
- Arduino Mini

## Modern Arduino
- Arduino Uno R4 Minima
- Arduino Uno R4 WiFi
- Arduino Nano Every
- Arduino Nano 33 IoT
- Arduino Nano 33 BLE
- Arduino Due


# 2. ESP8266
- NodeMCU ESP8266
- Wemos D1 Mini
- ESP-01
- ESP-12E
- Adafruit HUZZAH ESP8266


# 3. ESP32

## ESP32 Classic
- ESP32 DevKit V1
- NodeMCU-32S
- DOIT ESP32 DevKit

## ESP32 Variants
- ESP32-S2 DevKit
- ESP32-S3 DevKit
- ESP32-C3 DevKit
- ESP32-C6 DevKit
- ESP32-H2 DevKit


# 4. Raspberry Pi Pico
- Raspberry Pi Pico
- Raspberry Pi Pico W
- Raspberry Pi Pico 2
- Raspberry Pi Pico 2 W

## Third-party RP2040
- Adafruit Feather RP2040
- Seeed XIAO RP2040
- SparkFun Pro Micro RP2040


# 5. STM32

## Blue Pill / Black Pill
- STM32F103C8T6 Blue Pill
- STM32F401 Black Pill
- STM32F411 Black Pill

## Nucleo
- NUCLEO-F103RB
- NUCLEO-F401RE
- NUCLEO-L432KC

## Discovery
- STM32F4 Discovery
- STM32L4 Discovery


# Features
- Basic Blink
- Non Blocking Blink
- SOS Blink
- Fade Blink


# Usage
1. Open any example
2. Uncomment your board
3. Upload


Example:

```cpp
#include <Blink.h>

Blink led;

void setup() {
  led.begin();
}

void loop() {
  led.blink(500,500);
}
