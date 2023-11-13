// AISYAH NURUL AINI (4.31.21.0.03)
// BRIAN RAHMADITYA (4.31.21.0.09)
// SABRINA VIRRY TALITHA MEIRILLA (4.31.21.0.23)

// Menetapkan nomor pin
const int buttonPin = 4;      // button1 dihubungkan pada pin GPIO4
const int pinLED = 5;         // LED1 dihubungkan pada pin GPIO 5
const int buttonPin2 = 2;     // button2 dihubungkan pada pin GPIO2
const int pinLED2 = 18;       // LED2 dihubungkan pada pin GPIO 18

// Variabel untuk menyimpan status tombol tekan
int buttonState = 0;
int buttonState2 = 0;

void setup() {
  Serial.begin(115200);
  // Menginisialisasi pin tombol tekan sebagai input
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  // Menginisialisasi pin LED sebagai output
  pinMode(pinLED, OUTPUT);
  pinMode(pinLED2, OUTPUT);
}

void loop() {
  // Membaca status nilai tombol tekan
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin2);
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
}
