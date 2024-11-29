#include "Investment.h"


Investment::Investment(double m, int r, int s, int e)
{
    money = m;
    risk = r;
    start = s;
    end = e;
}
double Investment::getInvestmentStatus(int tdif)
{
    srand(time(NULL));
    for(int i{ 0 }; i < tdif; i++) {
        int percent{ rand() % 200 - 100 };
        money = (percent >= 0)? money - (money * percent * -1 )/ 100 : money + (money * percent)/100;
    }
    return money;
}
Investment::~Investment() {}


