#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h
controller Controller;
motor LeftFront = motor(PORT1, ratio6_1, true);
motor LeftBack = motor(PORT3, ratio6_1, true);
motor LeftTop = motor(PORT2, ratio6_1, true);
motor Rightront = motor(PORT4, ratio6_1, false);
motor RightBack = motor(PORT6, ratio6_1, false);
motor RightTop = motor(PORT5, ratio6_1, false);
motor intake1 = motor(PORT20, ratio6_1, true);
motor intake2 = motor(PORT19, ratio6_1, true);  
motor intakemid = motor(PORT18,ratio6_1, true);  
pneumatics descorel =  pneumatics(Brain.ThreeWirePort.A);
pneumatics descorer =  pneumatics(Brain.ThreeWirePort.B);
pneumatics tongue = pneumatics(Brain.ThreeWirePort.C);
optical coloursort = optical(PORT10);
inertial pi = inertial(PORT15);
void vexcodeInit( void ) {
  // nothing to initialize
}