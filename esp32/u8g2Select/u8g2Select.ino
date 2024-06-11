#include <U8g2lib.h>
#include <Wire.h>

U8G2_SSD1306_128X64_NONAME_1_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);

const int maxOptions = 10;
const char* options[maxOptions] = {"LEDD1", "LEDD2", "LEDD3", "LEDD4", "?", "FBK!!", "The cutest Fox", "===== KEYBIND =====", "<G39>-Up <G35>-Down", "<G36>-On <G34>-Off"};
const byte inpt[4] = {34, 35, 36, 39};
const byte oupt[4] = {4, 0, 2, 15};
byte ouptStatus[4] = {0, 0, 0, 0};
int selection = 0;

void setup() {
    Serial.begin(115200);
    u8g2.begin();
    for (int i = 0; i < 4; i++) {
        pinMode(inpt[i], INPUT);
        pinMode(oupt[i], OUTPUT);
        digitalWrite(oupt[i], 0);
    }
}

void loop() {
    u8g2.firstPage();
    u8g2.setFont(u8g2_font_6x13_tr);
    do {
        u8g2.setFontMode(1);
        u8g2.setDrawColor(1);
        u8g2.drawStr(0, 9, "Select Test");

        char buffer[16] = "(";
        char buffer2[8] = {0};
        itoa(selection+1, buffer2, 10);
        strcat(buffer, buffer2);
        strcat(buffer, "/");
        itoa(maxOptions, buffer2, 10);
        strcat(buffer, buffer2);
        strcat(buffer, ")");
        u8g2.drawStr(80, 9, buffer);

        int start=0, end=4;
        if (selection>3) end = selection+1, start = selection-3;
        for (int i = start; i < end; i++) {
            if (selection == i) {
                u8g2.setFontMode(1);
                u8g2.setDrawColor(1);
                u8g2.drawBox(0, 20+12*(i-start-1)+2, 127, 11);
                u8g2.setDrawColor(0);
                if (ouptStatus[selection] == 1 && selection <= 3) {
                    u8g2.drawStr(80, 20+12*(i-start), "ON");
                }
                else if (ouptStatus[selection] == 0 && selection <= 3) {
                    u8g2.drawStr(80, 20+12*(i-start), "OFF");
                }
            } else {
                u8g2.setDrawColor(1);
            }
            u8g2.drawStr(5, 20+12*(i-start), options[i]);
        }
    } while (u8g2.nextPage());

    if (digitalRead(39) == 0) {
        delay(20);
        if (digitalRead(39) == 0) {
            while (digitalRead(39) == 0);
            if (selection > 0) selection--;
            else selection = maxOptions-1;
        }
    } else if (digitalRead(35) == 0) {
        delay(20);
        if (digitalRead(35) == 0) {
            while (digitalRead(35) == 0);
            if (selection < maxOptions-1) selection++;
            else selection = 0;
        }
    } else if (digitalRead(36) == 0  && selection <= 3) {
        delay(20);
        if (digitalRead(36) == 0) {
            while (digitalRead(36) == 0);
            ouptStatus[selection] = 1;
        }
    } else if (digitalRead(34) == 0  && selection <= 3) {
        delay(20);
        if (digitalRead(34) == 0) {
            while (digitalRead(34) == 0);
            ouptStatus[selection] = 0;
        }
    }

    for (int i = 0; i < 4; i++) digitalWrite(oupt[i], ouptStatus[i]);
}