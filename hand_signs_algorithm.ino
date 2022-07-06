//Written by Dozie Ubosi, 2022-07-05

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver myServo = Adafruit_PWMServoDriver();

#define SERVOMIN 150
#define SERVOMAX 600

uint8_t servonum = 0;
uint8_t i = 0;
uint8_t numberOfServos = 5;

void setup() {
  Serial.begin(9600);
  myServo.begin();
  myServo.setPWMFreq(40);
  delay(500);
}

void loop() {



  //peace sign
  myServo.setPWM(0, 0, 350);

  myServo.setPWM(1, 0, 350);

  myServo.setPWM(2, 0, 350);

  myServo.setPWM(3, 0, 150);

  myServo.setPWM(4, 0, 150);
  delay(1000);

  //love you sign
  myServo.setPWM(0, 0, 350);

  myServo.setPWM(1, 0, 350);

  myServo.setPWM(2, 0, 150);

  myServo.setPWM(3, 0, 150);

  myServo.setPWM(4, 0, 350);
  delay(1000);
  //fist
  myServo.setPWM(0, 0, 350);

  myServo.setPWM(1, 0, 150);

  myServo.setPWM(2, 0, 150);

  myServo.setPWM(3, 0, 150);

  myServo.setPWM(4, 0, 150);
  delay(1000);
  //peace sign with thumb
  myServo.setPWM(0, 0, 150);

  myServo.setPWM(1, 0, 350);

  myServo.setPWM(2, 0, 350);

  myServo.setPWM(3, 0, 150);

  myServo.setPWM(4, 0, 150);
  delay(1000);

  //L sign
  myServo.setPWM(0, 0, 150);

  myServo.setPWM(1, 0, 350);

  myServo.setPWM(2, 0, 150);

  myServo.setPWM(3, 0, 150);

  myServo.setPWM(4, 0, 150);
  delay(1000);
  //seven
  myServo.setPWM(0, 0, 350);

  myServo.setPWM(1, 0, 350);

  myServo.setPWM(2, 0, 350);

  myServo.setPWM(3, 0, 150);

  myServo.setPWM(4, 0, 350);
  delay(1000);
  //eight
  myServo.setPWM(0, 0, 350);

  myServo.setPWM(1, 0, 350);

  myServo.setPWM(2, 0, 150);

  myServo.setPWM(3, 0, 350);

  myServo.setPWM(4, 0, 350);
  delay(1000);

  //love you with thumb
   myServo.setPWM(0, 0, 150);

  myServo.setPWM(1, 0, 350);

  myServo.setPWM(2, 0, 150);

  myServo.setPWM(3, 0, 150);

  myServo.setPWM(4, 0, 350);
  delay(1000);
// eight with thumb
  myServo.setPWM(0, 0, 150);

  myServo.setPWM(1, 0, 350);

  myServo.setPWM(2, 0, 150);

  myServo.setPWM(3, 0, 350);

  myServo.setPWM(4, 0, 350);
  delay(1000);
//seven with thumb
  myServo.setPWM(0, 0, 150);

  myServo.setPWM(1, 0, 350);

  myServo.setPWM(2, 0, 350);

  myServo.setPWM(3, 0, 150);

  myServo.setPWM(4, 0, 350);
  delay(1000);

  

}
