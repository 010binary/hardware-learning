int readPin = 33;
int budRate = 115200;

int readVal;
float V2 = 0;

int delayTime = 500;

void setup() {
  pinMode(readPin, INPUT);
  Serial.begin(budRate);
}

void loop() {
  readVal = analogRead(readPin);

  V2 = (3.3 / 4095.) * readVal;

  Serial.print(V2);
  delay(delayTime);
}
