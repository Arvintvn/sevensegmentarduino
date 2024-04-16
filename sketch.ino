int A = 1;
int B = 2;
int C = 3;
int D = 4;
int E = 5;
int F = 6;
int G = 7;


void setup() {
  // put your setup code here, to run once:
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(A , LOW);
  digitalWrite(B , LOW);
  digitalWrite(C , LOW);
  digitalWrite(D , LOW);
  digitalWrite(E , LOW);
  digitalWrite(F , LOW);
  digitalWrite(G , HIGH);

  delay(1500);

 

  digitalWrite(A , HIGH);
  digitalWrite(B , LOW);
  digitalWrite(C , LOW);
  digitalWrite(D , HIGH);
  digitalWrite(E , HIGH);
  digitalWrite(F , HIGH);
  digitalWrite(G , HIGH);

  delay(1500);


  digitalWrite(A , LOW);
  digitalWrite(B , LOW);
  digitalWrite(C , HIGH);
  digitalWrite(D , LOW);
  digitalWrite(E , LOW);
  digitalWrite(F , HIGH);
  digitalWrite(G , LOW);

  delay(1500);

  digitalWrite(A , LOW);
  digitalWrite(B , LOW);
  digitalWrite(C , LOW);
  digitalWrite(D , LOW);
  digitalWrite(E , HIGH);
  digitalWrite(F , HIGH);
  digitalWrite(G , LOW);

  delay(1500);


  digitalWrite(A , HIGH);
  digitalWrite(B , LOW);
  digitalWrite(C , LOW);
  digitalWrite(D , HIGH);
  digitalWrite(E , HIGH);
  digitalWrite(F , LOW);
  digitalWrite(G , LOW);

  delay(1500);

  
  digitalWrite(A , LOW);
  digitalWrite(B , HIGH);
  digitalWrite(C , LOW);
  digitalWrite(D , LOW);
  digitalWrite(E , HIGH);
  digitalWrite(F , LOW);
  digitalWrite(G , LOW);

  delay(1500);

  
  digitalWrite(A , LOW);
  digitalWrite(B , HIGH);
  digitalWrite(C , LOW);
  digitalWrite(D , LOW);
  digitalWrite(E , LOW);
  digitalWrite(F , LOW);
  digitalWrite(G , LOW);

  delay(1500);

 
  digitalWrite(A , LOW);
  digitalWrite(B , LOW);
  digitalWrite(C , LOW);
  digitalWrite(D , HIGH);
  digitalWrite(E , HIGH);
  digitalWrite(F , HIGH);
  digitalWrite(G , HIGH);

  delay(1500);

  digitalWrite(A , LOW);
  digitalWrite(B , LOW);
  digitalWrite(C , LOW);
  digitalWrite(D , LOW);
  digitalWrite(E , LOW);
  digitalWrite(F , LOW);
  digitalWrite(G , LOW);

  delay(1500);

  digitalWrite(A , LOW);
  digitalWrite(B , LOW);
  digitalWrite(C , LOW);
  digitalWrite(D , LOW);
  digitalWrite(E , HIGH);
  digitalWrite(F , LOW);
  digitalWrite(G , LOW);

  delay(1500);



}