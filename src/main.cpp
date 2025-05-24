#include "simple.h"
#include "vex.h"

using namespace vex;

int main() {
    // Do not remove.
    setup();

    drive(12, 75);
    turn(180, 90);
    drive(12, 75);

    stop();
};