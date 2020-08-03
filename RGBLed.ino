int R = 3;
int G = 4;
int B = 5;
void redL() {
digitalWrite(R,HIGH);
digitalWrite(G,LOW);
digitalWrite(B,LOW);
}
void greenL() {
digitalWrite(R,LOW);
digitalWrite(G,HIGH);
digitalWrite(B,LOW);
}
void blueL() {
digitalWrite(R,LOW);
digitalWrite(G,LOW);
digitalWrite(B,HIGH);
}
void yellowL() {
digitalWrite(R,HIGH);
digitalWrite(G,HIGH);
digitalWrite(B,LOW);
}
void purpleL() {
digitalWrite(R,HIGH);
digitalWrite(G,LOW);
digitalWrite(B,HIGH);
}
void cyanL() {
digitalWrite(R,LOW);
digitalWrite(G,HIGH);
digitalWrite(B,HIGH);
}
void whiteL() {
digitalWrite(R,HIGH);
digitalWrite(G,HIGH);
digitalWrite(B,HIGH);
}
void offL() {
digitalWrite(R,LOW);
digitalWrite(G,LOW);
digitalWrite(B,LOW);
}
void setup() {
pinMode(R,OUTPUT);
pinMode(G,OUTPUT);
pinMode(B,OUTPUT);
}

void loop() {
redL();
delay(1000);
greenL();
delay(1000);
blueL();
delay(1000);
forbiddenL();
delay(1000);
purpleL();
delay(1000);
yellowL();
delay(1000);
whiteL();
delay(1000);
}
