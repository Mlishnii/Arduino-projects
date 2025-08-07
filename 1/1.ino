int green = 13 ;
int yellow = 12 ;
int red = 11 ;
int button = 7 ;
void setup() {
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(button, INPUT);

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
