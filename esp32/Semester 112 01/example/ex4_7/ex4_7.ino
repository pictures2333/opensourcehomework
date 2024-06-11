const byte channel = 0;

void setup() {
    ledcSetup(channel, 10000, 8);
    ledcAttachPin(25, channel);

    for (int i = 1; i <= 3; i++) {
        ledcWriteTone(channel, 800);
        delay(500);
        ledcWriteTone(channel, 0);
        delay(500);
    }
}

void loop() {
    
}