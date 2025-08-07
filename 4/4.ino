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
  while(digitalRead(button) == LOW){
    digitalWrite(red,HIGH);
  } 
  
  for(int i = 13; i>=11; i--){
    digitalWrite(i,HIGH);
    if(i==13){
      digitalWrite(red,LOW);
      delay(3000);
    }
    else if(i==12){
      digitalWrite(red,LOW);
      delay(1000);
    }
    else{
      delay(4000);
    }
    digitalWrite(i,LOW);
  }
  
  
}