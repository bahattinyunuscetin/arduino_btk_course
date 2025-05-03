// C++ code
//
int kemer = 0;

int kuvvet = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(7, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A0));
  kemer = digitalRead(7);
  kuvvet = analogRead(A0);
  if (kuvvet > 200) {
    if (kemer == 1) {
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
    } else {
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
      tone(6, 523, 100); // play tone 60 (C5 = 523 Hz)
    }
  } else {
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
}