#include "Time.h"


Time::Time()
{
    time = 0;
    timedif = 0;
}
void Time::increaseTime(int n)
{
    timedif = n;
    time += n;
}
Time::~Time() {}

