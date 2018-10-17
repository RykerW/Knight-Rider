# Knight-Rider
int x = 50; 
int pententiometer = 0;

void setup() {
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (pententiometer, OUTPUT);
}
// put your setup code here, to run once:


void loop() {

  x = analogRead(pententiometer);
 
  digitalWrite(2, HIGH);
  delay(x);
  digitalWrite(1, LOW);
  delay(x);
 
  digitalWrite(3, HIGH);
  delay(x);
  digitalWrite(2,LOW);
  delay(x);

  digitalWrite(4,HIGH);
  delay(x);
  digitalWrite(3, LOW);
  delay(x);

  digitalWrite(5,HIGH);
  delay(x);
  digitalWrite(4, LOW);
  delay(x);

  digitalWrite(6, HIGH);
  delay(x);
  digitalWrite(5, LOW);
  delay(x);
 
  digitalWrite(5, HIGH);
  delay(x);
  digitalWrite(6, LOW);
  delay(x);

  digitalWrite(4, HIGH);
  delay(x);
  digitalWrite(5,LOW);
  delay(x);

  digitalWrite(3, HIGH);
  delay(x);
  digitalWrite(4, LOW);
  delay(x);
 
  digitalWrite(2, HIGH);
  delay(x);
  digitalWrite(3, LOW);
  delay(x);

  digitalWrite(2, HIGH);
  delay(x);
  digitalWrite(2, LOW);
  delay(x);
}
