int Echo = 11;
int trig = 12;

void setup() {
    Serial.begin(9600);
    pinMode(trig, OUTPUT);
}

void loop() {
    digitalWrite(trig, LOW);
    delayMicroseconds(2);
    digitalWrite(trig, HIGH);
    int mm = pulseIn(Echo, HIGH);
    Serial.println(mm / 0.17);
}