# 1. Simulasi Pemrosesan Data Menggunakan Regresi Linier 

## 1. Keterangan Singkat (Abstrak)
Dalam percobaan ini program dibuat untuk mengumpulkan data kelembaban tanah dengan membaca sensor soil Capacitive Soil Moisture dan mencatat pembacaan dari 3-way meter untuk kondisi tanah medium, kering, dan basah. Setelah data terkumpul, analisis regresi linier dapat digunakan untuk pemahaman lebih lanjut tentang sejauh mana pembacaan sensor soil Capacitive Soil Moisture dapat diandalkan sebagai indikator kelembaban tanah dalam konteks kondisi yang berbeda.

## 2. Alat dan Bahan
1. ESP32                                    ==> 1 buah
2. Sensor soil Capacitive Soil Moisture     ==> 1 buah
3. 3-way meter                              ==> 1 buah
4. Kabel Jumper

### Rangkaian

![soil](https://github.com/brianrahma/brian-system-embedded/assets/82065700/80d446ef-5f4d-4a0c-9472-3abf89e2bbbd)

## 3. Hasil dan Pembahasan

### Hasil Percobaan

Tanpa media tanah
![WhatsApp Image 2023-09-21 at 11 23 43_48a4340c](https://github.com/brianrahma/brian-system-embedded/assets/82065700/e585dea4-d1e8-451a-b63a-cadca7fb3fda)


Tanah Basah
![basah](https://github.com/brianrahma/brian-system-embedded/assets/82065700/e8e7d89c-9b95-4444-a719-7c906ae47ba4)

Tanah kering
![kering](https://github.com/brianrahma/brian-system-embedded/assets/82065700/84e01a73-ed27-4083-85d0-ad12929fd642)

Tanah medium
![medium](https://github.com/brianrahma/brian-system-embedded/assets/82065700/3b786f1f-a520-4510-bd41-e6f2139ab5ea)

|  3 Way Meter  |  ADC  |  vs  |  Keterangan  |
|---------------|-------|------|--------------|
|       4       |  350  | 2,02 | tanah medium |
|     1,2       |  530  | 3,05 | tanah kering |
|     4,7       |  341  | 1,94 | tanah basah  |

### Source Code

Program dapat dilihat <a href="https://github.com/brianrahma/brian-system-embedded/blob/master/jobsheet%201/d.%20Simulasi%20Pemrosesan%20Data%20Menggunakan%20Regresi%20Linier/1.%20program%20contoh.ino"> disini </a> serta lanjutannya <a href="https://github.com/brianrahma/brian-system-embedded/blob/master/jobsheet%201/d.%20Simulasi%20Pemrosesan%20Data%20Menggunakan%20Regresi%20Linier/2._program_lanjutan.ino"> disini </a> 

Dalam percobaan ini pengumpulan data kelembaban tanah dilakukan dengan membaca sensor soil Capacitive Soil Moisture dan mencatat pembacaan dari 3-way meter untuk kondisi tanah medium, kering, dan basah. Setelah data terkumpul, analisis regresi linier dapat memberikan pemahaman lebih lanjut tentang sejauh mana pembacaan sensor soil Capacitive Soil Moisture dapat diandalkan sebagai indikator kelembaban tanah dalam konteks kondisi yang berbeda. Simulasi ini dapat membantu memahami seberapa baik sensor Capacitive Soil Moisture dapat merepresentasikan kelembaban tanah dibandingkan dengan metode lain seperti 3-way meter, dan sejauh mana regresi linier dapat digunakan untuk memahami dan memodelkan hubungan di antara keduanya. 

## 4. Kesimpulan

Dalam simulasi pemrosesan data menggunakan regresi linier untuk pengumpulan data kelembaban tanah, maka digunakan sensor soil Capacitive Soil Moisture dan 3-way meter untuk kondisi tanah medium, kering, dan basah. Analisis regresi linier akan memberi gambaran tentang hubungan antara pembacaan sensor dan kondisi tanah. Kesimpulan dari simulasi ini dapat memberikan wawasan tentang sejauh mana keakuratan sensor Capacitive Soil Moisture dalam merepresentasikan kelembaban tanah, serta seberapa baik regresi linier dapat memodelkan hubungan antara pembacaan sensor dan kondisi tanah yang berbeda.
