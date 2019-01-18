int pin = A0;
int pwm_value;
void setup() {
  pinMode(pin, INPUT);
  Serial.begin(115200);

}

void loop() {
  pwm_value = pulseIn(pin, HIGH);
  Serial.println(pwm_value);

}
