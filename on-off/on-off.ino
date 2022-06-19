void setup() {
  pinMode(2, OUTPUT); //winding-pair A
  pinMode(3, OUTPUT); //winding-pair B
  pinMode(4, OUTPUT); //winding-pair C
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void loop() {
  int delta-t = x; //( ͡° ͜ʖ ͡°)

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
