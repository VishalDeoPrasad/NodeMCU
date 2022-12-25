int ledPin = D6;
int switchPin = D5;
int state;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  state = digitalRead(switchPin);
  Serial.print("Sensor Current Value : ");
  Serial.print(state);
  if (state == 0){
    digitalWrite(ledPin, HIGH);
    Serial.println("LED ON");
  }
  else{
    digitalWrite(ledPin, LOW);
    Serial.println("LED OFF");
  }
}
