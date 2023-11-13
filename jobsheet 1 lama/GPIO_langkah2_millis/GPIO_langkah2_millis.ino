// AISYAH NURUL AINI (4.31.21.0.03)
// BRIAN RAHMADITYA (4.31.21.0.09)
// SABRINA VIRRY TALITHA MEIRILLA (4.31.21.0.23)

const int ledPin = 2;     // GPIO pin yang akan digunakan untuk LED
unsigned long previousMillis = 0;  // Waktu terakhir LED dinyalakan
const long interval = 1000;  // Interval 1 detik

void setup() {
  pinMode(ledPin, OUTPUT); // Menginisialisasi LED sebagai Output
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
