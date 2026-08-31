int green = 25;
int yellow = 33;
int red = 32;
long delayStop = 650;

void setup() {
  // put your setup code here, to run once:
  pinMode(green, OUTPUT);  //green
  pinMode(yellow, OUTPUT);  //yellow
  pinMode(red, OUTPUT);  //red
}

void loop() {
  // put your main code here, to run repeatedly:
  //seq 1
  digitalWrite(green, HIGH);
  digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  delay(delayStop);

  //seq 2
  digitalWrite(green, HIGH);
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  delay(delayStop);

  //seq 3
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  delay(delayStop);

  //seq 4
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  delay(delayStop);

  //seq 4
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  delay(delayStop);

  //seq 5
  digitalWrite(green, HIGH);
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  delay(delayStop);
}
