int lbPin = D4;
int ledPin = D3;
int state;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(lbPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  state = digitalRead(lbPin);
  Serial.print("Sensor Current Value : ");
  Serial.print(state);
  if (state == 1){
    digitalWrite(ledPin, HIGH);
    Serial.println("led ON");
  }
  else{
    digitalWrite(ledPin, LOW);
    Serial.println("led OFF");
  }
}
