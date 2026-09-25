int readPin = 33;
float V2 = 0;
int readVal;
int budrate = 9600;
int delayTime = 600;

void setup() {
  pinMode(readPin, INPUT);
  Serial.begin(budrate);
}

void loop() {
  readVal = analogRead(readPin);

  // Esp 32 chips have 12 bit on like the 10 pin of the uno so 4095 instead of 1023
  // ESp 32 Read pins are capped at 3.3 not 5v
  V2 = (3.3 / 4095.) * readVal;

  Serial.println(V2);
  delay(delayTime);
}
