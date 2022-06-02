void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void loop() {
  int deltat = 100;

  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  delay(deltat);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(deltat);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(deltat);
}
