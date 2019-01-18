#include "FastLED.h"
#define NUM_LEDS_PER_STRIP 5
CRGB front[NUM_LEDS_PER_STRIP];
CRGB back[NUM_LEDS_PER_STRIP];

void setup() {
  FastLED.addLeds<NEOPIXEL, 5>(front, NUM_LEDS_PER_STRIP);
  FastLED.addLeds<NEOPIXEL, 6>(back, NUM_LEDS_PER_STRIP);

}

void loop() {
  fill_solid(front, NUM_LEDS_PER_STRIP, CRGB::White);
  FastLED.show();
  delay(30);
  fill_solid(back, NUM_LEDS_PER_STRIP, CRGB::Red);
  FastLED.show();
  delay(30);
  




}
