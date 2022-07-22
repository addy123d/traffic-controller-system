#define red 2
#define yellow 3
#define green 4

void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  //Reset Values at start
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);

  digitalWrite(red,HIGH);

  delay(1000);

  digitalWrite(yellow,HIGH);
  digitalWrite(red,LOW);
  delay(1500);

  digitalWrite(green,HIGH);
  digitalWrite(yellow,LOW);
  delay(2000);
}
