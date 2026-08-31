int one = 26;
int two = 25;
int four = 33;
int eight = 32;
int pins[] = {one, two, four, eight};

long delayStop = 750;

void setup() {
  for(int i = 0; i < 4; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void displayNumber(int num) {
  // Set each pin based on the binary bits of num
  digitalWrite(pins[0], (num & 1) ? HIGH : LOW);      // 1s place
  digitalWrite(pins[1], (num & 2) ? HIGH : LOW);      // 2s place
  digitalWrite(pins[2], (num & 4) ? HIGH : LOW);      // 4s place
  digitalWrite(pins[3], (num & 8) ? HIGH : LOW);      // 8s place
  delay(delayStop);
}

void loop() {
  displayNumber(15);  // confirmation (all bits on)
  
  for(int i = 1; i <= 10; i++) {
    displayNumber(i);
  }
  
  displayNumber(15);  // confirmation
}