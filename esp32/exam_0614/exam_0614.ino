// 函式庫
#include <Keypad.h>

// 外接LED > 腳位定義
#define LEDPIN 4

// 外接按鈕 > 腳位定義
#define BTNPIN01 34 // 01
#define BTNPIN02 36 // 02

// 蜂鳴器 > 變數、腳位定義
#define BEEP 2
const byte channel = 0;

// 矩陣鍵盤
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'E', '0', 'F', 'D'}
};
byte rowPins[ROWS] = {21, 19, 18,  5};
byte colPins[COLS] = {17, 16, 32, 33};
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
int key = 0;

// 七段顯示器
const byte _7SegPin[8] = {25, 26, 27, 14, 12, 13, 23, 15};
const byte _7SegCode[10] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};
// 是不是共陽極七段顯示器
#define ISSUNOFBEACH 1

// main
void setup() {
    Serial.begin(115200);

    pinMode(LEDPIN, OUTPUT);
    pinMode(BTNPIN01, INPUT);
    pinMode(BTNPIN02, INPUT);

    // 七段顯示器初始化
    for (int i = 0; i < 8; i++) pinMode(_7SegPin[i], OUTPUT);

    // 蜂鳴器初始化
    ledcSetup(channel, 10000, 8);
    ledcAttachPin(BEEP, channel);

    // 一送電，外接LED亮
    digitalWrite(LEDPIN, 1);
}

void blank(long sec) {
#if (ISSUNOFBEACH == 1)
    for (int i = 0; i < 8; i++) digitalWrite(_7SegPin[i], 1);
#else
    for (int i = 0; i < 8; i++) digitalWrite(_7SegPin[i], 0);
#endif
    delay(sec);
}

void loop() {
    // 外接按鈕一
    if (digitalRead(BTNPIN01) == 0) {
        // 按鍵彈跳處理
        delay(20);
        if (digitalRead(BTNPIN01) == 0) {
            while (digitalRead(BTNPIN01) == 0);
            // 主程式
            digitalWrite(LEDPIN, 0); // LED滅
            // (暫滅)
            blank(500);
            // 七段作上數一次
            for (int cnt = 0; cnt < 10; cnt++) {
#if (ISSUNOFBEACH == 1)
                for (int seg = 0; seg < 8; seg++) digitalWrite(_7SegPin[seg], !((_7SegCode[cnt] >> seg)&0x01));
#else
                for (int seg = 0; seg < 8; seg++) digitalWrite(_7SegPin[seg], ((_7SegCode[cnt] >> seg)&0x01));
#endif
                delay(500);
            }
            // (暫滅)
            blank(500);
            digitalWrite(LEDPIN, 1); // LED亮
        }
    }
    // 外接按鈕二
    else if (digitalRead(BTNPIN02) == 0) {
        // 按鍵彈跳處理
        delay(20);
        if (digitalRead(BTNPIN02) == 0) {
            while (digitalRead(BTNPIN02) == 0);
            // 主程式
            digitalWrite(LEDPIN, 0); // LED滅
            // BZ交替響兩次
            for (int i = 0; i < 2; i++) {
                ledcWriteTone(channel, 400);
                delay(1000); // 且間隔一秒
                ledcWriteTone(channel, 800);
                delay(1000); // 且間隔一秒
            }
            // 關掉蜂鳴器
            ledcWriteTone(channel, 0);
            digitalWrite(LEDPIN, 1); // LED亮
        }
    }

    // 鍵盤3*3按鈕對應數字
    char nk = keypad.getKey();
    if (nk) {
        if ('0' <= nk && nk <= '9') key = nk - '0';
        // Serial.println(key);
    }
#if (ISSUNOFBEACH == 1)
    for (int seg = 0; seg < 8; seg++) digitalWrite(_7SegPin[seg], !((_7SegCode[key] >> seg)&0x01));
#else
    for (int seg = 0; seg < 8; seg++) digitalWrite(_7SegPin[seg], ((_7SegCode[key] >> seg)&0x01));
#endif
}