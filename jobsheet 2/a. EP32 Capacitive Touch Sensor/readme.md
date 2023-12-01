# 1. EP32 | A. Capacitive Touch Sensor

## 1. Keterangan Singkat (Abstrak)

Dalam percobaan ini program dibuat untuk dapat memahami bagaimana cara kerja protokol komunikasi yang terdapat pada ESP32 seperti UART, 12C, OneWire dan SPI dan bagaimana cara memanfaatkan tranducer sensor dan actuator untuk perangkat IoT.

## 2. Alat dan Bahan
1. ESP32                ==> 1 buah
2. Breadboard           ==> 1 buah
3. Kabel Jumper         ==> 1 buah
4. Sensor DHT 11, RFID  ==> 1 buah
5. LED                  ==> 5 buah
6. Push Button          ==> 3 buah
7. Servo                ==> 1 buah
8. Resistor 330 Ohm     ==> 3 buah
9. Resistor 1k Ohm      ==> 3 buah
10. Resistor 10k Ohm    ==> 3 buah


### Rangkaian
![Rangkaian ](https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/a175edaa-7eb8-41b2-aad1-dbb8a9c13f3f)



## 3. Hasil dan Pembahasan

### Hasil Percobaan



### Source Code
Program dapat dilihat <a href="https://github.com/sabrinavirry/Sistem-Embedded/blob/master/jobsheet%202/a.%20EP32%20Capacitive%20Touch%20Sensor/1.%20program%20contoh%20touch%20test/touch_1.ino"> disini </a> atau dibawah ini
![Program contoh touch](https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/a7fa7af9-3a41-4f59-b262-d289d74a95a7)

## 4. Kesimpulan

Dari praktikum ini, kita dapat mengetahui bahwa kita bisa mengatur LED dengan interval waktu tertentu menggunakan perintah delay().

<br></br>
# 2. EP32 | LED menyala ketika Sensor disentuh

## 1. Keterangan Singkat (Abstrak)

Dalam percobaan ini program dibuat untuk dapat menghasilkan LED akan memberikan respon menyala apabila sensor disentuh().

## 2. Alat dan Bahan
1. ESP32                ==> 1 buah
2. Breadboard           ==> 1 buah
3. Kabel Jumper         ==> 1 buah
4. Sensor DHT 11, RFID  ==> 1 buah
5. LED                  ==> 5 buah
6. Push Button          ==> 3 buah
7. Servo                ==> 1 buah
8. Resistor 330 Ohm     ==> 3 buah
9. Resistor 1k Ohm      ==> 3 buah
10. Resistor 10k Ohm    ==> 3 buah

### Rangkaian
![Rangkaian ](https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/4c1529ab-b558-461c-af12-2d3849dd2bec)

## 3. Hasil dan Pembahasan

### Hasil Percobaan

### Source Code

Program dapat dilihat <a href="https://github.com/sabrinavirry/Sistem-Embedded/blob/master/jobsheet%202/a.%20EP32%20Capacitive%20Touch%20Sensor/2.%20LED%20menyala%20ketika%20sensor%20disentuh%2C%20dan%20LED%20akan%20mati%20ketika%20sensor%20tidak%20disentuh/touch_2.ino"> disini </a> atau dibawah ini
![LED menyala ketika sensor disentuh](https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/c6c95bb7-e30f-444d-8647-563d43122433)

## 4. Kesimpulan

Program Blink LED menggunakan millis() membuat LED berkedip dengan interval waktu tertentu tanpa menggunakan delay(). Dengan memanfaatkan millis(), program tetap responsif terhadap tugas lainnya tanpa harus menunggu dan fleksibilitas dalam mengatur waktu dan keadaan LED.
<br></br>

# 3. EP32 | Ketika sensor disentuh maka LED Blink akan menyala

## 1. Keterangan Singkat (Abstrak)

Dalam percobaan ini program dibuat untuk dapat melihat ketika sensor disentuh, LED akan menyala Blink dan menampilkan angka yang akan bertambah setiap kali sensor disentuh.

## 2. Alat dan Bahan
1. ESP32                ==> 1 buah
2. Breadboard           ==> 1 buah
3. Kabel Jumper         ==> 1 buah
4. Sensor DHT 11, RFID  ==> 1 buah
5. LED                  ==> 5 buah
6. Push Button          ==> 3 buah
7. Servo                ==> 1 buah
8. Resistor 330 Ohm     ==> 3 buah
9. Resistor 1k Ohm      ==> 3 buah
10. Resistor 10k Ohm    ==> 3 buah

### Rangkaian
![Rangkaian ](https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/d41930f4-77ab-4036-aa08-794e9e60acc6)

## 3. Hasil dan Pembahasan

