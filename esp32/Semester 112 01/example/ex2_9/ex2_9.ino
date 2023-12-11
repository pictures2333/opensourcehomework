void setup() {

}

void loop() {
    for (int i = 0; i <= 50; i++) {
        analogWrite(2, i);
        delay(20);
    }
    for (int i = 50; i >= 0; i--) {
        analogWrite(2, i);
        delay(20);
    }
}