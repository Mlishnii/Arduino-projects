int green = 13 ;
int yellow = 12 ;
int red = 11 ;

void setup() {
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);


}

void loop() {
  
  digitalWrite(green,HIGH);
  digitalWrite(yellow,HIGH);
  digitalWrite(red,HIGH);
  delay(1500);  
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
  delay(1500); 
  
}
