void setup() {
    for(int i=0; i<3; i++) {
        pinMode(i+1, OUTPUT);
        digitalWrite(i+1, HIGH);
    }
}

void loop() {
}
