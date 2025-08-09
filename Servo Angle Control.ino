#include <Servo.h>

Servo myServo;
int potPin = A0;  // pin potensiometer
int potValue = 0; // nilai analog
int angle = 0;    // sudut servo

void setup() {
  myServo.attach(9); // servo di pin D9
}

void loop() {
  potValue = analogRead(potPin);           // baca nilai 0-1023
  angle = map(potValue, 0, 1023, 0, 180);  // konversi ke 0-180 derajat
  myServo.write(angle);                    // gerakkan servo
  delay(15); // jeda untuk pergerakan halus
}
