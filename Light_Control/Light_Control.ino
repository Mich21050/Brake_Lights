#define FASTLED_ALLOW_INTERRUPTS 1
#include "FastLED.h"
#define NUM_LEDS_PER_STRIP 5
CRGB front[NUM_LEDS_PER_STRIP];
CRGB back[NUM_LEDS_PER_STRIP]; 
const int on = 1474;
int pin = A0;
int pwm_value;
void setup() {
  pinMode(pin, INPUT);
  FastLED.addLeds<NEOPIXEL, 5>(front, NUM_LEDS_PER_STRIP);
  FastLED.addLeds<NEOPIXEL, 6>(back, NUM_LEDS_PER_STRIP);
}

void loop() {
  fill_solid(front, NUM_LEDS_PER_STRIP, CRGB::White);
  FastLED.show();
  pwm_value = pulseIn(pin, HIGH);
  if (pwm_value < on) {
    fill_solid(back, NUM_LEDS_PER_STRIP, CRGB::Red);
    FastLED.show();
  }
  else {
    FastLED.clear (back);


  }


}
