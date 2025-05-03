// C++ code
//
#include <Servo.h>

int potansiyometre = 0;

Servo servo_4;

void setup()
{
  pinMode(A0, INPUT);
  servo_4.attach(4, 500, 2500);
}

void loop()
{
  potansiyometre = map(analogRead(A0), 0, 1023, 0, 180);
  servo_4.write(potansiyometre);
  delay(10); // Delay a little bit to improve simulation performance
}