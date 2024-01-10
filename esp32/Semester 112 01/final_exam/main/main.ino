void setup() {
    // 輸出端口
    byte outputPins[4] = {4, 0, 2, 15};
    // 初始化: 設定PinMode
    for (int i = 0;i<4;i++) pinMode(outputPins[i], OUTPUT);
    // 輸入端口
    byte inputPins[4] = {34, 35, 36, 39};
    // 初始化: 設定PinMode
    for (int i = 0;i<4;i++) pinMode(inputPins[i], INPUT);
    // 開啟序列埠傳輸，鮑率為115200
    Serial.begin(115200); 
}

// 儲存功能三的燈泡開關狀態
bool tf = false; 
void loop() {
    // 功能一
    if (digitalRead(36) == 0) {
        // 消除開關彈跳
        delay(20);
        if (digitalRead(36) == 0) {
            while (digitalRead(36) == 0);
            // 定義輸出端口
            byte pins[4] = {4, 0, 2, 15}; 
            // 以迴圈把燈泡從左邊到右邊輪流點亮
            for (int i = 0; i < 4;i++) {
                // 先讓燈泡全暗
                for (int j = 0;j<4;j++) digitalWrite(pins[j], 0);
                // 再讓單個燈泡亮起
                digitalWrite(pins[i], 1);
                // 延遲300ms
                delay(300);
            }
            // 以迴圈把燈泡從右邊到左邊輪流點亮
            for (int i = 2; i >= 0;i--) {
                // 先讓燈泡全暗
                for (int j = 0;j<4;j++) digitalWrite(pins[j], 0); 
                // 再讓單個燈泡亮起
                digitalWrite(pins[i], 1);
                // 延遲300ms
                delay(300); 
            }
            // 把最後一個單亮的的燈泡熄滅
            digitalWrite(4, 0); 
        }
    }
    // 功能三
    else if (digitalRead(34) == 0) {
        // 消除開關彈跳
        delay(20);
        if (digitalRead(34) == 0) {
            while (digitalRead(34) == 0);
            // 反轉燈泡開關狀態
            tf = !tf; 
            // 如果反轉後的燈泡開關狀態為true，就開燈
            if (tf) { 
                Serial.println(1);
                digitalWrite(4, 1);
            }
            // 否則(如果反轉後的燈泡開關狀態為false)，關燈
            else { 
                Serial.println(0);
                digitalWrite(4, 0);
            }
        }
    }
    // 功能四
    else if (digitalRead(35) == 0) {
        // 消除開關彈跳
        delay(20);
        if (digitalRead(35) == 0) {
            while (digitalRead(35) == 0);
            
            // 單燈右移
            byte pins[4] = {4, 0, 2, 15};
            for (int i = 0; i < 4;i++) {
                for (int j = 0;j<4;j++) digitalWrite(pins[j], 0);
                digitalWrite(pins[i], 1);
                delay(300);
            }
            digitalWrite(15, LOW);
            delay(100);
            // 全部電燈一起閃爍三次
            for (int i = 0; i < 3;i++) {
                for (int j = 0;j<4;j++) digitalWrite(pins[j], 1);
                delay(300);
                for (int j = 0;j<4;j++) digitalWrite(pins[j], 0);
                delay(300);
            }
            // 單燈左移
            for (int i = 3; i >= 0;i--) {
                for (int j = 0;j<4;j++) digitalWrite(pins[j], 0);
                digitalWrite(pins[i], 1);
                delay(300);
            }
            digitalWrite(4, LOW);
            delay(100);
            // 腳位0、15同時閃爍兩次
            for (int i = 0; i < 2;i++){
                digitalWrite(0, HIGH);
                digitalWrite(15, HIGH);
                delay(300);
                digitalWrite(0, LOW);
                digitalWrite(15, LOW);
                delay(300);
            }
        }
    }
    // 功能二
    // 如果按鈕持續被按下(腳位39的電位都是在低電位)
    else if (digitalRead(39) == 0) { 
        digitalWrite(15, 1); // 點亮電燈
    }
    // 如果按鈕沒有持續被按下(腳位39的電位都是在高電位)
    else if (digitalRead(39) == 1) { 
        digitalWrite(15, 0); // 熄滅電燈
    }
    // 此功能的判斷式需要放在後面，因為如果按鈕沒有被按下，腳位39就會是高電位
    // 就會符合條件(digitalRead(39) == 1)而進入判斷式，而導致後面的按鈕偵測失效，不能觸發對應功能
}