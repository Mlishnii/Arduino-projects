#include "pitches.h"

int damage_notes[]={NOTE_A3, NOTE_F3, NOTE_A2, 0, NOTE_A3, NOTE_F3, NOTE_A2, 0, NOTE_A3, NOTE_F3, NOTE_A2};
int damage_durations[]={8, 8, 8, 12, 8, 8, 8, 12, 8, 8, 8};

int block_notes[]={NOTE_G4, NOTE_GS4, NOTE_A4, NOTE_AS4, NOTE_B4};
int block_durations[]={8, 8, 8, 8, 8};

int Echo = 12 ;
int Trig = 13 ;

void setup(){
    pinMode(Echo,INPUT);
    pinMode(Trig, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    unsigned long duration, cm ;

    digitalWrite(Trig,LOW);
    delayMicroseconds(2);
    digitalWrite(Trig,HIGH);
    delayMicroseconds(5);
    digitalWrite(Trig,LOW);


    duration = pulseIn(Echo,HIGH); 

    cm = MicroStoCm(duration);  
    
    Serial.print("distance value = ");
    Serial.print(cm);
    Serial.println("cm");


    if (cm < 8){
        damage();
        delay(500);
    }
    else if(cm<25){
        block();
        delay(500);
    }


}


unsigned long MicroStoCm (unsigned long MicroS){
    return (MicroS/29)/2;
} 

void damage(){
    for(int i = 0; i<11;i++){
        int durations = 1000/damage_durations[i];
        tone(11,damage_notes[i],durations);
        int pauseBetweenNotes = durations * 1.43 ;
        delay(pauseBetweenNotes);
    }
}

void block(){
    for(int i = 0; i<5;i++){
        int durations = 1000/block_durations[i];
        tone(11,block_notes[i],durations);
        int pauseBetweenNotes = durations * 1.43 ;
        delay(pauseBetweenNotes);
    }
}