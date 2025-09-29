#include "HardwareSerial.h"
#include "pins_arduino.h"
#include <Arduino.h>

int LED_PINS[] = {11, 10, 9, 8};
void setup() {
    Serial.begin(9600);
    pinMode(A0, INPUT);
    for (int i = 0; i < 4; i++) {
        pinMode(LED_PINS[i], OUTPUT);
    }
}
void loop() {
    int potentVal = analogRead(A0);
    for (int i = 0; i < 4; i++) {
        digitalWrite(LED_PINS[i], LOW);
    }
    if (potentVal <= 256) {
        digitalWrite(LED_PINS[0], HIGH);

    } else if (potentVal <= 512) {
        digitalWrite(LED_PINS[1], HIGH);
        digitalWrite(LED_PINS[0], HIGH);
    } else if (potentVal <= 768) {
        digitalWrite(LED_PINS[2], HIGH);
        digitalWrite(LED_PINS[0], HIGH);
        digitalWrite(LED_PINS[1], HIGH);
    } else {
        digitalWrite(LED_PINS[0], HIGH);
        digitalWrite(LED_PINS[1], HIGH);
        digitalWrite(LED_PINS[2], HIGH);
        digitalWrite(LED_PINS[3], HIGH);
    }
}
