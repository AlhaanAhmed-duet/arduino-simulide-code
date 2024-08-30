const int pins[5] = {2, 3, 4, 5, 6};  
void setup() {
	// Intialize pins using for-loop
  for (int i = 0; i <= sizeof(pins) / sizeof(pins[0]); i++) {  // Corrected length calculation
    pinMode(pins[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  forwardMove();
  Serial.println("Forward");
  delay(100);
  backwardMove();
  Serial.println("Backward");
  delay(100);
}
// Lights will move forward
void forwardMove() {
  for (int i = 0; i <= sizeof(pins) / sizeof(pins[0]); i++) {  // Corrected length calculation
    digitalWrite(pins[i], HIGH);
    delay(60);
	digitalWrite(pins[i], LOW);
  }
}
// Lights will move backward
void backwardMove() {
  for (int i = (sizeof(pins) / sizeof(pins[0])) - 1; i >= 0; i--) {  // Corrected bounds and decrement order
    digitalWrite(pins[i], HIGH);
    delay(60);
	digitalWrite(pins[i], LOW);
  }
}
