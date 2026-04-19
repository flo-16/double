#include "basis.hpp"

Led led1(LEDPIN);

void setup() {
  led1.init();
}

void loop() {
  led1.update();
}
