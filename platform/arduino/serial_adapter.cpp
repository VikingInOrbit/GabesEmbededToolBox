#include <Arduino.h>
#include "platform_adapter.h"

void serialStart(unsigned long baud) { Serial.begin(baud); }
void serialStop() { Serial.end(); }
void serialWrite(const char* msg) { Serial.print(msg); }
