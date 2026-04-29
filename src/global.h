#pragma once 
#include <Arduino.h>

// Konstantendefinition 
#ifdef ENV_NANO
	static const uint8_t LED1_PIN = 12;                                            // Die Pins können je nach Board unterschiedlich sein
#elif defined(ENV_ESP32)
	static const uint8_t LED1_PIN = 13;
#elif defined(ENV_MEGA)
	static const uint8_t LED1_PIN = 14;
#else
	static const uint8_t LED1_PIN = 2;
#endif

// Typendefinition
typedef enum {
  OFF = 0,
  ON
} status_t;

// Klassenvorwärtsdeklaration
class  Led;
