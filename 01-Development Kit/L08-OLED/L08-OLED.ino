#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET -1
Adafruit_SSD1306 OLED(OLED_RESET);

void setup(){
Serial.begin(115200);
  	OLED.begin(SSD1306_SWITCHCAPVCC, 0x3C);

OLED.clearDisplay();
  	OLED.setTextColor(WHITE);
  	OLED.setCursor(0, 0);
  	OLED.setTextSize(1);
  	OLED.println("Hello OLED!");
  	OLED.display();
}
void loop(){}
