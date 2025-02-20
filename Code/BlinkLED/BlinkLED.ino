int greenLED = 13;
int blueLED = 2;
int yellowLED = 4;
int whiteLED = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(whiteLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenLED, HIGH);
  delay(150);
  digitalWrite(greenLED, LOW);
  delay(150);

  digitalWrite(blueLED, HIGH);
  delay(300);
  digitalWrite(blueLED, LOW);
  delay(300);

  digitalWrite(yellowLED, HIGH);
  delay(500);
  digitalWrite(yellowLED, LOW);
  delay(500);

  digitalWrite(whiteLED, HIGH);
  delay(100);
  digitalWrite(whiteLED, LOW);
  delay(200);
}
