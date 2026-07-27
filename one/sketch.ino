void setup() {
  //Load the resource
  pinMode(13, OUTPUT);
}

void loop() {
  // Turn On 
  digitalWrite(13, HIGH);

  // Delay
  delay(900);

  //Turn off 
  digitalWrite(13, LOW);

  // Delay
  delay(500);
}
