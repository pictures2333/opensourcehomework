#include "MovingAverage.h"
MovingAverage <uint8_t, 16> filter;

const byte LEDPin = 4;

void setup() {
    pinMode(LEDPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    filter.add(touchRead(T5));
    Serial.println(filter.get());

    if (filter.get() > 45) {
        digitalWrite(LEDPin, HIGH);
    }
    else {
        digitalWrite(LEDPin, LOW);
    }
}