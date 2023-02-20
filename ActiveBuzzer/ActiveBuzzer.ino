#define BUZZ 12
#define MS 500
void setup() {
  pinMode(BUZZ,OUTPUT);
}

void alarm(int ms){
  digitalWrite(BUZZ,HIGH);
  delay(ms);
  digitalWrite(BUZZ,LOW);
  delay(ms);
}

void loop() {
  alarm(MS);
}
