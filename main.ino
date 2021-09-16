int ledpin = // Led port
int threshold = // Set threshold of
int volume;
int knockSensor = A0;
int sensorReading = 0;
int ledState = LOW;

void setup() {
	Serial.begin(9600);
	pinMode(ledPin, OUTPUT);
}

void loop() {
	volume = analogRead(A0);

	if(volume>=threshold){
		digitalWrite(ledPin, HIGH);
		ledState = !ledState;
		digitalWrite(ledPin, ledState);
		delay(100);
	}
}