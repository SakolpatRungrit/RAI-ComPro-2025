#include "HardwareSerial.h"
#include "pins_arduino.h"
#include <Arduino.h>
int Brightness = 0;
void setup() {
    Serial.begin(9600);
    pinMode(11, OUTPUT);
    pinMode(A0, INPUT);
}
void loop() {
    int PotentIn = analogRead(A0);
    int Brightness = PotentIn / 4;
    analogWrite(11, Brightness);
}
