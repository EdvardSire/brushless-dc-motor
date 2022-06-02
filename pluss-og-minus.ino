void setup() {
  int AW = 2;
  pinMode(AW, OUTPUT); //winding-pair A
  int BW = 3;
  pinMode(BW, OUTPUT); //winding-pair B
  int CW = 4;
  pinMode(CW, OUTPUT); //winding-pair C
  int A = 5;
  pinMode(A, OUTPUT); //+5V for A
  int B = 6;
  pinMode(B, OUTPUT); //+5V for B
  int C = 7;
  pinMode(C, OUTPUT); //+5V for C
}

void loop() {
  int delta-t = x;
  
  //what order makes sense here?
  //pretty sure there's a really efficient way to do this with permutations or atleast abstract it away with functions
  //for now it's imperative
  digitalWrite(C, LOW); //sets C off
  
  digitalWrite(B, HIGH); //sets B positive
  digitalWrtie(BW, HIGH); //sets B negative
  
  digitalWrite(A, HIGH); //sets A positive 
  delay(delta-t);
  
  
  digitalWrite(C, HIGH); //sets C positive
  digitalWrite(CW, HIGH); //sets C negative
  
  digitalWrite(BW, LOW); //sets B off
  delay(delta-t);
  // this is one cycle of A positive
   
}
