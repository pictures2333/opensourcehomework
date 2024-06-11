#include <Adafruit_NeoPixel.h>

#define PIN 32
#define NUMPIXELS 8

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
    pixels.begin();
}

void loop() {
    pixels.clear();
    pixels.setBrightness(10);

    for (int i = 0; i < NUMPIXELS; i++) {
        pixels.setPixelColor(i, pixels.Color(0, 0, 255));
        pixels.show();
        delay(500);
    }
}