int ledPin=D4; 
void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // LED On
  delay(500);             // delay (1000 = 1s)
  digitalWrite(ledPin, LOW);  // LED Off
  delay(500);             // delay

}
