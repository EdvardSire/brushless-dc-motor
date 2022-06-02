void setup() {
  pinMode(2, OUTPUT); //winding-pair A
  pinMode(3, OUTPUT); //winding-pair B
  pinMode(4, OUTPUT); //winding-pair C
  pinMode(5, OUTPUT); //+5V for A
  pinMode(6, OUTPUT); //+5V for B
  pinMode(7, OUTPUT); //+5V for C
}

void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
}
