#include <Keypad.h>

const byte rows = 4;
const byte cols = 4;

char KEYS[rows][cols] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

#define RED 10

byte ROW_PINS[rows] = {9, 8, 7, 6};
byte COL_PINS[cols] = {5, 4, 3, 2};


Keypad myPad = Keypad(makeKeymap(KEYS), ROW_PINS, COL_PINS, rows, cols);

void setup() {
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
}

void loop() {
  char pressed = myPad.getKey();

  if(pressed){
    Serial.println(pressed);
    if(pressed == '5'){
      Serial.println("Wow");
      digitalWrite(RED, HIGH);
    }
    else{
      digitalWrite(RED, LOW);
    }
  }
}
