#include "Time.hpp"

Time::Time()
{
    time = 0;
    timedif = 0;
}
void Time::increaseTime(int n = 1)
{
    timedif = n;
    time += n;
}
Time::~Time() {}
