#include <WiFi.h>
#include <time.h>

const char *ssid = "基地台的SSID";
const char *password = "基地台的密碼";

const char *ntpServer = "pool.ntp.org";
const long gmtOffset_sec = 28800;
const int daylightOffset_sec = 0;

void setup() {
    Serial.begin(9600);
    Serial.printf("連線到 %s", ssid);
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("已連線");
    configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
}

void loop() {
    struct tm timeinfo;
    if (!getLocalTime(&timeinfo)) {
        Serial.println("網路時間取回失敗");
    } else {
        Serial.println(&timeinfo, "%F %T");
    }
    delay(1000);
}