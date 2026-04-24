#include "basis.hpp"

Led led1(LED1_PIN);

void setup() {
	Serial.begin(115200);
	delay(500);  																									// Warte auf Serial-Monitor
	Serial.println("\nDouble gestartet.\n");
  led1.init();
}

void loop() {
  led1.update();
}
