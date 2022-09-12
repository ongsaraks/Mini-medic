#include <Servo.h>

Servo myservo;
Servo myservo2;
Servo myservo3;
Servo myservo4;
int sw1 = 4;
int sw2 = 3;
int sw3 = 2;
int sw4 = 9;

void setup() {
  Serial.begin(9600);
  myservo.attach(5);
  myservo2.attach(6);
  myservo3.attach(7);
  myservo4.attach(8);
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
  pinMode(sw3, INPUT);
  pinMode(sw4, INPUT);
}
void loop() {
  int s = digitalRead(sw1);
  Serial.println(s);
  if (s == 0) {
    myservo.write(170);
    
  }
  else {
    myservo.write(90);
  }
  int a = digitalRead(sw2);
  if (a == 0) {
    myservo2.write(170);
    
  }
  else {
    myservo2.write(60);
  }
  int b = digitalRead(sw3);
  if (b == 0) {
    myservo3.write(180);
    
  }
  else {
    myservo3.write(90);
  }
  int c = digitalRead(sw4);
  if (c == 0) {
    myservo4.write(180);
   
  }
  else {
    myservo4.write(60);
  }
  
}
