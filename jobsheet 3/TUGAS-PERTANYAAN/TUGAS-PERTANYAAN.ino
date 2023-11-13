#include <WiFi.h>
#include <EEPROM.h>

const char* ssid = "wifi_kampus"; // Nama SSID yang akan digunakan
const char* password = "12345678."; // Password SSID yang akan digunakan

const char* ap_ssid = "ESP32-Config"; // Nama SSID saat ESP32 berada di mode Access Point
const char* ap_password = ""; // Password AP, biarkan kosong jika tidak ingin ada password

bool shouldSaveConfig = false;


void initWiFi() {
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi ..");
  if (WiFi.status() != WL_CONNECTED) {
    Serial.println("Failed to connect to WiFi. Starting Access Point mode.");
    configureAPMode();
    Serial.println("Connection failed. Check SSID and password.");
  } else {

    Serial.println("Connected to WiFi successfully");
    Serial.println(WiFi.localIP());
  }

}
void setup() {
  Serial.begin(115200);
  initWiFi();
  // Membaca SSID dan Password dari EEPROM
  EEPROM.begin(512);
  readConfig();

}

void loop() {
  // Tambahkan kode lain yang diperlukan di sini
}

void configureAPMode() {
  Serial.println("Configuring Access Point mode...");

  WiFi.mode(WIFI_AP);
  WiFi.softAP(ap_ssid, ap_password);
  IPAddress myIP = WiFi.softAPIP();
  Serial.print("Access Point IP address: ");
  Serial.println(myIP);

  // Buat server web untuk konfigurasi
  // Implementasikan server web Anda di sini

  // Loop sampai konfigurasi disimpan
  while (!shouldSaveConfig) {
    // Tambahkan kode lain yang diperlukan di sini
  }

  // Simpan konfigurasi ke EEPROM
  saveConfig();
  delay(1000);

  // Matikan ESP32
  ESP.deepSleep(0);
}

void readConfig() {
  EEPROM.get(0, ssid);
  EEPROM.get(32, password);
}

void saveConfig() {
  EEPROM.put(0, ssid);
  EEPROM.put(32, password);
  EEPROM.commit();
  shouldSaveConfig = false;
}