### Hasil Percobaaan

### Source Code

Program dapat dilihat <a href="https://github.com/sabrinavirry/Sistem-Embedded/blob/master/jobsheet%202/a.%20EP32%20Capacitive%20Touch%20Sensor/3.%20ketika%20sensor%20disentuh%2C%20LED%20menyala%20Blink/touch_3.ino"> disini </a> atau dibawah ini
![Sensor disentuh, LED Blink menyala](https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/58c30ecc-3956-4c74-baf2-fbbc00b837d9)

## 4. Kesimpulan

Program ini menggunakan ESP 32 untuk menyala LED Blink ketika sensor disentuh. Angka yang ditampilkan pada Serial Monitor akan bertambah setiap kali sensor disentuh.

<br></br>
# 4. EP32 | LED menyala Serial Monitor menampilkan angka yang akan bertambah setiap kali sensor disentuh

## 1. Keterangan Singkat (Abstrak)

Dalam percobaan ini program dibuat untuk menyala LED Blink ketika sensor disentuh. Angka yang ditampilkan pada Serial Monitor akan bertambah setiap kali sensor disentuh.

## 2. Alat dan Bahan
1. ESP32                ==> 1 buah
2. Breadboard           ==> 1 buah
3. Kabel Jumper         ==> 1 buah
4. Sensor DHT 11, RFID  ==> 1 buah
5. LED                  ==> 5 buah
6. Push Button          ==> 3 buah
7. Servo                ==> 1 buah
8. Resistor 330 Ohm     ==> 3 buah
9. Resistor 1k Ohm      ==> 3 buah
10. Resistor 10k Ohm    ==> 3 buah

### Rangkaian
![Rangkaian ](https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/06971216-8109-43fd-96e6-66848df997bc)


## 3. Hasil dan Pembahasan

### Hasil Percobaan 

### Source Code

Program dapat dilihat <a href="https://github.com/sabrinavirry/Sistem-Embedded/blob/master/jobsheet%202/a.%20EP32%20Capacitive%20Touch%20Sensor/4.%20ketika%20LED%20menyala%20Serial%20Monitor%20menampilkan%20angka%20yang%20akan%20bertambah%20setiap%20kali%20sensor%20disentuh/touch_4.ino"> disini </a> atau dibawah ini
![LED menyala Serial Monitor menampilkan angka yang akan bertambah setiap kali sensor disentuh](https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/143daddd-db19-40c0-a695-77d3cc0cf1e1)

## 4. Kesimpulan

Dengan menggunakan program ini, dapat menyampaikan sinyal dari sensor sentuh ke LED Blink dan menampilkan informasi tentang perubahan keadaan sensor pada Serial Monitor.

<br></br>
# 5. EP32 | LED nyala running saat sensor disentuh

## 1. Keterangan Singkat (Abstrak)

Dalam percobaan ini program dibuat untuk dapat mengendalikan led menggunakan push button, dimana saat push button ketiga ditekan maka LED akan menyala menjadi running led (menyala bergantian dari kiri ke kanan).

## 2. Alat dan Bahan
1. ESP32                ==> 1 buah
2. Breadboard           ==> 1 buah
3. Kabel Jumper         ==> 1 buah
4. Sensor DHT 11, RFID  ==> 1 buah
5. LED                  ==> 5 buah
6. Push Button          ==> 3 buah
7. Servo                ==> 1 buah
8. Resistor 330 Ohm     ==> 3 buah
9. Resistor 1k Ohm      ==> 3 buah
10. Resistor 10k Ohm    ==> 3 buah

### Rangkaian
![Rangkaian ](https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/bab1d93e-d5a0-45de-ba8b-996e94b37517)


## 3. Hasil dan Pembahasan

### Hasil Percobaan

### Sorce Code

Program dapat dilihat <a href="https://github.com/sabrinavirry/Sistem-Embedded/blob/master/jobsheet%202/a.%20EP32%20Capacitive%20Touch%20Sensor/5.%20LED%20nyala%20running%20saat%20sensor%20disentuh/touch_5.ino"> disini </a> atau dibawah ini
![LED nyala running saat sensor disentuh](https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/83c476ae-a76f-447c-9ecf-2c20fee24fd4)

## 4. Kesimpulan

Dengan program di atas dalam percobaan ini yaitu ketika sensor disentuh, LED akan menyala menjadi running LED yang bergerak dari kiri ke kanan, kemudian kanan ke kiri secara kontinyu. Hasil output dari program ini akan menampilkan nilai sensor sentuh pada Serial Monitor. Kesimpulannya, program ini memungkinkan LED untuk menyala menjadi running LED ketika sensor disentuh sesuai dengan nilai yang diberikan
