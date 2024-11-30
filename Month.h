#include "Client.h"
#include "Investment.h"
#ifndef MONTH_H
#define MONTH_H

class Client;
class Investment;

class Month
{
private:
    int time;
    int timeDif;
    friend Client;
    friend Investment;

public:
    Month();
    ~Month();
    void increaseTime(int n, Client& client);
    int getTime();
    void updateTime(int T);
};

#endif