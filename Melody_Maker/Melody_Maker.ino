#include "pitches.h"

int notes[] = {NOTE_C4,NOTE_DS4,NOTE_G4,NOTE_C4,NOTE_DS4,NOTE_G4,NOTE_F4,NOTE_DS4,NOTE_F4,NOTE_DS4};
int duration[] = {8,8,4,8,8,8,8,16,16,2};

void setup(){
    
}

void loop(){
  melody();

}

void melody(){
    for(int i = 0; i<10;i++){
        int melodyDuration = 1000 / duration[i];
        tone(11,notes[i],melodyDuration);   
        int pauseBetweenNotes = melodyDuration * 1.43 ;
        delay(pauseBetweenNotes);
        
    }
    
}