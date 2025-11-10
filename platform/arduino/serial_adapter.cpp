#include <Arduino.h>
#include "platform_adapter.h"

void serialStart(unsigned long baud) { Serial.begin(baud); }
void serialStop() { Serial.end(); }
//bool serialTest() { if(Serial){return true;} } //is started bool
void serialWrite(const char* msg) { Serial.print(msg); }
void serialRead(const char* msg) { Serial.read(); }
