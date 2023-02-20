#define BUZZ 8
#define MS 1000

void setup() {
  pinMode(BUZZ,OUTPUT);
  tone(BUZZ,1000,1000);
}

void loop() {
  tone(BUZZ,440); //A4
  delay(MS);

   tone(BUZZ, 494); // B4
  delay(MS);

  tone(BUZZ, 523); // C4
  delay(MS);

  tone(BUZZ, 587); // D4
  delay(MS);

  tone(BUZZ, 659); // E4
  delay(MS);

  tone(BUZZ, 698); // F4
  delay(MS);

  tone(BUZZ, 784); // G4
  delay(MS);
  
  noTone(BUZZ);
  delay(MS);
  
}
