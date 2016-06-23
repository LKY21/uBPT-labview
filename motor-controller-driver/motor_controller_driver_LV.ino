#include <AccelStepper.h>

int motorSpeed = 9600; //maximum steps per second (about 3rps / at 16 microsteps)
int motorAccel = 80000; //steps/second/second to accelerate

int motorDirPin = 2; //digital pin 2
int motorStepPin = 3; //digital pin 3
char stepinput[9] = "        "; //needs to have one space for null character
long stepcounter = 0;

//set up the accelStepper intance
//the "1" tells it we are using a driver
AccelStepper stepper(1, motorStepPin, motorDirPin); 

void setup() {
  stepper.setMaxSpeed(motorSpeed);
  stepper.setSpeed(motorSpeed);
  stepper.setAcceleration(motorAccel);

 // stepper.moveTo(32000); //move 32000 steps (should be 10 rev)
  Serial.begin(9600);

}

void loop() {
    memset(&stepinput[0],0,sizeof(stepinput)); //clear char string
    
  if ( Serial.available() ){
    Serial.readBytes(stepinput, 16);
    stepcounter=atol(stepinput);
// stepcounter=Serial.parseInt();
 //   Serial.print("going to position ");
      Serial.println(stepcounter); 

  }
 //     delay(250);
    stepper.moveTo(stepcounter);



  //these must be called as often as possible to ensure smooth operation
  //any delay will cause jerky motion
  stepper.run();

} //loop
