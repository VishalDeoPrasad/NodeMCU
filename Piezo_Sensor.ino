int piezo_sensor = D5;
int val;
void setup() {
  pinMode(piezo_sensor, INPUT);
  Serial.begin(9600);

}

void loop() {
  val = digitalRead(piezo_sensor);
  Serial.print("Sensor Reading : ");
  Serial.println(val);

}
