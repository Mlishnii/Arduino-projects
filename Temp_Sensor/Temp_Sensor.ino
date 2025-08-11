float adc, voltage, tempC;

void setup() {
    Serial.begin(9600);
    analogReference(DEFAULT); // reference voltage is 5
}

void loop() {
    adc = analogRead(A0); 
    voltage = adc * (5.0 / 1023.0); 
    tempC = (voltage - 0.5) * 100.0; 
    Serial.print("The temperature is ");
    Serial.print(tempC);
    Serial.println(" C");

    delay(500);
}
