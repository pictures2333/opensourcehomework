void setup() {
  pinMode(25, INPUT);
  pinMode(26, OUTPUT);
  Serial.begin(9600);
}

double inputVal; // 原始輸入數值
int outputVal; // 計算後輸出數值
// 輸入0~4095 ; 輸出0~255

// 輸入Pin25(DAC1) ; 輸出Pin26(DAC2)

void loop() {
  inputVal = analogRead(25);

  outputVal = inputVal / 16;

  
  analogWrite(26, outputVal);

  // 序列埠監控
  Serial.print("輸出數值: ");
  Serial.print(outputVal);
  Serial.print(" | 接收到的數值: ");
  Serial.println(inputVal);

  delay(10);
}
