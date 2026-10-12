int readPin = 33;
int baudRate = 115200;
int delayTime = 500;

void setup() {
  Serial.begin(baudRate);
  analogSetPinAttenuation(readPin, ADC_11db);
}

void loop() {
  int raw = analogRead(readPin);
  float mv = analogReadMilliVolts(readPin);

  Serial.printf("Raw: %d | Calibrated: %.2f V\n", raw, mv / 1000.0);
  delay(delayTime);
}
