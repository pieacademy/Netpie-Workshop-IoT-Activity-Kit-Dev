#define LED D2

int brightness = 0;
int fadeAmount = 10;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  analogWrite(LED, brightness);
  brightness = brightness + fadeAmount;
  
  if (brightness <= 0 || brightness >= 1023) {
    fadeAmount = -fadeAmount;
  }
  
  delay(30);
}