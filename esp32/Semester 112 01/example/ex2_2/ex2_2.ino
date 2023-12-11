const byte LED[] = {4, 0, 2, 15};

void setup() {
    for (int i = 0; i <= 3 ; i++){
        pinMode(LED[i], OUTPUT);
    }
}

void loop() {
    for (int i = 0; i <= 3; i++) {
        digitalWrite(LED[i], HIGH);
        delay(300);
        digitalWrite(LED[i], LOW);
    }
    for (int i = 2; i >= 1; i--) {
        digitalWrite(LED[i], HIGH);
        delay(300);
        digitalWrite(LED[i], LOW);
    }
}