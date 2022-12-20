int relayIn1=D1;
int relayIn2=D2;
void setup() {
  pinMode(relayIn1, OUTPUT);
  pinMode(relayIn2, OUTPUT);
}

void loop() {
  digitalWrite(relayIn1, LOW);
  delay(2000);
  digitalWrite(relayIn1, HIGH);
  
  digitalWrite(relayIn2, LOW);
  delay(2000);
  digitalWrite(relayIn2, HIGH);
}
