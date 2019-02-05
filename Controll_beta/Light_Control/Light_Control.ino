//open source esk8 brake light controller by Mich21050//

#define FASTLED_ALLOW_INTERRUPTS 1
#include "FastLED.h"
#include "config.h"
CRGB front[num_front];
CRGB back[num_back];
#define input_pin  A0
int pwm_value;
#define front_pin 6
#define back_pin 5
#define ch3 A1
int ch3_value;

void setup() {
  pinMode(input_pin, INPUT);
  FastLED.addLeds<NEOPIXEL, front_pin>(front, num_front);
  FastLED.addLeds<NEOPIXEL, back_pin>(back, num_back);
  pinMode(ch3, INPUT);
  
}

void loop() {
  pwm_value = pulseIn(input_pin, HIGH);
  ch3_value = pulseIn(ch3, HIGH);
  if(ch3_value > threshold_ch3){
     fill_solid(front, num_front, CRGB::White);
     FastLED.show();
  }
     
     if(ch3_value > threshold_ch3){
     if (pwm_value < threshold) {                               //correct here if necesarry//
      fill_solid(back, num_back, CRGB::Red);
      FastLED.show();
       }
      else {
      FastLED.clear (back);
      }
  }
}
