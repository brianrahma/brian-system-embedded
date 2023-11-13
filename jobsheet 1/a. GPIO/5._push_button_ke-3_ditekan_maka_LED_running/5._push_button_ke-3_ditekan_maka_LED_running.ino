// AISYAH NURUL AINI               (4.31.21.0.03)
// BRIAN RAHMADITYA                (4.31.21.0.09)
// SABRINA VIRRY TALITHA MEIRILLA  (4.31.21.0.23)

// Menetapkan nomor pin
const int buttonPin = 4; // Nomor pin tombol tekan
const int pinLED = 5; // Nomor pin LED
const int buttonPin2 = 2; // Nomor pin tombol tekan kedua
const int pinLED2 = 18; // Nomor pin LED kedua
const int pinLED3 = 19; // Nomor pin LED ketiga
const int pinLED4 = 21; // Nomor pin LED keempat
const int pinLED5 = 3; // Nomor pin LED kelima
const int buttonPin3 = 15; // Nomor pin tombol tekan ketiga

// Variabel untuk menyimpan status tombol tekan
int buttonState = 0;
int buttonState2 = 0;
int buttonState3 = 0;

void setup() {
  Serial.begin(115200);
  // Menginisialisasi pin tombol tekan sebagai input
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  // Menginisialisasi pin LED sebagai output
  pinMode(pinLED, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
  pinMode(pinLED4, OUTPUT);
  pinMode(pinLED5, OUTPUT);
}

void loop() {
  // Membaca status nilai tombol tekan
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  Serial.println(buttonState);

  // Memeriksa apakah tombol tekan ditekan.
  // Jika iya, statusTombol adalah HIGH
  if (buttonState == HIGH) {
    // Menghidupkan LED
    digitalWrite(pinLED, HIGH);
  } else {
    // Mematikan LED
    digitalWrite(pinLED, LOW);
  }

  if (buttonState2 == HIGH) {
    // Menghidupkan LED
    digitalWrite(pinLED2, HIGH);   // Menghidupkan LED (HIGH adalah level tegangan)
    delay(500);                       // Tunggu selama satu detik
    digitalWrite(pinLED2, LOW);    // Mematikan LED dengan menurunkan tegangan menjadi LOW
    delay(500);                       // Tunggu selama satu detik
  } else {
    // Mematikan LED
    digitalWrite(pinLED2, LOW);
  }

  if (buttonState3 == HIGH) {
    // Menghidupkan LED
    digitalWrite(pinLED3, HIGH);   // Menghidupkan LED ketiga
    delay(500);
    digitalWrite(pinLED3, LOW);
    digitalWrite(pinLED4, HIGH);   // Menghidupkan LED keempat
    delay(500);
    digitalWrite(pinLED4, LOW);
    digitalWrite(pinLED5, HIGH);   // Menghidupkan LED kelima
    delay(500);
    digitalWrite(pinLED5, LOW);
  } else {
    // Mematikan LED
    digitalWrite(pinLED3, LOW);
    digitalWrite(pinLED4, LOW);
    digitalWrite(pinLED5, LOW);
  }
}
