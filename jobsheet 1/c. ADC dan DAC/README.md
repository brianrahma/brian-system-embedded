# 1. ADC dan DAC | membaca nilai analog yang dihasilkan oleh potensiometer 

## 1. Keterangan Singkat (Abstrak)

Dalam percobaan ini program dibuat untuk dapat membaca nilai analog yang dihasilkan oleh potensiometer yang terhubung ke GPIO34 dan menampilkan nilai tersebut melalui komunikasi serial.

## 2. Alat dan Bahan
1. ESP32                     ==> 1 buah
2. Potensiometer 10k ohm     ==> 1 buah
3. Breadboard                ==> 1 buah
4. Kabel Jumper

### Rangkaian

![rangkaian adc](https://github.com/brianrahma/brian-system-embedded/assets/82065700/e9b02173-d1fd-4547-9543-88207b6c213d)

## 3. Hasil dan Pembahasan

### Hasil Percobaan

![ADC 1-GIF](https://github.com/brianrahma/brian-system-embedded/assets/82065700/8faa7ceb-c751-42e9-ba6d-ff8df0dc3e42)


### Source Code

Program dapat dilihat <a href="https://github.com/brianrahma/brian-system-embedded/blob/master/jobsheet%201/c.%20ADC%20dan%20DAC/1._contoh_ADC_dan_DAC_dengan_potensiometer/1._contoh_ADC_dan_DAC_dengan_potensiometer.ino"> disini </a> atau dibawah ini
![ADC 1](https://github.com/brianrahma/brian-system-embedded/assets/82065700/8577a659-931b-40f5-a8fa-7485bebd4e36)


### Flowchart

![283651896-fb0bebfc-f73a-4bbc-886b-bc8e87bf75fc](https://github.com/brianrahma/brian-system-embedded/assets/82065700/1da6ca03-86a3-4d92-9556-40f6d6c60286)

Pada percobaan ini program dirancang untuk membaca nilai analog dari sebuah potensiometer yang terhubung ke pin GPIO34 pada ESP32. Setiap kali program dijalankan, nilai yang dibaca dari potensiometer ditampilkan di Serial Monitor melalui komunikasi serial dengan baudrate 115200.

Pada fungsi `setup()`, program menginisialisasi komunikasi serial dengan `Serial.begin(115200)` dan memberikan jeda waktu 1 detik menggunakan `delay(1000)`. Pada fungsi `loop()`, terdapat beberapa langkah utama. Pertama, program membaca nilai analog dari potensiometer menggunakan fungsi `analogRead(potPin)` dan menyimpannya dalam variabel `potValue`. Selanjutnya, nilai potensiometer tersebut ditampilkan di Serial Monitor menggunakan `Serial.println(potValue)`. Serta terdapat delay sebesar 500 ms menggunakan `delay(500)` agar nilai potensiometer tidak terlalu cepat berganti dan lebih mudah diamati di Serial Monitor.

Percobaan ini bertujuan memonitor nilai potensiometer secara real-time melalui Serial Monitor. Potensiometer, dapat diubah nilai analognya dengan cara memutarnya. Hasilnya adalah nilai potensiometer tersebut akan terus ditampilkan di Serial Monitor, nilainya dengan rentang 0 hingga 4095.

## 4. Kesimpulan

Percobaan ini merupakan implementasi dari ADC (Analog-to-Digital Converter) menggunakan potensiometer sebagai input analognya. Nilai potensiometer tersebut ditampilkan secara real-time di Serial Monitor. Tujuannya adalah memonitor nilai potensiometer yang dapat diubah oleh pengguna dengan memutar potensiometer tersebut.

<br></br>
# 2. ADC dan DAC | Mengatur Cahaya LED dengan Potensiometer menggunakan ADC dan PWM

## 1. Keterangan Singkat (Abstrak)

Dalam percobaan ini program dibuat untuk mengendalikan kecerahan LED menggunakan potensiometer sebagai input analog untuk mengatur kecerahan sebuah LED menggunakan modul PWM. Dengan membaca nilai dari potensiometer, program kemudian mengonversinya ke nilai PWM yang dapat mengendalikan kecerahan LED. 

## 2. Alat dan Bahan
1. ESP32                     ==> 1 buah
2. Potensiometer 10k ohm     ==> 1 buah
3. Breadboard                ==> 1 buah
4. LED                       ==> 1 buah
5. Resistor 220 Ohm          ==> 1 buah
6. Kabel Jumper

### Rangkaian

![rangkaian ADC 2](https://github.com/brianrahma/brian-system-embedded/assets/82065700/e308d705-1c89-4040-af1f-294cd4b59c91)

## 3. Hasil dan Pembahasan

### Hasil Percobaan

![ADC 2-GIF](https://github.com/brianrahma/brian-system-embedded/assets/82065700/71127dcc-2aad-47da-9cfc-b728e5541890)


### Source Code

Program dapat dilihat <a href="https://github.com/brianrahma/brian-system-embedded/blob/master/jobsheet%201/c.%20ADC%20dan%20DAC/2._Program_Mengatur_Cahaya_Led_dengan_Potensio/2._Program_Mengatur_Cahaya_Led_dengan_Potensio.ino"> disini </a> atau dibawah ini
![ADC 2](https://github.com/brianrahma/brian-system-embedded/assets/82065700/21709f74-e30f-410c-8e34-36edfaa39933)

### Flowchart

![FLOWCHART ADC 2](https://github.com/brianrahma/brian-system-embedded/assets/82065700/8daa59f4-5fa7-4009-be3e-2b65d1c099ac)

Pada percobaan ini potensiometer digunakan untuk mengatur kecerahan LED. Potensiometer terhubung ke pin analog input (GPIO34), sedangkan LED terhubung ke pin analog output (GPIO5). Program ini menggunakan modul PWM (Pulse Width Modulation) untuk mengendalikan kecerahan LED berdasarkan nilai yang dibaca dari potensiometer.

Pada fungsi `setup()`, program menginisialisasi komunikasi serial dengan baudrate 115200 dan mengkonfigurasi modul PWM untuk mengontrol LED. Pengaturan PWM melibatkan penentuan frekuensi (`freq`), channel PWM (`ledChannel`), dan resolusi (`resolution`). Selanjutnya, program menghubungkan saluran PWM dengan pin analog output yang terhubung ke LED. Pada fungsi `loop()`, program membaca nilai analog dari potensiometer menggunakan `analogRead(analogInPin)` dan menyimpannya dalam variabel `sensorValue`. Nilai ini kemudian di-mapping menggunakan fungsi `map()` untuk rentang nilai analog (0 hingga 4095) menjadi rentang nilai PWM (0 hingga 255). Nilai tersebut kemudian digunakan untuk mengatur kecerahan LED melalui fungsi `analogWrite(analogOutPin, outputValue)`.

Dalam percobaan kali ini nilai pembacaan potensiometer dan nilai output ditampilkan ke Serial Monitor. Hasilnya adalah ketika potensiometer diubah, nilai sensor akan berubah sesuai, dan output LED akan disesuaikan untuk mencerminkan perubahan tersebut.

## 4. Kesimpulan

Percobaan ini bertujuan mengendalikan kecerahan LED dengan memanfaatkan nilai analog dari sebuah potensiometer. Program menggunakan modul PWM untuk mengubah nilai analog menjadi kecerahan LED yang sesuai. Hasilnya, nilai sensor (potensiometer) dan nilai output LED ditampilkan di Serial Monitor dan LED akan berubah kecerahannya menyesuaikan input analog.

