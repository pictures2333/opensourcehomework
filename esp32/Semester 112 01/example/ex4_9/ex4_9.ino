const byte channel = 0;

void setup() {
    ledcSetup(channel, 10000, 8);
    ledcAttachPin(25, channel);

    int octave = 4;
    ledcWriteNote(channel, NOTE_C, octave);
    delay(200);
    ledcWriteNote(channel, NOTE_D, octave);
    delay(200);
    ledcWriteNote(channel, NOTE_E, octave);
    delay(200);
    ledcWriteNote(channel, NOTE_F, octave);
    delay(200);
    ledcWriteNote(channel, NOTE_G, octave);
    delay(200);
    ledcWriteTone(channel, 0);
}

void loop() {
    
}