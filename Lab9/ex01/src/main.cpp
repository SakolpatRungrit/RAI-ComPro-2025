#include "HardwareSerial.h"
#include <Arduino.h>
void setup() {
    Serial.begin(9600);
    pinMode(A0, INPUT);
}
void loop() {
    int potenval = analogRead(A0);
    Serial.print("Value:");
    Serial.println(potenval);

    delay(100);
}
