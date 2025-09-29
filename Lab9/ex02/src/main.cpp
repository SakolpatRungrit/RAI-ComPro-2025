#include "HardwareSerial.h"
#include <Arduino.h>
int FadeAmout = 5;
int Brightness = 0;
void setup() {
    Serial.begin(9600);
    pinMode(11, OUTPUT);
}
void loop() {

    analogWrite(11, Brightness);
    Brightness = Brightness + FadeAmout;
    if (Brightness >= 255 || Brightness <= 0) {
        FadeAmout = -FadeAmout;
    }
    delay(30);
}
