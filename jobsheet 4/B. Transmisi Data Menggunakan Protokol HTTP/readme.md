# B. Transmisi Data Menggunakan Protokol HTTP

## 1. Keterangan Singkat (Abstrak)
<p align="justify">Percobaan ini dimulai dengan pembuatan database lokal "banjir_db" dan tabel "smartwater" menggunakan phpMyAdmin. Lalu diberikan kode JSON untuk flow program Multi-Protocol IoT Server yang perlu diimport di Node-RED. Selanjutnya, melalui program pada ESP32 dilakukan transmisi data dummy ke Node-Red menggunakan protokol HTTP metode GET dan protokol HTTP metode POST. Output dari percobaan ini berupa hasil dari serial monitor, debugging Node-Red, dan tampilan dashboard Node-RED.
   
## 2. Alat dan Bahan
1. Node-RED
2. ESP32
3. XAMPP

### 3. Source Code

1. Code JSON Multi-Protocol IoT Server dapat dilihat <a href="https://github.com/brianrahma/system-embedded/blob/master/jobsheet%204/B.%20Transmisi%20Data%20Menggunakan%20Protokol%20HTTP/flow%20program%20Multi-Protocol%20IoT.json">disini</a>
2. Program transmisi data dummy menggunakan protokol HTTP metode GET dapat dilihat <a href="https://github.com/brianrahma/system-embedded/blob/master/jobsheet%204/B.%20Transmisi%20Data%20Menggunakan%20Protokol%20HTTP/transmisi_data_dummy_keNode-Red_protokol_HTTP_metode_Get/transmisi_data_dummy_keNode-Red_protokol_HTTP_metode_Get.ino">disini</a>
3. 
2. 

## 4. Flow Program
Program dapat dilihat <a href="https://github.com/brianrahma/brian-system-embedded/blob/master/jobsheet%201/a.%20GPIO/1._example_blink_interval_100ms__1_detik__2_detik_dan_3_detik_s/1._example_blink_interval_100ms__1_detik__2_detik_dan_3_detik_s.ino"> disini </a>
<img src="https://github.com/brianrahma/system-embedded/blob/master/jobsheet%204/B.%20Transmisi%20Data%20Menggunakan%20Protokol%20HTTP/flow%20program%20.png" width="800">

## 4. Hasil Percobaan Transmisi Data Dummy Menuju Node-Red Menggunakan Protokol HTTP Metode GET

1. Flow chart program ESP32
   
   <img src="https://github.com/brianrahma/system-embedded/assets/82065700/02604bf3-6f4b-43d2-972e-67b6389b2692" width="500">
   
2. Flow Program mekanisme menyimpan data ke dalam database
4. 
   <img src="https://github.com/brianrahma/brian-system-embedded/assets/82065700/456fe48f-a2f3-4e14-b91a-4cf232585284" width="800">
5. Debug Node Red <br>
   <img src="https://github.com/brianrahma/brian-system-embedded/assets/82065700/a9187fb1-a98a-49f4-ae61-7e832dd61529" width="500">
6. Tabel Database <br>
   <img src="https://github.com/brianrahma/brian-system-embedded/assets/82065700/5944e8b4-6cac-48dd-b773-4bcfc587516a" width="600">

## 3. Hasil Percobaan Transmisi Data Dummy Menuju Node-Red Menggunakan Protokol HTTP Metode POST
