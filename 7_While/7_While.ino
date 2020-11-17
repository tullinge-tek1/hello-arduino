
int blueLed = 13;
int redLed = 10;

void startupFlash() {
  int i = 0;
  while (i < 5) {
    digitalWrite(blueLed, HIGH);
    digitalWrite(redLed, HIGH);
    delay(100);

    digitalWrite(blueLed, LOW);
    digitalWrite(redLed, LOW);
    delay(100);

    i = i + 1; // Ökar variabeln i med ett. Kan även skrivas i++
  }
}

void setup() {
  pinMode(blueLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  Serial.begin(9600);

  Serial.println("I have started");
  startupFlash();
}

void loop() {
  digitalWrite(blueLed, HIGH);
  digitalWrite(redLed, LOW);
  Serial.println("Blue is the best color!");
  delay(1000);
  
  digitalWrite(blueLed, LOW);
  digitalWrite(redLed, HIGH);
  Serial.println("Red is the best color!");
  delay(1000);
}
