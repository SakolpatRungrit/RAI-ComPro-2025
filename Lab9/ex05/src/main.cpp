#include "HardwareSerial.h"
#include <Arduino.h>

int LED_PINS[] = {7, 6, 5, 4, 3};

void setup() {
    Serial.begin(9600);

    for (int i = 0; i < 5; i++) {
        pinMode(LED_PINS[i], OUTPUT);
    }
}

void loop() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            digitalWrite(LED_PINS[j], LOW);
        }
        digitalWrite(LED_PINS[i], HIGH);

        delay(500);
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            digitalWrite(LED_PINS[j], LOW);
        }
        digitalWrite(LED_PINS[5 - i - 1], HIGH);

        delay(500);
    }
}
