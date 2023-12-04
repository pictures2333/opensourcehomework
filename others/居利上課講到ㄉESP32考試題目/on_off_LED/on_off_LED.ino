void setup() {
  Serial.begin(9600);
  pinMode(15, OUTPUT);
  pinMode(0, OUTPUT);
}

String data;

void loop() {
  if (Serial.available()){
    data = Serial.readString();
    if (data.startsWith("on") && data.length() == 3) {
      digitalWrite(15, HIGH);
    } else if (data.startsWith("off") && data.length() == 4) {
      digitalWrite(15, LOW);
    }
  }
}
