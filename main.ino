// DONT FORGET TO SET PINS

int count = 0;
int relay = 0;
int led = 5;

void setup() {
	pinMode(3, OUTPUT);
	pinMode(led, OUTPUT);
}

void loop() {
	digitalWrite(led, LOW);
	count = analogRead(4);
	if(count > 200 && count < 600);
	{
		delay(250);
		for(int t=0; t<=500; t++)
		{
			delay(1);
			count=analogRead(4);
			if(count > 200 && count < 600)
			{
				relay = !relay;
				digitalWrite(led, HIGH);
				break;
				delay(200);
			}
		}
	}
	digitalWrite(3, relay);
}
