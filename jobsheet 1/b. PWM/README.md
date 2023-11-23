# 1. PWM | kontrol kecerahan sebuah LED menggunakan modul PWM (Pulse Width Modulation)

## 1. Keterangan Singkat (Abstrak)

Dalam percobaan ini program dibuat untuk dapat menghasilkan sebuah LED yang dapat dikendalikan kecerahannya menggunakan modul PWM (Pulse Width Modulation).

## 2. Alat dan Bahan
1. ESP32             ==> 1 buah
2. LED               ==> 3 buah
3. Resistor 330 Ohm  ==> 3 buah
4. Kabel Jumper

### Rangkaian

![Jobsheet Embedded](https://github.com/brianrahma/brian-system-embedded/assets/82065700/0815d921-c057-4c0c-ac12-3a3136aee5a4)

## 3. Hasil dan Pembahasan

### Hasil Percobaan

![PWM 1 GIF](https://github.com/brianrahma/brian-system-embedded/assets/82065700/ca9e29f3-1305-442b-a660-62737455da2c)

### Source Code

Program dapat dilihat <a href="https://github.com/brianrahma/brian-system-embedded/blob/master/jobsheet%201/b.%20PWM/1.%20mengendalikan%20kecerahan%20sebuah%20LED%20menggunakan%20modul%20PWM%20(Pulse%20Width%20Modulation)/1._contoh_PWM.ino"> disini </a> atau dibawah ini
![carbon (5)](https://github.com/brianrahma/brian-system-embedded/assets/82065700/b170f112-a80e-4f91-b6de-1c6162c6f43b)

### Flowchart

![PWM 1 FLOWCHART](https://github.com/brianrahma/brian-system-embedded/assets/82065700/8820cd58-95d7-47df-abe5-eaf85f7056f8)


Dalam percobaan ini bertujuan mengendalikan kecerahan sebuah LED menggunakan modul PWM (Pulse Width Modulation) yaitu teknik pengendalian sinyal di mana sinyal digital dibangkitkan secara periodik dengan dua tingkat tegangan yang berbeda: tinggi (biasanya disebut logika 1) dan rendah (biasanya disebut logika 0). Pada awal program, terdapat deklarasi variabel yang mencakup nomor pin GPIO tempat LED terhubung (`ledPin`), frekuensi PWM (`freq`), nomor saluran PWM (`ledChannel`), dan resolusi bit PWM (`resolution`). Setelah itu, dalam fungsi `setup()`, program mengkonfigurasi saluran PWM dengan frekuensi dan resolusi yang telah ditentukan, serta menghubungkan saluran tersebut dengan pin GPIO yang akan mengendalikan LED.

Dalam loop utama fungsi `loop()`, terdapat dua iterasi. Iterasi pertama meningkatkan kecerahan LED secara bertahap dari nilai duty cycle 0 hingga 255 sehingga menciptakan efek peningkatan kecerahan. Setelah mencapai nilai maksimum, iterasi kedua mengurangi kecerahan LED dari 255 kembali ke 0 sehingga menghasilkan efek penurunan kecerahan. Dalam setiap langkah, fungsi `ledcWrite()` digunakan untuk mengatur duty cycle PWM, yang mengontrol kecerahan LED, dan `delay(15)` memberikan jeda 15 milidetik antara setiap perubahan. Duty cycle adalah perbandingan antara durasi sinyal tinggi dan durasi total satu siklus. Misalnya, jika sinyal tinggi ada selama setengah siklus, maka duty cycle-nya adalah 50%. Duty cycle ini menentukan seberapa lama sinyal tinggi dibandingkan dengan total waktu siklus.

Tujuan dari program ini adalah menciptakan efek visual menarik dengan LED yang secara dinamis memancarkan cahaya dengan perubahan kecerahan yang halus. Hasilnya adalah LED akan terlihat seperti memudar masuk dan keluar secara berulang.

## 4. Kesimpulan

Dari praktikum ini, modul PWM dapat digunakan untuk mengatur kecerahan lampu LED. PWM (Pulse Width Modulation) adalah teknik pengendalian sinyal di mana tingkat daya atau output perangkat diatur dengan mengubah lebar pulsa sinyal. Duty cycle merupakan perbandingan antara durasi sinyal tinggi dan durasi total satu siklus, menentukan seberapa lama sinyal tinggi dibandingkan dengan total waktu siklus. 

<br></br>
# 2. PWM | kontrol kecerahan 3 LED menggunakan modul PWM (Pulse Width Modulation)

## 1. Keterangan Singkat (Abstrak)

Dalam percobaan ini program dibuat untuk dapat menghasilkan 3 LED yang dapat dikendalikan kecerahannya menggunakan modul PWM (Pulse Width Modulation).

## 2. Alat dan Bahan
1. ESP32             ==> 1 buah
2. LED               ==> 3 buah
3. Resistor 330 Ohm  ==> 3 buah
4. Kabel Jumper

### Rangkaian

![Jobsheet Embedded](https://github.com/brianrahma/brian-system-embedded/assets/82065700/0815d921-c057-4c0c-ac12-3a3136aee5a4)

## 3. Hasil dan Pembahasan

### Hasil Percobaan

![PWM 2 GIF](https://github.com/brianrahma/brian-system-embedded/assets/82065700/b21f1edd-cb30-4e3e-9873-348c28d4b05f)

### Source Code

Program dapat dilihat <a href="https://github.com/brianrahma/brian-system-embedded/blob/master/jobsheet%201/b.%20PWM/2.%20mengendalikan%20kecerahan%203%20LED%20menggunakan%20modul%20PWM%20(Pulse%20Width%20Modulation)/2._program_lanjutan.ino"> disini </a> atau dibawah ini
![carbon (6)](https://github.com/brianrahma/brian-system-embedded/assets/82065700/f90f2680-5dab-4aca-888b-70d55b64005a)

### Flowchart

![283585079-5170fdd7-efc4-4336-8f00-75edc6b9ff50](https://github.com/brianrahma/brian-system-embedded/assets/82065700/0870a2e3-fc4f-40e7-a2f5-bc0a55397fd7)


Dalam percobaan ini bertujuan mengendalikan kecerahan tiga LED yang terhubung ke pin GPIO pada EP32. Nomor pin GPIO yang digunakan untuk masing-masing LED adalah 16, 17, dan 5. Program menggunakan modul PWM (Pulse Width Modulation) untuk menghasilkan efek perubahan kecerahan pada ketiga LED tersebut.

Dalam fungsi `setup()`, program mengkonfigurasi saluran PWM dengan frekuensi dan resolusi tertentu menggunakan `ledcSetup()`. Selanjutnya, program menghubungkan saluran PWM ke masing-masing pin GPIO yang dikendalikan menggunakan `ledcAttachPin()`. Dalam loop utama fungsi `loop()`, terdapat dua iterasi yang bertujuan untuk menciptakan efek perubahan kecerahan pada ketiga LED secara bersamaan. Iterasi pertama meningkatkan kecerahan LED secara bertahap dari nilai duty cycle 0 hingga 255, menciptakan efek peningkatan kecerahan. Setelah mencapai nilai maksimum, iterasi kedua mengurangi kecerahan LED dari 255 kembali ke 0, menghasilkan efek penurunan kecerahan. Dalam setiap langkah, fungsi `ledcWrite()` digunakan untuk mengatur duty cycle PWM, yang mengontrol kecerahan LED, dan `delay(15)` memberikan jeda 15 milidetik antara setiap perubahan.

Tujuan dari program dalam percobaan ini adalah menggunakan modul PWM untuk mengendalikan tiga LED secara bersamaan dan menciptakan efek visual yang menarik dengan perubahan kecerahan yang bersamaan pada LED ketiganya. Hasilnya adalah ketiga LED akan terlihat seperti memudar masuk dan keluar secara bersamaan.

## 4. Kesimpulan

Dari praktikum ini, penggunaaan modul PWM bertujuan mengendalikan kecerahan tiga LED yang terhubung ke pin GPIO pada esp32. Tujuannya adalah menciptakan efek visual dengan perubahan kecerahan bersamaan pada ketiga LED. Hasilnya adalah LED akan terlihat memudar masuk dan keluar secara bersamaan.


