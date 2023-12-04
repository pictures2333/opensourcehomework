byte pins[4] = {4, 0, 2, 15};
void setup() {
  for (int i=0;i<4;i++){
    pinMode(pins[i], OUTPUT);
  }

  pinMode(39, INPUT);

  Serial.begin(9600);
}

int n = 0;

void loop() {
  if (digitalRead(39) == false){
    delay(20);
    if (digitalRead(39) == false){
      while (digitalRead(39) == false);
      n++;

      Serial.println(n);
    }
  }

  int tn = n%16;
  int numlist[4] = {0, 0, 0, 0};
  int index = 0;
  while (true){
        numlist[index] = (tn%2);
        index++;
        if (tn/2 == 1){
          numlist[index] = 1;
          break;
        } else if (tn == 0){
          break;
        }
        tn = tn / 2;
  }

  for (int i=0;i<4;i++){
    digitalWrite(pins[3-i], numlist[i]);
  }
}
