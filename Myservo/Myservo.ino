#include <Servo.h>

Servo myservo;
int pwn = 4;
int LDR = A0;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(pwn);
  //pinMode(pwn, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //myservo.write(90);
  /*analogWrite(pwn, 127);
  delay(1000);
  //myservo.write(0);
  analogWrite(pwn, 0);
  delay(1000);
  //myservo.write(180);
  analogWrite(pwn, 255);
  delay(1000);*/
  int lightLevel = analogRead(LDR);
  //Serial.println(lightLevel);
  int degree = map(lightLevel, 0, 1024, 0, 180);
  Serial.println(degree);
  myservo.write(degree);
}
