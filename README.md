# 🔗 Demo Online
Simulasi proyek ini dapat Anda lihat di:

 [Jalankan langsung di Wokwi](https://wokwi.com/projects/438769936799135745) <br>
 [Tonton tutorial di YouTube](https://www.youtube.com/@Ri.tonga24)
 # Kontrol Servo dengan Potensiometer

Proyek ini mengimplementasikan kontrol servo motor menggunakan potensiometer analog. Arduino membaca nilai potensiometer dan menggerakkan servo motor sesuai sudut yang diatur secara real-time.

---

## 📦 Komponen yang Dibutuhkan

- Arduino Uno atau kompatibel  
- Servo Motor (misal SG90)  
- Potensiometer 10kΩ  
- Kabel jumper  

---

## 🔌 Skematik Rangkaian

- **Potensiometer**:  
  - VCC → 5V  
  - GND → GND  
  - Pin tengah (wiper) → Pin analog A0 Arduino  

- **Servo Motor**:  
  - VCC → 5V  
  - GND → GND  
  - Sinyal kontrol → Pin digital 9 Arduino  

---

## 🧑‍💻 Kode Arduino

```cpp
#include <Servo.h>

Servo myServo;
int potPin = A0;  // pin potensiometer
int potValue = 0; // nilai analog potensiometer
int angle = 0;    // sudut servo

void setup() {
  myServo.attach(9); // servo terkoneksi di pin digital 9
}

void loop() {
  potValue = analogRead(potPin);            // baca nilai analog 0-1023
  angle = map(potValue, 0, 1023, 0, 180);   // konversi ke sudut 0-180
  myServo.write(angle);                      // gerakkan servo ke sudut
  delay(15);                                // delay untuk pergerakan halus
}
```

## ⚙️ Penjelasan Program
Arduino membaca input analog dari potensiometer pada pin A0.

Fungsi map() mengubah rentang nilai 0–1023 menjadi 0–180 derajat servo.

Servo digerakkan ke sudut yang dihitung menggunakan myServo.write().

Delay 15 ms memberi waktu servo bergerak dengan mulus.

 ## 📷 **skema / rangkaian**

![Lampu RGB Arduino](https://github.com/Luddinritonga/Arduino-Servo-Angle-Control/blob/main/skema.png)

## 🔧 **Cara Upload**
1. Sambungkan Arduino ke PC via kabel USB
2. Buka file `.ino` di Arduino IDE
3. Pilih board dan port yang sesuai
4. Upload kode ke Arduino




## 📫 Contact Me
[![Website](https://img.shields.io/badge/Website-000000?style=for-the-badge&logo=about-dot-me&logoColor=white)](https://luddinritonga.github.io/fortopolio/)
[![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/luddinritonga)
[![Email](https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:luddinritonga03@gmail.com)
[![YouTube](https://img.shields.io/badge/YouTube-FF0000?style=for-the-badge&logo=youtube&logoColor=white)](https://www.youtube.com/@Ri.tonga24)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/luddin-ritonga-727920307?)
