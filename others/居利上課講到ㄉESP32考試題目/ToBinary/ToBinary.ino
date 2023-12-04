void setup() {
  pinMode(4, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(15, OUTPUT);

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

  digitalWrite(15, numlist[0]);
  digitalWrite(2, numlist[1]);
  digitalWrite(0, numlist[2]);
  digitalWrite(4, numlist[3]);
}
