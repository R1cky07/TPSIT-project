#include "Month.h"

Month::Month()
{
    time = 0;
    timeDif = 0;
};

Month::~Month() {}

void Month::increaseTime(int n, Client& client)
{
    timeDif = n;
    time += n;
    client.depositedMoney = client.invested.UpdateInvestment(timeDif);
    client.addMoneyMonth();
};

int Month::getTime() { return time; };

void Month::updateTime(int T) { time -= T; }