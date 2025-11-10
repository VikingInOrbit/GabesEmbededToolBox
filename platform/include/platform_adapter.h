#ifndef PLATFORM_ADAPTER_H
#define PLATFORM_ADAPTER_H

#include <stdint.h>

// Must be called once at startup
void Platform_init(void);

// IO
void dWrite(uint8_t pin, uint8_t value);
uint8_t dRead(uint8_t pin);

// time
void delayMs(uint32_t ms);
uint32_t millisMs(void);

//seriel
void serialStart(unsigned long baud);
void serialStop();
void serialWrite(const char* msg);

#endif
