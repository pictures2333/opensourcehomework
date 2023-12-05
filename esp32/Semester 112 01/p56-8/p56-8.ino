void setup() {
  pinMode(25, INPUT);
  pinMode(26, OUTPUT);
  Serial.begin(9600);
}

double inputVal;
int outputVal;

void loop() {
  inputVal = analogRead(25);

  outputVal = inputVal / 16;

  
  analogWrite(26, outputVal);

  Serial.print("輸出數值: ");
  Serial.print(outputVal);
  Serial.print(" | 輸入數值: ");
  Serial.println(inputVal);

  delay(10);
}