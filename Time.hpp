#pragma once

class Time
{
    int time;
    int timedif;

public:
    Time();
    void increaseTime(int n = 1);
    ~Time();
};
