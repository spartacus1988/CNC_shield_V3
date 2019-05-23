#include <AccelStepper.h>

// for the Arduino Uno + CNC shield V3

#define MOTOR_A_ENABLE_PIN 8
#define MOTOR_A_STEP_PIN 2
#define MOTOR_A_DIR_PIN 5

//#define MOTOR_B_ENABLE_PIN 8
//#define MOTOR_B_STEP_PIN 3
//#define MOTOR_B_DIR_PIN 6



AccelStepper motorA(1, MOTOR_A_STEP_PIN, MOTOR_A_DIR_PIN); 
//AccelStepper motorB(1, MOTOR_B_STEP_PIN, MOTOR_B_DIR_PIN); 

void setup()
{
  motorA.setEnablePin(MOTOR_A_ENABLE_PIN);
  motorA.setPinsInverted(false, false, true);
//  motorB.setEnablePin(MOTOR_B_ENABLE_PIN);
//  motorB.setPinsInverted(false, false, true);

  motorA.setAcceleration(100);  
  motorA.move(1000);
  //motorA.setMaxSpeed(100);
  //motorA.setSpeed(100);

//  motorB.setAcceleration(100);  
//  motorB.move(1000);
  //motorB.setMaxSpeed(100);
  //motorB.setSpeed(100);

  motorA.enableOutputs();
//  motorB.enableOutputs();
}

void loop()
{

  motorA.run();
//  motorB.run();

}
