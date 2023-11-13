#include <ESP8266WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(100);

  // Mulai WiFi (walaupun tidak terhubung ke jaringan)
  WiFi.mode(WIFI_OFF);
  delay(1000);
  WiFi.mode(WIFI_STA);

  // Dapatkan MAC address dan cetak ke Serial Monitor
  uint8_t mac[6];
  WiFi.macAddress(mac);

  Serial.print("MAC Address: ");
  for (int i = 0; i < 6; i++) {
    Serial.print(mac[i], HEX);
    if (i < 5) Serial.print(":");
  }
  Serial.println();
}

void loop() {
  // Kode lainnya dapat ditambahkan di sini
}
