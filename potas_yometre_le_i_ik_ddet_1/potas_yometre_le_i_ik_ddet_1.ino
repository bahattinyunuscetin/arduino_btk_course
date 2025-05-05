// C++ code
//
int POT = 0;

int LED = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  POT = analogRead(A0);
  LED = map(POT, 0, 1023, 0, 255);
  analogWrite(11, LED);
  delay(10); // Delay a little bit to improve simulation performance
}