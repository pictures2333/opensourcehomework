int count = 0;
const byte LEDPin = 4, input = 36;
bool light = false;

void setup() {
    pinMode(input, INPUT);
    pinMode(LEDPin, OUTPUT);
}

void loop() {
    if (digitalRead(input) == false) {
        delay(20);
        if (digitalRead(input) == false) {
            while (digitalRead(input) == false);
            count = count + 1;
            if (count % 2 == 0) {
                light = !light;
            }
        }
    }
    digitalWrite(LEDPin, light);
}