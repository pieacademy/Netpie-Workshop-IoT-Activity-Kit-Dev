int buzzerPin = D8;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  tone(buzzerPin, 440);
  delay(500);
  tone(buzzerPin, 587);
  delay(500);
}
