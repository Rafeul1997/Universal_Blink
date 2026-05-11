#include "Blink.h"
#include "board_pins.h"

bool ledState = LOW;
unsigned long previousMillis = 0;

void Blink::begin() {
  pinMode(BLINK_LED_PIN, OUTPUT);
}

void Blink::on() {
  digitalWrite(BLINK_LED_PIN, HIGH);
}

void Blink::off() {
  digitalWrite(BLINK_LED_PIN, LOW);
}

void Blink::toggle() {
  ledState = !ledState;
  digitalWrite(BLINK_LED_PIN, ledState);
}

void Blink::blink(int onTime, int offTime) {
  digitalWrite(BLINK_LED_PIN, HIGH);
  delay(onTime);

  digitalWrite(BLINK_LED_PIN, LOW);
  delay(offTime);
}

void Blink::nonBlocking(unsigned long interval) {
  if (millis() - previousMillis >= interval) {
    previousMillis = millis();
    toggle();
  }
}

void Blink::sos() {
  for(int i=0;i<3;i++) blink(200,200);
  for(int i=0;i<3;i++) blink(600,200);
  for(int i=0;i<3;i++) blink(200,200);
  delay(1000);
}

void Blink::fade() {
  for(int i=0;i<255;i++){
    analogWrite(BLINK_LED_PIN,i);
    delay(5);
  }

  for(int i=255;i>0;i--){
    analogWrite(BLINK_LED_PIN,i);
    delay(5);
  }
}
