# UltrasonicLED
Program ini adalah program untuk mendeteksi sesuatu dalam jarak 10cm, 20cm, dan 30cm dengan sensor ultrasonic HC-SR04.
Alat yang digunakan adalah Arduino Uno dan sensor Ultrasonic HC-SR04 serta 3 buah LED.
Program ini saya ambil dari tutorial yang ada di https://kelasrobot.com/cara-mudah-program-sensor-ultrasonic-dengan-arduino-tanpa-library/ dan saya modifikasi dengan menambahkan 3 buah led.

Berikut skematik alatnya :
1. Pasang pin VCC HC-SR04 ke pin 5V Arduino
2. Pasang pin Trig HC-SR04 ke pin 3 Arduino
3. Pasang pin Echo HC-SR04 ke pin 2 Arduino
4. Pasang pin GND HC-SR04 ke pin GND Arduino
5. Pasang semua pin pendek LED ke GND Arduino
6. Pasang pin panjang LED pertama ke pin 5 Arduino
7. Pasang pin panjang LED kedua ke pin 7 Arduino
8. Pasang pin panjang LED ketiga ke pin 8 Arduino