//open source esk8 brake light controller by Mich21050//

#define FASTLED_ALLOW_INTERRUPTS 1
#include "FastLED.h"
#include "config.h"
CRGB front[num_front];
CRGB back[num_back];
#define input_pin  A0
int pwm_value;
#define front_pin 5
#define back_pin 6
void setup() {
  pinMode(input_pin, INPUT);
  FastLED.addLeds<NEOPIXEL, front_pin>(front, num_front);
  FastLED.addLeds<NEOPIXEL, back_pin>(back, num_back);
}

void loop() {
  fill_solid(front, num_front, CRGB::White);
  FastLED.show();
  pwm_value = pulseIn(input_pin, HIGH);
  if (pwm_value < threshold) {                               //correct here if necesarry//
    fill_solid(back, num_back, CRGB::Red);
    FastLED.show();
  }
  else {
    FastLED.clear (back);
  }
}
