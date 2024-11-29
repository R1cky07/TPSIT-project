#include <iostream>
using namespace std;
#ifndef TIME_H
#define TIME_H

class Time
{
    int time;
    int timedif;


public:
    Time();
    void increaseTime(int n = 1);
    ~Time();
};
#endif
