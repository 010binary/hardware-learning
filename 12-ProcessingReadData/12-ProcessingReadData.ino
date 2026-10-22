String const message1 = "What LED do you want to blink (green / red / yellow)?";
String const message2 = "How many times do you want to blink this LED?";
String answer1;
int answer2;

int const baudrate = 9600;

int green = 32;
int red = 33;
int yellow = 25;

struct LED {
  const char* name;
  int pin;
};

LED leds[] = {
  { "green", green },
  { "red", red },
  { "yellow", yellow }
};


void setup() {
  Serial.begin(baudrate);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void loop() {
  // Data 1
  Serial.println(message1);
  while (Serial.available() == 0) {}
  answer1 = Serial.readStringUntil('\n');
  answer1.trim();
  answer1.toLowerCase();

  // Data 2
  Serial.println(message2);
  while (Serial.available() == 0) {}
  answer2 = Serial.parseInt();

  // Discard the leftover '\n' / '\r' after the number
  while (Serial.available() > 0) {
    Serial.read();
  }

  bool found = false;

  for (const auto& led : leds) {
    if (answer1 == led.name) {
      blinker(led.pin, answer2, led.name);
      found = true;
      break;
    }
  }

  if (!found) {
    Serial.println("Unknown LED, try again.");
  }
}

void blinker(int pin, int times, String colour) {
  for (int i = 0; i < times; i++) {
    digitalWrite(pin, HIGH);
    Serial.printf("blink %s %d\n", colour.c_str(), i + 1);
    delay(500);
    digitalWrite(pin, LOW);
    delay(500);
  }
}
