const int TILTPIN = 12;
const int LEDPIN = 4;

void setup() {
  pinMode(TILTPIN,INPUT_PULLUP);
  pinMode(LEDPIN,OUTPUT);
}

void loop() {
  if(digitalRead(TILTPIN)){
    digitalWrite(LEDPIN,LOW);
  }
  else{
    digitalWrite(LEDPIN,HIGH);
  }
}
