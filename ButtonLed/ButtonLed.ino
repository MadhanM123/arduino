#define LEDPIN 5
#define APIN 9
#define BPIN 8


void setup() {
  Serial.begin(9600);
  pinMode(LEDPIN,OUTPUT);
  pinMode(APIN,INPUT_PULLUP);
  pinMode(BPIN,INPUT_PULLUP);
}

void loop() {
  Serial.println(digitalRead(APIN));
  if(digitalRead(APIN) == LOW){
    digitalWrite(LEDPIN,HIGH);
  }
  if(digitalRead(BPIN) == LOW){
    digitalWrite(LEDPIN,LOW);
  }
}
