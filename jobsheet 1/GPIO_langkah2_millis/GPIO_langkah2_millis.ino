const int ledPin = 2;     // GPIO pin yang akan digunakan untuk LED
unsigned long previousMillis = 0;  // Waktu terakhir LED dinyalakan
const long interval = 1000;  // Interval 1 detik

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  // Cek apakah sudah waktunya mengganti status LED
  if (currentMillis - previousMillis >= interval) {
    // Simpan waktu terakhir LED dinyalakan
    previousMillis = currentMillis;

    // Balikkan status LED
    if (digitalRead(ledPin) == LOW) {
      digitalWrite(ledPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
    }
  }
}
