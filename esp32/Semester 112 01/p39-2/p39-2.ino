void setup() {
  pinMode(4, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(15, OUTPUT);
}

void loop() {
  digitalWrite(4, HIGH);
  digitalWrite(0, LOW);
  digitalWrite(2, LOW);
  delay(500);
  digitalWrite(4, LOW);
  digitalWrite(0, HIGH);
  digitalWrite(2, LOW);
  delay(500);
  digitalWrite(4, LOW);
  digitalWrite(0, LOW);
  digitalWrite(2, HIGH);
  delay(500);
  for (int i=0; i<3; i++){
    digitalWrite(4, HIGH);
    digitalWrite(0, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(15, HIGH);
    delay(50);
    digitalWrite(4, LOW);
    digitalWrite(0, LOW);
    digitalWrite(2, LOW);
    digitalWrite(15, LOW);
    delay(50);
  }
  digitalWrite(4, LOW);
  digitalWrite(0, LOW);
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  digitalWrite(0, HIGH);
  digitalWrite(2, LOW);
  delay(500);
  digitalWrite(4, HIGH);
  digitalWrite(0, LOW);
  digitalWrite(2, LOW);
  delay(500);
  for (int i=0; i<3; i++){
    digitalWrite(4, HIGH);
    digitalWrite(0, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(15, HIGH);
    delay(50);
    digitalWrite(4, LOW);
    digitalWrite(0, LOW);
    digitalWrite(2, LOW);
    digitalWrite(15, LOW);
    delay(50);
  }
}
