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
  
  bool ch3_on = (ch3_value > threshold_ch3);
  bool braking = (pwm_value < threshold);                        //correct here if necesarry//
  bool front_light_on = ch3_on;
  bool brake_light_on = (ch3_on && braking);

  if(front_light_on){
  fill_solid(front, num_front, CRGB::White);
  }
  else{
  fill_solid(front, num_front, CRGB::Black);
  }

  if(brake_light_on){
    fill_solid(back, num_back, CRGB::Red);
    
  }
  else{
    fill_solid(back, num_back, CRGB::Black);
  }


  FastLED.show();
  delay(50);
}
