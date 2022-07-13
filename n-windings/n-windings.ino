int n = 3;
int windings[3]; //n = number of windings
int deltat = 1000;

void setup() {
    for(int i=0; i<n; i++) {
        pinMode(i+1, OUTPUT);
    }
}

void loop() {

}

void run_n_windings() {
    digitalWrite(sizeof(windings), LOW); //set the last one LOW
    for(int i=1; i<=n; i++) {
        digitalWrite(i, HIGH);
        delay(deltat) 
        digitalWrite(i, LOW);
    }
}
