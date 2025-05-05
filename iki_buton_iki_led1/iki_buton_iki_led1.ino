// C++ code
//
int button = 0;

int LED = 0;

int BUTON2 = 0;

void setup()
{
  pinMode(8, INPUT);
  pinMode(7, INPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  BUTON2 = digitalRead(8);
  button = digitalRead(7);
  if (button == 1) {
    digitalWrite(3, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  if (BUTON2 == 1) {
    digitalWrite(2, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
}