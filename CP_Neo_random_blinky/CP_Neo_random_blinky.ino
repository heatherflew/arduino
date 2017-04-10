// This randomly lights up and turns off the neopixels, with random
// colors. To simulate the blinky "lights" you see on scifi 
// computers
//
//


#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();
  randomSeed(analogRead(0));
}

void loop() {
  //CircuitPlayground.clearPixels();
  //delay(500);
  CircuitPlayground.setPixelColor(random(0,10), 0,0,0);
  CircuitPlayground.setPixelColor(random(0,10), 0,0,0);
  CircuitPlayground.setPixelColor(random(0,10), random(0,255),   random(0,255),   random(0,255));
  CircuitPlayground.setPixelColor(random(0,10), random(0,255),   random(0,255),   random(0,255));
  CircuitPlayground.setPixelColor(random(0,10), random(0,255),   random(0,255),   random(0,255));
  //CircuitPlayground.setPixelColor(1, random(0,255),   random(0,255),   random(0,255));
  //CircuitPlayground.setPixelColor(2, random(0,255),   random(0,255),   random(0,255));
  //CircuitPlayground.setPixelColor(3, random(0,255),   random(0,255),   random(0,255));
  //CircuitPlayground.setPixelColor(4, random(0,255),   random(0,255),   random(0,255));
  //CircuitPlayground.setPixelColor(5, random(0,255),   random(0,255),   random(0,255));
  //CircuitPlayground.setPixelColor(6, random(0,255),   random(0,255),   random(0,255));
  //CircuitPlayground.setPixelColor(7, random(0,255),   random(0,255),   random(0,255));
  //CircuitPlayground.setPixelColor(8, random(0,255),   random(0,255),   random(0,255));
  //CircuitPlayground.setPixelColor(9, random(0,255),   random(0,255),   random(0,255));
  
  
  delay(50);
}
