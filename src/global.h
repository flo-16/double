#pragma once 
#include <Arduino.h>

// Konstantendefinition 
#include <Arduino.h>

#ifdef ENV_NANO
	const uint8_t LEDPIN = 12;                                            // pin ersetzen
#elif defined(ENV_ESP32)
	const uint8_t LEDPIN = 13;
#elif defined(ENV_MEGA)
	const uint8_t LEDPIN = 14;
#else
	const uint8_t LEDPIN = 2;
#endif




// Typendefinition
typedef enum {
  OFF = 0,
  ON
} status_t;
