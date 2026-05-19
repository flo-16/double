#pragma once 
#include <Arduino.h>

// Konstantendefinition 
#ifdef ENV_NANO
	static const uint8_t LED1_PIN = PD3;                                            // Die Pins können je nach Board unterschiedlich sein
#elif defined(ENV_ESP32)
	static const uint8_t LED1_PIN = 13;
#elif defined(ENV_MEGA)
	static const uint8_t LED1_PIN = 22;
#else
	static const uint8_t LED1_PIN = 2;
#endif

const uint8_t MESSPOINTS = 8;

// Typendefinition
typedef enum {
  OFF = 0,
  ON
} status_t;

typedef struct {
  uint8_t messung;
  uint8_t sensoren;
  uint16_t sensor[MESSPOINTS];
} sensorData_t;

// Klassenvorwärtsdeklaration
class Led;
class SensorManager;
