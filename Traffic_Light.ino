int red = 13;
int yellow = 12;
int green = 11;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  delay(5000);

  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(2000);

  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(5000);
}
