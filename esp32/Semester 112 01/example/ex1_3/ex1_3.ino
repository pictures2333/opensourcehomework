const byte LEDPin = 4;
char data;

void setup() {
    pinMode(LEDPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    if (Serial.available()) {
        data = Serial.read();
        if (data == '1') {
            Serial.println("點亮LED");
            digitalWrite(LEDPin, HIGH);
        } else if (data == '0') {
            Serial.println("熄滅LED");
            digitalWrite(LEDPin, LOW);
        }
    }
}