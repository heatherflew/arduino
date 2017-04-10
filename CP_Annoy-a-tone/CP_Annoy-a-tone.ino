// Plays a random tone, at a random interval.
//
//
//

#include <Adafruit_CircuitPlayground.h>
 
void setup() {
  CircuitPlayground.begin();
}
 
void loop() {
  CircuitPlayground.playTone(random(0,5500 ), 100); 
  delay(random(0,60)*1000); 
}

