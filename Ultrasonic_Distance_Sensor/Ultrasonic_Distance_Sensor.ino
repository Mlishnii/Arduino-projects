
int Echo = 12 ;
int Trig = 13 ;
void setup() {
  pinMode(Echo,INPUT);
  pinMode(Trig, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long duration, cm ;

  digitalWrite(Trig,LOW);
  delayMicroseconds(2);
  digitalWrite(Trig,HIGH);
  delayMicroseconds(5);
  digitalWrite(Trig,LOW);

  duration = pulseIn(Echo,HIGH); // pulseIn function measures the length of a pulse in microseconds.

  cm = MicroStoCm(duration); // we want to calculate the distance 
  
  Serial.print("distance value = ");
  Serial.print(cm);
  Serial.println("cm");
  delay(100);


}

unsigned long MicroStoCm (unsigned long MicroS){
  return (MicroS/29)/2;
} 