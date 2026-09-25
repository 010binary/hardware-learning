int ledPinOne = 26;
int ledPinTwo = 25;
int ledPinThree = 33;
int ledPinFour = 32;

int off = 0;
int lowest = 50;
int low = 100;
int mid = 150;
int high = 200;
int highest = 250;
int maxBright = 255;

int gap = 500;
int hold = 2000;


void setup() {
  pinMode(ledPinOne, OUTPUT);
  pinMode(ledPinTwo, OUTPUT);
  pinMode(ledPinThree, OUTPUT);
  pinMode(ledPinFour, OUTPUT);
}

void loop() {
  // All off (no signal)
  analogWrite(ledPinOne, off);
  analogWrite(ledPinTwo, off);
  analogWrite(ledPinThree, off);
  analogWrite(ledPinFour, off);
  delay(gap);

  // Bar 1 fades in: low -> mid -> high
  analogWrite(ledPinOne, lowest);
  delay(gap);
  analogWrite(ledPinOne, low);
  delay(gap);
  analogWrite(ledPinOne, mid);
  delay(gap);
  analogWrite(ledPinOne, high);
  delay(gap);
  analogWrite(ledPinOne, highest);
  delay(gap);
  analogWrite(ledPinOne, maxBright);
  delay(gap);

  // Bar 2 fades in
  analogWrite(ledPinTwo, lowest);
  delay(gap);
  analogWrite(ledPinTwo, low);
  delay(gap);
  analogWrite(ledPinTwo, mid);
  delay(gap);
  analogWrite(ledPinTwo, high);
  delay(gap);
  analogWrite(ledPinTwo, highest);
  delay(gap);
  analogWrite(ledPinTwo, maxBright);
  delay(gap);

  // Bar 3 fades in
  analogWrite(ledPinThree, lowest);
  delay(gap);
  analogWrite(ledPinThree, low);
  delay(gap);
  analogWrite(ledPinThree, mid);
  delay(gap);
  analogWrite(ledPinThree, high);
  delay(gap);
  analogWrite(ledPinThree, highest);
  delay(gap);
  analogWrite(ledPinThree, maxBright);
  delay(gap);

  // Bar 4 fades in — full signal
  analogWrite(ledPinFour, lowest);
  delay(gap);
  analogWrite(ledPinFour, low);
  delay(gap);
  analogWrite(ledPinFour, mid);
  delay(gap);
  analogWrite(ledPinFour, high);
  delay(gap);
  analogWrite(ledPinFour, highest);
  delay(gap);
  analogWrite(ledPinFour, maxBright);
  delay(gap);

  delay(hold);
}