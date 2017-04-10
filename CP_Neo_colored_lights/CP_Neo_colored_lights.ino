// This just lights up the 10 neopixels with the same color
// color is changed when the left button is pushed
// color cycles in the following order
// (red/orange/yellow/green/blue/purple/white)
// 

#include <Adafruit_CircuitPlayground.h>

uint8_t color = 0;
uint8_t onoff = 1;
int Rpix[]={255,255,255,0,0,127,255};
int Gpix[]={0,128,255,255,0,0,255};
int Bpix[]= {0,0,0,0,255,255,255};
void setup() {
  CircuitPlayground.begin();
  randomSeed(analogRead(0));
}

void loop() {
  //CircuitPlayground.clearPixels();
  //delay(500);
  CircuitPlayground.setPixelColor(0, Rpix[color]*onoff,Gpix[color]*onoff,Bpix[color]*onoff);
  CircuitPlayground.setPixelColor(1, Rpix[color]*onoff,Gpix[color]*onoff,Bpix[color]*onoff);
  CircuitPlayground.setPixelColor(2, Rpix[color]*onoff,Gpix[color]*onoff,Bpix[color]*onoff);
  CircuitPlayground.setPixelColor(3, Rpix[color]*onoff,Gpix[color]*onoff,Bpix[color]*onoff);
  CircuitPlayground.setPixelColor(4, Rpix[color]*onoff,Gpix[color]*onoff,Bpix[color]*onoff);
  CircuitPlayground.setPixelColor(5, Rpix[color]*onoff,Gpix[color]*onoff,Bpix[color]*onoff);
  CircuitPlayground.setPixelColor(6, Rpix[color]*onoff,Gpix[color]*onoff,Bpix[color]*onoff);
  CircuitPlayground.setPixelColor(7, Rpix[color]*onoff,Gpix[color]*onoff,Bpix[color]*onoff);
  CircuitPlayground.setPixelColor(8, Rpix[color]*onoff,Gpix[color]*onoff,Bpix[color]*onoff);
  CircuitPlayground.setPixelColor(9, Rpix[color]*onoff,Gpix[color]*onoff,Bpix[color]*onoff);
  
   if (CircuitPlayground.leftButton()) {
    Serial.println("Left button pressed!");
    Serial.println(color);
    color++;
    if (color > 7) {
       color = 0;
    }
    
  }

 if (CircuitPlayground.rightButton()) {
    
    Serial.println("Right button pressed!");
    onoff++;
    onoff = onoff %2;
  }

  
  delay(150);
}
