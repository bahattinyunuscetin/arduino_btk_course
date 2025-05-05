// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  tone(3, 262, 1000); // play tone 48 (C4 = 262 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
  tone(3, 294, 1000); // play tone 50 (D4 = 294 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
  tone(3, 330, 1000); // play tone 52 (E4 = 330 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
  tone(3, 349, 1000); // play tone 53 (F4 = 349 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
  tone(3, 392, 1000); // play tone 55 (G4 = 392 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
  tone(3, 440, 1000); // play tone 57 (A4 = 440 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
  tone(3, 494, 1000); // play tone 59 (B4 = 494 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
  tone(3, 523, 1000); // play tone 60 (C5 = 523 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
}