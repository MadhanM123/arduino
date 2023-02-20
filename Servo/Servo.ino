#include <Servo.h>

const int MOTOR = 8;
Servo servo;

void setup() {
  servo.attach(MOTOR);
  servo.write(90);
}

void loop() {
  servo.write(0);
  delay(500);
  servo.write(180);
  delay(500);
}
