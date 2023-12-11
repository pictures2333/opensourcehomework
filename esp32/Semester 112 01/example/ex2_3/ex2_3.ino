const byte LEDPin = 4;

void setup() {
    pinMode(36, INPUT);
    pinMode(LEDPin, OUTPUT);
}

void loop() {
    if (digitalRead(36) == false) {
        digitalWrite(LEDPin, HIGH);
    } else {
        digitalWrite(LEDPin, LOW);
    }
}