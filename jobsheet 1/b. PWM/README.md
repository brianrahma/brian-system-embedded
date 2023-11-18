# 1. PWM | kontrol kecerahan LED menggunakan modul PWM (Pulse Width Modulation)

**1. Alat dan Bahan**
1. ESP32             ==> 1 buah
2. LED               ==> 3 buah
3. Resistor 330 Ohm  ==> 3 buah
4. Kabel Jumper

**2. Rangkaian**

![Jobsheet Embedded](https://github.com/brianrahma/brian-system-embedded/assets/82065700/0815d921-c057-4c0c-ac12-3a3136aee5a4)


**3. Program**

Program dapat dilihat <a href="https://github.com/brianrahma/brian-system-embedded/blob/master/jobsheet%201/b.%20PWM/1.%20mengendalikan%20kecerahan%20sebuah%20LED%20menggunakan%20modul%20PWM%20(Pulse%20Width%20Modulation)/1._contoh_PWM.ino"> disini </a> atau dibawah ini
![carbon (5)](https://github.com/brianrahma/brian-system-embedded/assets/82065700/b170f112-a80e-4f91-b6de-1c6162c6f43b)

**4. Hasil dan Pembahasan**

![PWM 1 GIF](https://github.com/brianrahma/brian-system-embedded/assets/82065700/ca9e29f3-1305-442b-a660-62737455da2c)


**flowchart :**

![280179676-3062ca6a-98dd-441c-8fe5-7019fac6f825](https://github.com/brianrahma/brian-system-embedded/assets/82065700/4d30acb6-710a-49de-8847-3d2781ec2c1d)

Program tersebut merupakan sebuah skrip dalam bahasa pemrograman Arduino yang bertujuan untuk mengendalikan kecerahan sebuah LED menggunakan modul PWM (Pulse Width Modulation). Dalam bagian setup(), program mengatur properti PWM seperti frekuensi (freq) dan resolusi (resolution), kemudian menghubungkan saluran PWM dengan pin GPIO yang akan mengontrol LED. Pada bagian loop(), terdapat dua loop for yang bertujuan untuk secara bertahap meningkatkan dan mengurangi kecerahan LED. Dengan menggunakan fungsi ledcWrite(), program mengatur duty cycle PWM untuk merubah tingkat kecerahan LED. Delay 15 milidetik di setiap iterasi loop menciptakan efek fading yang terlihat secara visual pada LED.

Tujuan dari program ini adalah menciptakan efek visual yang menarik dengan membuat LED secara perlahan-lahan memudar masuk dan keluar. Penggunaan modul PWM memungkinkan kontrol yang presisi terhadap kecerahan LED dengan memanfaatkan prinsip pengaturan lebar pulsa sinyal PWM. Hasilnya adalah LED yang terhubung akan mengalami perubahan kecerahan secara berulang, menciptakan efek yang dapat digunakan untuk tujuan estetika atau visual. Dengan demikian, program ini dapat diaplikasikan dalam berbagai proyek yang memerlukan kontrol kecerahan dinamis pada LED, seperti lampu tidur atau proyek seni elektronik.
**5. Kesimpulan**

Dari praktikum ini, kita dapat mengetahui bahwa kita bisa mengatur LED dengan interval waktu tertentu menggunakan perintah delay().

<br></br>
