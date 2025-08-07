int green = 13 ;
int yellow = 12 ;
int red = 11 ;

void setup() {
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);


}

void loop() {
  
  for(int i = 13; i>=11; i--){
    digitalWrite(i,HIGH);
    delay(1000);
    digitalWrite(i,LOW);
    delay(1000);
  }
  
  
}
