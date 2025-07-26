#include <WiFi.h>        // For ESP32 (ESP8266: #include <ESP8266WiFi.h>)
#include <ArduinoOTA.h>  // OTA library
#include <arduino_secret.h>
const char* ssid = SECRET_SSID;
const char* password = SECRET_PASS;

void initialize() {
  WiFi.begin(ssid, password);
  ArduinoOTA.begin();
}
