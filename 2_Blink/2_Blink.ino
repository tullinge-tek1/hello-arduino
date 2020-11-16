
int blueLed = 13;

void setup() {
  pinMode(blueLed, OUTPUT);
}

void loop() {
  digitalWrite(blueLed, HIGH);
  delay(1000);
  
  digitalWrite(blueLed, LOW);
  delay(1000);
}
