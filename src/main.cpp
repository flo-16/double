#include "basis.hpp"

sensorData_t sensorData = {
	.messung = 0,
	.sensoren = 0,
	.sensor = { 19, 28, 35, 41, 0, 0, 0, 0 }
};

Led led1(LED1_PIN);
SensorManager sensorManager(sensorData);

void setup() {
	Serial.begin(115200);
	delay(500);  																									// Warte auf Serial-Monitor
	Serial.println("\nDouble gestartet.\n");
  led1.init();
}

void loop() {
  led1.update();
	sensorManager.update();
}
