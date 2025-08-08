int sensor;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensor = analogRead(A0);
  Serial.print("Sensor Value = "); // it prints in serial monitor.
  Serial.println(sensor);
  delay(500);

}
