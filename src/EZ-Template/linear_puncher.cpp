#include "main.h"

// // Helper Functions
// void setPuncher(int power){
//     linear_puncher = power;
// }

// void setPuncherMotors(){
//     int puncherPower = 127 * controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1);
//     setPuncher(puncherPower);
// }

pros::Task shootLinearPuncher{[]{
    while(shootLinearPuncher.notify_take(true, TIMEOUT_MAX)){
        const int reloadAngle = 6750;

        // Shoot linear puncher
        moveMotor(linear_puncher, 100);
        pros::delay(1000);

        // Reload linear puncher
        while(linearAngle.get_angle() <= reloadAngle){
            pros::delay(20);
            if(linearAngle.get_angle() > reloadAngle - 1000){
                moveMotor(linear_puncher, 50);
            }
        }
        moveMotor(linear_puncher, 0);

        // Reset linear puncher
        pros::delay(20);
    }}
};