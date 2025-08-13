#include <LiquidCrystal.h>

float adc, voltage, tempC;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // (rs, enable, D4, D5, D6, D7)

void setup() {
    lcd.begin(16, 2); // Initialize the LCD with 16 columns and 2 rows
    lcd.clear();

    analogReference(DEFAULT);
}

void loop() {
    adc = analogRead(A0); 
    voltage = adc * (5.0 / 1023.0); 
    tempC = (voltage - 0.5) * 100.0; 
    lcd.setCursor(0,1);
    lcd.print("Temperature :");
    lcd.setCursor(13,1);
    lcd.print(tempC);
    delay(1000);

}
