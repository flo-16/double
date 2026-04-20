#pragma once 
#include <Arduino.h>

// Konstantendefinition 
#ifdef ARDUINO_ARCH_AVR                                                 // Arduino Nano-spezifischer Code
  const uint8_t LEDPIN = 12;                                            // pin ersetzen
#elif defined(ARDUINO_ARCH_ESP32)                                       // ESP32-spezifischer Code
  const uint8_t LEDPIN = GPIO_NUM_11;                                   // pin ersetzen
#endif   

// Typendefinition
typedef enum {
  OFF = 0,
  ON
} status_t;