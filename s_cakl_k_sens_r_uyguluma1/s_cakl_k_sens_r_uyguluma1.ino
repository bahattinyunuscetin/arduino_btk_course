// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  if ((-40 + 0.488155 * (analogRead(A0) - 20)) >= 35) {
    digitalWrite(2, HIGH);
    tone(3, 523, 100); // play tone 60 (C5 = 523 Hz)
  }
  digitalWrite(2, LOW);
  delay(10); // Delay a little bit to improve simulation performance
}