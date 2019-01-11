int pin = A0;
int pwm_value;
const int on = 1480;
int ledf = 12;
int ledr = 13;
void setup() {
  pinMode(pin, INPUT);
  Serial.begin(115200);
  pinMode(ledf, OUTPUT);
  pinMode(ledr, OUTPUT);
}

void loop() {
  digitalWrite(ledf, HIGH);
  pwm_value = pulseIn(pin, HIGH);
  if (pwm_value < on){
    Serial.println("on");
    digitalWrite(ledr, HIGH);
  }
  else{
    Serial.println("off");
    digitalWrite(ledr, LOW);
  }
  

}
