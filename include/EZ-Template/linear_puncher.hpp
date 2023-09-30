#pragma once

#include "main.h"

// Rotation Sensor
pros::Rotation linearAngle(8, true);

void setPuncher(int power);

void setPuncherMotors();

extern pros::Task shootLinearPuncher;