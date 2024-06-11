#include <U8g2lib.h>
#include <Wire.h>
U8G2_SSD1306_128X64_NONAME_1_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);

void setup() {
    u8g2.begin();
}

void loop() {
    u8g2.setFont(u8g2_font_10x20_mf);
    u8g2.firstPage();
    do {
        u8g2.setCursor(0, 22);
        u8g2.print("Hello World!");
    } while (u8g2.nextPage());
}