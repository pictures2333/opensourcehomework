void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println(touchRead(T5));
    delay(100);
}