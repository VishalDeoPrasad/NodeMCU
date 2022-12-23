int tilt_sensor = D6;
int ledPin = D4;
void setup() {
  pinMode(tilt_sensor, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  

}

void loop() {
  int state = digitalRead(tilt_sensor);
  if (state == 1){
    digitalWrite(ledPin, LOW);
  }
  else{
    digitalWrite(ledPin, HIGH);
  }
  
  delay(500);
  

}
