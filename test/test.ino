  int deltat;
  int inc;
  int threshold;

void setup() {
  pinMode(2, OUTPUT); //winding-pair A
  pinMode(3, OUTPUT); //winding-pair B
  pinMode(4, OUTPUT); //winding-pair C
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);

  deltat = 500;
  inc = 0;
}

void loop() {
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  delay(deltat);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(deltat);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(deltat);

  inc++;
  if (inc == (2000/deltat)) {
    deltat = 0.9*deltat;
    inc = 0;
  }
}
