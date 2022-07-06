//Written by Dozie Ubosi, 05/07/2022

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




  myServo.setPWM(4, 0, 150);
  delay(500);
  myServo.setPWM(3, 0, 150);
  delay(500);
  myServo.setPWM(2, 0, 150);
  delay(500);
  myServo.setPWM(1, 0, 150);
  delay (500);
  myServo.setPWM(0, 0, 380);
  delay(500);



  myServo.setPWM(0, 0, 150);
  delay(500);
  myServo.setPWM(1, 0, 350);
  delay(500);
  myServo.setPWM(2, 0, 350);
  delay(500);
  myServo.setPWM(3, 0, 350);
  delay (500);
  myServo.setPWM(4, 0, 350);
  delay(500);

}
