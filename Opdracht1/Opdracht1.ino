int led_R = 4;
int led_G = 3;
int led_B = 2;

int vt = 500;

void off(){
  digitalWrite(led_G, HIGH);
  digitalWrite(led_B, HIGH);
  digitalWrite(led_R, HIGH);
}
void red(){
  digitalWrite(led_R, LOW);
}

void blue(){
  digitalWrite(led_B, LOW);
}

void green(){
  digitalWrite(led_G, LOW);
}

void setup() {
pinMode(led_R, OUTPUT);
pinMode(led_G, OUTPUT);
pinMode(led_B, OUTPUT);

}

void loop() {
off();
red();
delay(vt);
off();
green();
delay(vt);
off();
blue();
delay(vt);
off();
green();
red();
delay(vt);
off();
blue();
red();
delay(vt);
off();
blue();
green();
delay(vt);
off();
blue();
red();
green();
delay(vt);
}
