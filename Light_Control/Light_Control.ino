#define FASTLED_ALLOW_INTERRUPTS 1
#include "FastLED.h"
#define NUM_LEDS_PER_STRIP 5
CRGB front[NUM_LEDS_PER_STRIP];
CRGB back[NUM_LEDS_PER_STRIP]; 
const int on = yournumber;        //insert your number here//

int pin = A0;
int pwm_value;
void setup() {
  pinMode(pin, INPUT);
  FastLED.addLeds<NEOPIXEL, 5>(front, NUM_LEDS_PER_STRIP);
  FastLED.addLeds<NEOPIXEL, 6>(back, NUM_LEDS_PER_STRIP);
}

void loop() {
  front[0] = CRGB::White;
  front[1] = CRGB::White;
  front[2] = CRGB::White;
  front[3] = CRGB::White;
  front[4] = CRGB::White;
  FastLED.show();
  pwm_value = pulseIn(pin, HIGH);
  if (pwm_value < on) {                               //correct here//
    back[0] = CRGB::Red;
    back[1] = CRGB::Red;
    back[2] = CRGB::Red;
    back[3] = CRGB::Red;
    back[4] = CRGB::Red;
    FastLED.show();
  }
  else {
    FastLED.clear (back);


  }


}
