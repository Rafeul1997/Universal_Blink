#ifndef BLINK_H
#define BLINK_H

#include <Arduino.h>

class Blink {
  public:
    void begin();
    void on();
    void off();
    void toggle();

    void blink(int onTime, int offTime);
    void nonBlocking(unsigned long interval);
    void sos();
    void fade();
};

#endif
