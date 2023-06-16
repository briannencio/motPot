int pot;
int green = 6;
int red = 9;

void setup() {
	Serial.begin(9600);
	pinMode(A0, INPUT);
	pinMode(green,OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(red, OUTPUT);
	pinMode(5, OUTPUT);
}

void loop() {
	pot = analogRead(A0);
	Serial.println(pot);

	if (pot > 510)
	{
		analogWrite(green, pot / 4);
		analogWrite(red, LOW);

		digitalWrite(3, HIGH);
		delay(500);

		digitalWrite(3, LOW);
		delay(500);
	}
	else 
	{
		analogWrite(green, LOW);
		analogWrite(red, pot / 4);
		
		digitalWrite(5, HIGH);
		delay(500);

		digitalWrite(5, LOW);
		delay(500);
	}
}
