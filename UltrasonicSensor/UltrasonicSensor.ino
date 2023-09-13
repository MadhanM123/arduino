#include <HCSR04.h>

#define TRIG_PIN 12
#define ECHO_PIN 11

double* num;

void setup() {
  Serial.begin(9600);
  HCSR04.begin(TRIG_PIN, ECHO_PIN); 
}

void loop() {
  num = HCSR04.measureDistanceCm();
  Serial.print(num[0]);
  Serial.println("-----");
  delay(100);
}
