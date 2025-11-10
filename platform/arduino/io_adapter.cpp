#include <Arduino.h>
#include "platform_adapter.h"


void dWrite(uint8_t pin, uint8_t value) { digitalWrite(pin, value); }
uint8_t dRead(uint8_t pin) { return digitalRead(pin); }
void delayMs(uint32_t ms) { delay(ms); }
uint32_t millisMs(void) { return millis(); }

