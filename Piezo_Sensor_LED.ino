int piezo_sensor = D5;
int ledPin = D6;
int val;
void setup() {
  pinMode(piezo_sensor, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  val = digitalRead(piezo_sensor);
  Serial.print("Sensor Reading : ");
  Serial.println(val);
  if (val == 1){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }

}
