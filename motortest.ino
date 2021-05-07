int LSp = 5;
int Lf = 6;
int Lb = 7;
//Right side variable declaration
int RSp = 3;
int Rf = 2;
int Rb = 4;

void setup() {
    Serial.begin(9600);
    pinMode(LSp, OUTPUT);
    pinMode(Lf, OUTPUT);
    pinMode(Lb, OUTPUT);
    pinMode(RSp, OUTPUT);
    pinMode(Rf, OUTPUT);
    pinMode(Rb, OUTPUT);
    analogWrite(LSp, 120);
    analogWrite(RSp, 120);
}

void loop() {
    digitalWrite(Lf, LOW);
    digitalWrite(Rb, LOW);
    digitalWrite(Rf, LOW);
    digitalWrite(Lb, LOW);
    digitalWrite(Rf, HIGH);
    digitalWrite(Lf, HIGH);
    delay(2000);
    digitalWrite(Lf, LOW);
    digitalWrite(Rb, LOW);
    digitalWrite(Rf, LOW);
    digitalWrite(Lb, LOW);
    digitalWrite(Rb, HIGH);
    digitalWrite(Lb, HIGH);
    delay(2000);
}