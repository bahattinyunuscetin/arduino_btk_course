// C++ code
//
void setup()
{
  pinMode(4, INPUT);
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  Serial.println(digitalRead(4));
  if (digitalRead(4) == 0) {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    tone(9, 523, 500); // play tone 60 (C5 = 523 Hz)
    delay(1000); // Wait for 1000 millisecond(s)
  }
}