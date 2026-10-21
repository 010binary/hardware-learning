const int serialPort = 9600;
String msg = "Please Enter a Number: ";
int userInput;

void setup() {
  Serial.begin(serialPort);
}

void loop() {
  // Prompt the user to enter a number
  Serial.println(msg);

  // Block here until at least one byte arrives in the serial buffer.
  // available() returns the number of bytes waiting to be read.
  while (Serial.available() == 0) {}

  // Read the incoming characters and convert them to an integer.
  userInput = Serial.parseInt();

  // Clear any leftover characters (e.g. the '\n' or '\r' that the Serial
  // Monitor appends when you press Enter). Without this, the next loop
  // would see stale data in the buffer, skip the wait, and parseInt()
  // would return a false 0.
  while (Serial.available() > 0) {
    Serial.read();
  }

  // Print the value that was read
  Serial.print("Inputted Number is: ");
  Serial.println(userInput);
}
