#include "vex.h"

using namespace vex;

vex::brain Brain;

#define RADIUS 2.75
#define TRACK_WIDTH 13.75
#define WHEEL_BASE 11
#define GEAR_RATIO 0.75

motor motor1 = motor(PORT1, ratio6_1, true);
motor motor2 = motor(PORT2, ratio6_1, false);
motor motor3 = motor(PORT19, ratio6_1, false);
motor motor4 = motor(PORT20, ratio6_1, true);
motor_group leftMotors = motor_group(motor1, motor2);
motor_group rightMotors = motor_group(motor3, motor4);
inertial imu = inertial(PORT16);

vex::smartdrive Drivetrain(leftMotors, rightMotors, imu, 2 * M_PI * RADIUS, TRACK_WIDTH, WHEEL_BASE, distanceUnits::in, GEAR_RATIO);

void drive(int inches, float velocity = 100) {
    Drivetrain.setDriveVelocity(velocity, pct);
    Drivetrain.driveFor(inches, distanceUnits::in, true);
};

void turn(float degrees, float velocity = 100) {
    Drivetrain.setTurnVelocity(velocity, pct);
    Drivetrain.turnFor(degrees, rotationUnits::deg, true);
}

void imuThreadF() {
    while (true) {
        if (!imu.installed()) {
            printf("IMU DC");
        }
        wait(10, msec);
    }
};

void setup() {
    Drivetrain.setTurnThreshold(1);
    Drivetrain.setTurnConstant(0.4);
    Drivetrain.setStopping(hold);
};

void stop() {
    Drivetrain.stop();
};