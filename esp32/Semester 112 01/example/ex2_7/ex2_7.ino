const byte anaPin = 25;
short val;
float voltage;

void setup() {
    Serial.begin(9600);
    pinMode(anaPin, INPUT);
}

void loop() {
    val = analogRead(anaPin);
    voltage = 3.3 * val / 4095;
    Serial.print(voltage, 3);
    Serial.println("V");
    delay(100);
}