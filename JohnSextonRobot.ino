#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

// Create the motor shield object with the default I2C address
Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 

Adafruit_DCMotor *myMotor = AFMS.getMotor(1);
Adafruit_DCMotor *myOtherMotor = AFMS.getMotor(2);

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Adafruit Motorshield v2 - DC Motor test!");

  AFMS.begin(); 
  myMotor->setSpeed(150);
  myOtherMotor->setSpeed(150);

}

void loop() {
  myMotor->run(FORWARD);
  myOtherMotor->run(BACKWARD);
  delay(random(100,300));
  myMotor->run(BACKWARD);
  myOtherMotor->run(FORWARD);
  delay(random(100,300));
}
