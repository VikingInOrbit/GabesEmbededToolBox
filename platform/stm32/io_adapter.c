#ifdef ARDUINO_PLATFORM
#include "platform/arduino/platform_adapter_arduino.cpp"
#endif

#include "platform_adapter.h"
#include "stm32f4xx_hal.h" // or your STM32 HAL header

void Platform_init(void) {
    // Initialize UART, GPIO, etc.
}

void dWrite(uint8_t pin, uint8_t value) {
    HAL_GPIO_WritePin(GPIOA, pin, value ? GPIO_PIN_SET : GPIO_PIN_RESET);
}

uint8_t dRead(uint8_t pin) {
    return HAL_GPIO_ReadPin(GPIOA, pin);
}

void delayMs(uint32_t ms) {
    HAL_Delay(ms);
}

uint32_t millisMs(void) {
    return HAL_GetTick();
}

void serialWrite(const char* msg) {
    // implement via UART, printf, or ITM
}
