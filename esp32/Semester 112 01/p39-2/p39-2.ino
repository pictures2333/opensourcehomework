void setup() {
  pinMode(4, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(15, OUTPUT);
}

byte pins[] = {4, 0, 2, 15};
void loop() {
  // light 1=>3 scan
  for (int i=0;i<3;i++){
    for (int j=0;i<3;i++){digitalWrite(pins[j], LOW);}
    digitalWrite(pins[i], HIGH);
    delay(500);
  }
  // flash
  for (int i=0; i<3; i++){
    for (int j=0;i<4;i++){digitalWrite(pins[j], HIGH);}
    delay(100);
    for (int j=0;i<4;i++){digitalWrite(pins[j], LOW);}
    delay(100);
  }
  // light 3=>1 scan
  for (int i=2;i<=0;i--){
    for (int j=0;i<3;i++){digitalWrite(pins[j], LOW);}
    digitalWrite(pins[i], HIGH);
    delay(500);
  }
  // flash
  for (int i=0; i<3; i++){
    for (int j=0;i<4;i++){digitalWrite(pins[j], HIGH);}
    delay(100);
    for (int j=0;i<4;i++){digitalWrite(pins[j], LOW);}
    delay(100);
  }
}
