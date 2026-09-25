int readPin = 33;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int raw = analogRead(readPin);
  float volts = analogReadMilliVolts(readPin) / 1000.0;
  Serial.printf("raw: %4d   volts: %.3f\n", raw, volts);
  delay(600);
}
