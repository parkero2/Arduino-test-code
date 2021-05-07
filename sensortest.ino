void setup() {
    Serial.begin(9600);
}

void loop() {
    for (int i = 0; i <4; i++) {
        Serial.println("Sensor on pin " + i + 2 + " "+ digitalRead(i + 2));
        delay(1000);
    }
}