int one = 26;
int two = 25;
int four = 33;
int eight = 32;

long delayStop = 750;

void setup() {
  pinMode(one, OUTPUT);
  pinMode(two, OUTPUT);
  pinMode(four, OUTPUT);
  pinMode(eight, OUTPUT);
}

void loop() {

  // confirmation
  digitalWrite(one, HIGH);
  digitalWrite(two, HIGH);
  digitalWrite(four, HIGH);
  digitalWrite(eight, HIGH);
  delay(delayStop);

  // 1
  digitalWrite(one, HIGH);
  digitalWrite(two, LOW);
  digitalWrite(four, LOW);
  digitalWrite(eight, LOW);
  delay(delayStop);

  // 2
  digitalWrite(one, LOW);
  digitalWrite(two, HIGH);
  digitalWrite(four, LOW);
  digitalWrite(eight, LOW);
  delay(delayStop);

  // 3
  digitalWrite(one, HIGH);
  digitalWrite(two, HIGH);
  digitalWrite(four, LOW);
  digitalWrite(eight, LOW);
  delay(delayStop);

  // 4
  digitalWrite(one, LOW);
  digitalWrite(two, LOW);
  digitalWrite(four, HIGH);
  digitalWrite(eight, LOW);
  delay(delayStop);

  // 5
  digitalWrite(one, HIGH);
  digitalWrite(two, LOW);
  digitalWrite(four, HIGH);
  digitalWrite(eight, LOW);
  delay(delayStop);

  // 6
  digitalWrite(one, LOW);
  digitalWrite(two, HIGH);
  digitalWrite(four, HIGH);
  digitalWrite(eight, LOW);
  delay(delayStop);

  // 7
  digitalWrite(one, HIGH);
  digitalWrite(two, HIGH);
  digitalWrite(four, HIGH);
  digitalWrite(eight, LOW);
  delay(delayStop);

  // 8
  digitalWrite(one, LOW);
  digitalWrite(two, LOW);
  digitalWrite(four, LOW);
  digitalWrite(eight, HIGH);
  delay(delayStop);

  // 9
  digitalWrite(one, HIGH);
  digitalWrite(two, LOW);
  digitalWrite(four, LOW);
  digitalWrite(eight, HIGH);
  delay(delayStop);

  // 10
  digitalWrite(one, LOW);
  digitalWrite(two, HIGH);
  digitalWrite(four, LOW);
  digitalWrite(eight, HIGH);
  delay(delayStop);

  // 11
  digitalWrite(one, HIGH);
  digitalWrite(two, HIGH);
  digitalWrite(four, LOW);
  digitalWrite(eight, HIGH);
  delay(delayStop);

  // 12
  digitalWrite(one, LOW);
  digitalWrite(two, LOW);
  digitalWrite(four, HIGH);
  digitalWrite(eight, HIGH);
  delay(delayStop);

  // 13
  digitalWrite(one, HIGH);
  digitalWrite(two, LOW);
  digitalWrite(four, HIGH);
  digitalWrite(eight, HIGH);
  delay(delayStop);

  // 14
  digitalWrite(one, LOW);
  digitalWrite(two, HIGH);
  digitalWrite(four, HIGH);
  digitalWrite(eight, HIGH);
  delay(delayStop);

  // 15
  digitalWrite(one, HIGH);
  digitalWrite(two, HIGH);
  digitalWrite(four, HIGH);
  digitalWrite(eight, HIGH);
  delay(delayStop);

  // confirmation
  digitalWrite(one, HIGH);
  digitalWrite(two, HIGH);
  digitalWrite(four, HIGH);
  digitalWrite(eight, HIGH);
  delay(delayStop);
}
