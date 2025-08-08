int sensor;
int led = 13; 
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  sensor = analogRead(A0);
  Serial.print("Sensor Value = "); // it prints in serial monitor.
  Serial.println(sensor);
  delay(500);
  if(sensor<500){
    digitalWrite(led,LOW);
  }
  else{
    digitalWrite(led,HIGH);
  }


}
