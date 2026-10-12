int readPin = 34;
int greenLED = 25;
int redLED = 26;
int yellowLED = 27;
int baudRate = 115200;


void setup() {
  pinMode(readPin, INPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  Serial.begin(baudRate);
}

void loop() {
  float volt = analogReadMilliVolts(readPin) / 1000.0;
  Serial.printf("Voltage: %.2f V\n", volt);
  exec(volt);
  delay(500);
}

void exec(float volt) {
  if (volt < 1.0) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, LOW);
  } else if (volt < 2.0) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, HIGH);
    digitalWrite(yellowLED, LOW);
  } else {
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, HIGH);
    digitalWrite(yellowLED, HIGH);
  }
}