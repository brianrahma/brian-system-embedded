// AISYAH NURUL AINI               (4.31.21.0.03)
// BRIAN RAHMADITYA                (4.31.21.0.09)
// SABRINA VIRRY TALITHA MEIRILLA  (4.31.21.0.23)
// mengendalikan kecerahan 3 LED menggunakan modul PWM (Pulse Width Modulation)

// Nomor pin untuk LED
const int ledPin = 16; // 16 corresponds to GPIO16
const int ledPin2 = 17; // 17 corresponds to GPIO17
const int ledPin3 = 5; // 5 corresponds to GPIO5

// Menetapkan properti PWM
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;
void setup() {
  // configure LED PWM functionalitites
  ledcSetup(ledChannel, freq, resolution);
  // Menghubungkan saluran dengan pin GPIO yang akan dikendalikan
  ledcAttachPin(ledPin, ledChannel);
  ledcAttachPin(ledPin2, ledChannel);
  ledcAttachPin(ledPin3, ledChannel);
}
void loop() {
  // Meningkatkan kecerahan LED
  for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
    // Mengubah kecerahan LED dengan PWM
    ledcWrite(ledChannel, dutyCycle);
    delay(15);
  }
  // Mengurangi kecerahan LED
  for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--) {
    // Mengubah kecerahan LED dengan PWM
    ledcWrite(ledChannel, dutyCycle);
    delay(15);
  }
}
