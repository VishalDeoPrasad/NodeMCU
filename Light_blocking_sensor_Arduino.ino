int lb_sensor = D4;
void setup() {
  pinMode(lb_sensor, INPUT);
  Serial.begin(9600);

}

void loop() {
  int state = digitalRead(lb_sensor);
  Serial.print("Sensor State : ");
  Serial.println(state);
  delay(500);
  

}
