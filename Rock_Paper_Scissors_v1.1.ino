#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver myServo = Adafruit_PWMServoDriver();

#define SERVOMIN 150
#define SERVOMAX 600
long x;

uint8_t servonum = 0;
uint8_t i = 0;
uint8_t numberOfServos = 5;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  myServo.begin();
  myServo.setPWMFreq(40);
  delay(500);
}

void loop() {
  //Random Choice generator
  x = random(1, 4);

  for (int i = 0; i < 3; i++) {

      //Original closed fist
  myServo.setPWM(0, 0, 350);

  myServo.setPWM(1, 0, 150);

  myServo.setPWM(2, 0, 150);

  myServo.setPWM(3, 0, 150);

  myServo.setPWM(4, 0, 150);
  delay(500);
  //Open fist
 myServo.setPWM(0, 0, 250);

  myServo.setPWM(1, 0, 250);

  myServo.setPWM(2, 0, 250);

  myServo.setPWM(3, 0, 250);

  myServo.setPWM(4, 0, 250);
  delay(275);
  }
  
  delay(275); 
  Serial.println(x);

//Rock
  if (x == 1) {
    myServo.setPWM(0, 0, 350);

    myServo.setPWM(1, 0, 150);

    myServo.setPWM(2, 0, 150);

    myServo.setPWM(3, 0, 150);

    myServo.setPWM(4, 0, 150);
    delay(1000);

  }
  //Paper
  if (x == 2) {
//Original closed fist


    //Scissors pose
    myServo.setPWM(0, 0, 150);

    myServo.setPWM(1, 0, 350);

    myServo.setPWM(2, 0, 350);

    myServo.setPWM(3, 0, 350);

    myServo.setPWM(4, 0, 350);
    delay(1000);
  }

  //Scissors
  if (x == 3) {
    myServo.setPWM(0, 0, 350);

    myServo.setPWM(1, 0, 350);

    myServo.setPWM(2, 0, 350);

    myServo.setPWM(3, 0, 150);

    myServo.setPWM(4, 0, 150);
    delay(1000);
  }
}
