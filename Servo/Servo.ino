#include <Servo.h>

const int MOTOR = 8;
const int BLUE = 4;
const int GREEN = 2;
Servo servo;

void setup() {
  servo.attach(MOTOR);
  servo.write(90);
  pinMode(BLUE,OUTPUT);
  pinMode(GREEN,OUTPUT);
}

void loop() {
  servo.write(0);
  digitalWrite(BLUE,HIGH);
  delay(2000);
  digitalWrite(BLUE,LOW);
  servo.write(180);
  digitalWrite(GREEN,HIGH);
  delay(2000);
}
