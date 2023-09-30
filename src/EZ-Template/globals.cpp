#include "main.h"
#include <vector>

// Controller
pros::Controller controller(pros::E_CONTROLLER_MASTER);

// Motors
pros::Motor linear_puncher(7, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor intake_motor_left(8, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor intake_motor_right(9, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor_Group intake_motors({intake_motor_left, intake_motor_right});

void moveMotor(pros::Motor mtr, float pwr){
    mtr.move(pwr * 120);
}

void moveMotors(pros::Motor_Group& motors, float pwr) {
    motors.move(pwr * 120);
}
