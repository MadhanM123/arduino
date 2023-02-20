// Define pins
#define RED 6
#define GREEN 5
#define BLUE 3
#define delayTime 30


void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

void fade(int curPin, int newPin) {
  for (int i = 0; i < 255; i++) {
    analogWrite(curPin, 255 - i);
    analogWrite(newPin, i);
    delay(delayTime);
  }
}

void loop() {
  fade(RED, GREEN);
  fade(GREEN, BLUE);
  fade(BLUE, RED);
}
