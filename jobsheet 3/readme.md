# JOBSHEET 3 - TOPOLOGI JARINGAN LOKAL DAN WIFI

## Abstrak
<p align="justify">WiFi, singkatan dari Wireless Fidelity, adalah adalah teknologi yang menggunakan gelombang radio dalam rentang 2,4GHz sampai 5GHz untuk menghubungkan perangkat seperti PC, smartphone, dan perangkat microcontroller ke jaringan wireless agar bisa mengakses akses internet. Perangkat ini perlu berada dalam jarak sekitar 20 meter dari hotspot wifi. Pada awalnya WiFi hanya berfungsi sebagai perangkat nirkabel dalam jaringan LAN (Local Area Network), tetapi seiring perkembangan teknologi, WiFi sekarang telah menjadi suatu kebutuhan penting dalam keseharian untuk mengakses internet dan IoT. 
Data yang dikirim melalui wifi menggunakan gelombang radio dan memerlukan wireless adaptor untuk penerimaannya. Gelombang radio ini kemudian dikirim ke router yang menguraikan kode data sebelum dikirim ke internet melalui koneksi ethernet. Jaringan wifi bekerja dalam dua arah, mengirim dan menerima data dalam bentuk paket yang dikirim ulang sebagai sinyal radio oleh adaptor komputer nirkabel.</p>

<p align="justify">Pada jobsheet ini bertujuan untuk memahami cara kerja protokol topologi jaringan lokal Wi-Fi, merancang topologi jaringan untuk penerapan Wireless Sensor Network (WSN) dan Internet of Things (IoT), serta mampu memilih dan menerapkan topologi yang sesuai dengan situasi lapangan untuk keperluan WSN dan IoT.</p>

Terdapat 6 percobaan dalam jobsheet ini yaitu :
1. ESP32 Wi-Fi Modes dan Wifi-Scan
2. Menghubungkan ESP32 dengan Jaringan Wi-Fi
3. Menghubungkan Kembali (Re-connect) ESP32 dengan Jaringan Wi-Fi
4. Mengganti Hostname ESP32
5. Mengirim Data Sensor ke Database
6. Pertanyaan dan Tugas

## Alat dan Bahan

Alat dan bahan yang digunakan dalam jobsheet ini, antara lain:
  1. ESP32
  2. Breadboard
  3. Kabel jumper
  4. Sensor DHT 11, RFID
  5. LED (5) dan Push Button (3)
  6. Servo
  7. Resistor 330, 1K, 10K Ohm (@3)
<br>

# A. ESP32 Wi-Fi Modes dan Wifi-Scan

## 1. Rangkaian

![LAPTOP ESP32](https://github.com/brianrahma/brian-system-embedded/assets/82065700/df22b4a6-37f9-4eda-8d9c-644d8d0cfec3)

## 2. Source Code

Program dapat dilihat <a href="https://github.com/brianrahma/brian-system-embedded/blob/master/jobsheet%203/a.%20ESP32%20Wi-Fi%20Modes%20dan%20Wifi-Scan/program/ESP32%20Wi-Fi%20Modes%20dan%20Wifi-Scan.ino"> disini </a> atau dibawah ini
![carbon](https://github.com/brianrahma/brian-system-embedded/assets/82065700/5313b9b9-5f9d-44b4-aa31-1b3a373e2f2b)

## 3. Flowchart

 ![flowchart](https://github.com/brianrahma/brian-system-embedded/assets/82065700/3114fd55-73df-4bfa-b05e-346ac04eaa67)

 ## 4. Hasil dan Pembahasan

 **Hasil percobaan :**
 
 ![A gif](https://github.com/brianrahma/brian-system-embedded/assets/82065700/6cef6d0a-9fe6-4cae-a4fb-fe42122918a4)

Dalam percobaan ini ESP32 akan digunakan untuk melakukan pemindaian (scanning) jaringan WiFi di sekitar perangkat ESP32 menggunakan modul WiFi. Tujuan dari percobaan ini adalah untuk menampilkan daftar jaringan WiFi yang terdeteksi berserta dengan informasi seperti nama SSID, kekuatan sinyal (RSSI), dan apakah jaringan tersebut memiliki enkripsi (WPA/WPA2) atau tidak.

Hasilnya dapat dilihat pada serial monitor, pertama akan mencetak "scan start" sebagai tanda dimulainya pemindaian. Jika tidak ada jaringan yang ditemukan, maka program akan mencetak "no networks found". Jika ada jaringan yang ditemukan, program akan mencetak daftar jaringan beserta informasinya, yaitu SSID, kekuatan sinyal, dan tanda "*" jika jaringan tersebut memiliki enkripsi. Program dalam percobaan ini akan terus berjalan secara berulang dengan interval waktu 5 detik untuk scan berikutnya. 
 




