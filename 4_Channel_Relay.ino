int relayIn1=D1;
int relayIn2=D2;
int relayIn3=D3;
int relayIn4=D4;
void setup() {
  pinMode(relayIn1, OUTPUT);
  pinMode(relayIn2, OUTPUT);
  pinMode(relayIn3, OUTPUT);
  pinMode(relayIn4, OUTPUT);

}

void loop() {
  digitalWrite(relayIn1, HIGH);
  delay(2000);
  digitalWrite(relayIn1, LOW);

  digitalWrite(relayIn2, HIGH);
  delay(2000);
  digitalWrite(relayIn2, LOW);
 
  digitalWrite(relayIn3, HIGH);
  delay(2000);
  digitalWrite(relayIn3, LOW);

  digitalWrite(relayIn4, HIGH);
  delay(2000);
  digitalWrite(relayIn4, LOW);
  

}
