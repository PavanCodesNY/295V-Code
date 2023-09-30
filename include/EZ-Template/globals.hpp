// Controller
extern pros::Controller controller;

// Motors
extern pros::Motor linear_puncher;
extern pros::Motor intake_motor_left;
extern pros::Motor intake_motor_right;
extern pros::Motor_Group intake_motors;


//Motor movement from 0 to 100 %
void moveMotor(pros::Motor mtr, float pwr);

void moveMotors(pros::Motor_Group& mtr, float pwr);
