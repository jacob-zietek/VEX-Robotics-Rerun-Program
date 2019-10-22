#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "v5.h"
#include "v5_vcs.h"

vex::brain Brain;

vex::competition    Competition;

vex::controller Controller1 = vex::controller();

vex::motor backLeft = vex::motor(vex::PORT13, vex::gearSetting::ratio18_1, false);
vex::motor backRight = vex::motor(vex::PORT18, vex::gearSetting::ratio18_1, true);
vex::motor frontLeft = vex::motor(vex::PORT11, vex::gearSetting::ratio18_1, false);
vex::motor frontRight = vex::motor(vex::PORT20, vex::gearSetting::ratio18_1, true);
vex::motor flywheel1 = vex::motor(vex::PORT1, vex::gearSetting::ratio6_1, false);
vex::motor flywheel2 = vex::motor(vex::PORT8, vex::gearSetting::ratio6_1, true);
vex::motor intake1 = vex::motor(vex::PORT3, vex::gearSetting::ratio18_1, true);
vex::motor intake2 = vex::motor(vex::PORT5, vex::gearSetting::ratio18_1, true);