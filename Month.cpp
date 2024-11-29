#include "Month.h"

Month::Month() {
    time = 0;
    timeDif = 0;
};

Month::~Month() {}

void Month::increaseTime(int n) {
    timeDif = n;
    time += n;
};