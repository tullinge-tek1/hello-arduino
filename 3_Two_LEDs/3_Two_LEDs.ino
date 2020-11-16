
int blueLed = 13;
int redLed = 10;

void setup() {
  pinMode(blueLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop() {
  digitalWrite(blueLed, HIGH);
  digitalWrite(redLed, LOW);
  delay(1000);
  
  digitalWrite(blueLed, LOW);
  digitalWrite(redLed, HIGH);
  delay(1000);
}
