//open source esk8 brake light controller by Mich21050//

int pin = A1;
int pwm_value;
void setup() {
  pinMode(pin, INPUT);
  Serial.begin(115200);

}

void loop() {
  pwm_value = pulseIn(pin, HIGH);
  Serial.println(pwm_value);

}
