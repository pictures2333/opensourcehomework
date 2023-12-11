const byte anaPin = 25;
short val;

void setup() {
    Serial.begin(9600);
    pinMode(anaPin, INPUT);
}

void loop() {
    val = analogRead(anaPin);
    Serial.println(val);
    delay(100);
}