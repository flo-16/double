// basis.hpp

#pragma once                                                          // nur einmalige Einbindung der Headerdatei
#include "global.h"

class Led {
  private:
    const uint8_t pin;
    status_t status;
  public:
    Led(const uint8_t ledPin) : pin(ledPin), status(OFF) {}           // Der Konstruktor mit Initialisierungsliste
    void init();                                                      // ; weil Funktion folgt (Vorwärtsdeklaration)
    void update();
    void ledON() { status = ON; }                                     // (Inlinedeklaration)
    void ledOFF() { status = OFF; }
    void ledSwitch() { status = (status == ON) ? OFF : ON; }
};

void Led::init() {
  pinMode(pin, OUTPUT);
  digitalWrite(pin, status);
}

void Led::update() {
  static status_t ledstate = OFF;                                     // beim verlassen der Funktion bleibt der Wert erhalten
  if (ledstate != status) {
    digitalWrite(pin, (status == ON) ? HIGH : LOW);
    ledstate = status;
  }
}