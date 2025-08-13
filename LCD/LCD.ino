#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // (rs, enable, D4, D5, D6, D7)

void setup() {
    lcd.begin(16, 2); // Initialize the LCD with 16 columns and 2 rows
    lcd.clear();
    lcd.print("MeL");
}

void loop() {

}
