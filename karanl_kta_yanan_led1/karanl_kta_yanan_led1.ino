// C++ code
//
void setup()
{
  pinMode(A1, INPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  if (analogRead(A1) < 500) {
    digitalWrite(4, HIGH);
  }
  digitalWrite(4, LOW);
  delay(10); // Delay a little bit to improve simulation performance
}