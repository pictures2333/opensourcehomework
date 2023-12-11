const byte LEDPin = 4;
int sum = 0;
int average = 0;

void setup() {
    pinMode(LEDPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    for (int i = 1; i <= 20; i++){
        sum = sum + touchRead(T5);
    }
    average = sum / 20;
    sum = 0;
    Serial.println(average);
    if (average > 30) {
        digitalWrite(LEDPin, HIGH);
    } 
    else {
        digitalWrite(LEDPin, LOW);
    }
}