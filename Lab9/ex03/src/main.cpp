#include "HardwareSerial.h"
#include <Arduino.h>

void setup() {
    Serial.begin(9600);
    pinMode(11, OUTPUT);
}
void loop() {
    digitalWrite(11, HIGH);
    delay(1000);
    digitalWrite(11, LOW);
    delay(1000);
}
