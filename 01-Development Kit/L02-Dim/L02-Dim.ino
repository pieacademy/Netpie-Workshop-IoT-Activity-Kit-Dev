int brightness = 0;
int fadeAmount = 10;

void setup() {
  pinMode(D2, OUTPUT);
}

void loop() {
  analogWrite(D2, brightness);
  brightness = brightness + fadeAmount;
  
  if (brightness <= 0 || brightness >= 1023) {
    fadeAmount = -fadeAmount;
  }
  
  delay(30);
}
