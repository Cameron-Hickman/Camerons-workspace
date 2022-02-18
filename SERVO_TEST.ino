#include <Servo.h>
int UP = 4;
int DOWN = 5;
int LEFT = 6;
int RIGHT = 3;
int JOYBUTTON = 2;
int JOYX = A0;
int JOYY = A1;
int LED = 9;
int SERVOPIN = A2;
Servo servo; 

void setup() {
  // put your setup code here, to run once:
  pinMode(UP,INPUT_PULLUP);
  pinMode(DOWN, INPUT_PULLUP);
  pinMode(LEFT, INPUT_PULLUP);
  pinMode(RIGHT, INPUT_PULLUP);
  pinMode(JOYBUTTON, INPUT_PULLUP);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
  delay(100);
  servo.attach(SERVOPIN);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x, y;
  int reading = analogRead(JOYX);
  int angle = reading / 6;
  servo.write(angle);
  digitalWrite(LED,HIGH);
  x=analogRead(JOYX);
  y=analogRead(JOYY);
  if (digitalRead(UP)==LOW) Serial.println("up");
  else if (digitalRead(DOWN)==LOW) Serial.println("down");
  else if (digitalRead(RIGHT)==LOW) Serial.println("right");
  else if (digitalRead(LEFT)==LOW) Serial.println("left");
  else if (digitalRead(JOYBUTTON)==LOW) Serial.println("JB"); 
 }
  
