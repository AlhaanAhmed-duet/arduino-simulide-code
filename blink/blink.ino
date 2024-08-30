int inputPin = 2;
int ledPin = 8;
void setup() {
	pinMode(ledPin, OUTPUT);
	pinMode(inputPin, INPUT);
	Serial.begin(9600);
	
}
void loop() {
	if (digitalRead(inputPin)) {
		digitalWrite(ledPin, HIGH);
		Serial.println("Button On, LED Turned On");
	}
	else {
		digitalWrite(ledPin, LOW);
		Serial.println("Button Off, LED Turned OFF");
	}
	
}