#include "simple.h"
#include "vex.h"

using namespace vex;

int main() {
    setup();

    wait(2, sec);

    drive(24);
    turn(-90);
    drive(24);
    drive(-24);
    turn(-90);
    drive(24);
    turn(180);

    Drivetrain.stop(hold);
};