# C. One-Way, One-to-Many Communication

## 1. Mengirim Pesan yang Sama Ke Beberapa Board ESP32
### A. Rangkaian
<img src="https://github.com/brianrahma/brian-system-embedded/assets/82065700/df22b4a6-37f9-4eda-8d9c-644d8d0cfec3" width="500">

### B. Source Code
1. Program ESP32 sebagai sender dapat dilihat <a href="https://github.com/brianrahma/system-embedded/blob/master/jobsheet%202.1/c.%20One-Way%2C%20One-to-Many%20Communication/1.%20Mengirim%20Pesan%20yang%20Sama%20Ke%20Beberapa%20Board%20ESP32/sender.ino">disini
2. Program ESP32 sebagai receiver dapat dilihat <a href="https://github.com/brianrahma/system-embedded/blob/master/jobsheet%202.1/c.%20One-Way%2C%20One-to-Many%20Communication/1.%20Mengirim%20Pesan%20yang%20Sama%20Ke%20Beberapa%20Board%20ESP32/receiver.ino">disini

### C. Hasil dan Pembahasan
![J2 1 -C-1-1](https://github.com/brianrahma/system-embedded/assets/82065700/48437206-8f7a-4bdc-aa1c-5e62e8337466)


Pada percobaan ini  menggunakan empat modul ESP32, di mana satu modul berperan sebagai Master/sender dan tiga modul lainnya sebagai receiver. Langkah awal memerlukan MAC Address dari tiap ESP32 yang akan menjadi receivernya, diikuti dengan memasukkan MAC address receiver pada program Master untuk mengirimkan data seragam ke setiap modul receiver. Program tersebut diunggah ke masing-masing modul, dan kemudian dilakukan pemantauan melalui Serial Monitor di Arduino IDE.

## 2. Mengirim Pesan yang Berbeda Ke Beberapa Board ESP32





### B. Mengirim Pesan yang Berbeda Ke Beberapa Board ESP32
Program dapat dilihat <a href="https://github.com/brianrahma/system-embedded/blob/master/jobsheet%202.1/a.%20Memperoleh%20MAC%20Address%20ESP32%20Receiver/1.%20Memperoleh%20MAC%20Address%20ESP32%20Receiver/mac_address.ino">disini

## 3. Hasil dan Pembahasan

 **Hasil percobaan :**

 <img src="https://github.com/brianrahma/system-embedded/assets/82065700/fb43dc71-a008-4110-9d64-ff6c98b3cbc4" width="700">

 
<p align="justify">Dalam percobaan ini output yang didapat adalah mendapatkan MAC Address dari ESP32 yang dikirim melalui serial monitor. MAC Address yang didapat yaitu C8:F0:9E:F4:32:7C
