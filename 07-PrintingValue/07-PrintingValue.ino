int n = 255;
float v = 1.72643;
int delayRate = 500;

void setup() { Serial.begin(115200); }

void loop() {
  Serial.println("--- print vs println ---");
  Serial.print("a");
  Serial.print("b");
  Serial.println("c");

  delay(delayRate);

  Serial.println("--- float precision ---");
  Serial.println(v);
  Serial.println(v, 4);

  delay(delayRate);

  Serial.println("--- number bases ---");
  Serial.println(n, DEC);
  Serial.println(n, HEX);
  Serial.println(n, BIN);

  delay(delayRate);

  Serial.println("--- printf ---");
  Serial.printf("n=%d  v=%.3f\n", n, v);

  delay(delayRate);
}
