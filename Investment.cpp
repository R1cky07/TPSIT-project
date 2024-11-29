#include "Investment.h"

Investment::Investment(double m, int r, int t)
{
    money = m;
    
	switch(r) {
    case 1:
        risk = 20;
        break;
    case 2:
        risk = 50;
        break;
    case 3:
        risk = 90;
        break;
    }
    
	switch(t) {
    case 1:
        time = 2;
        break;
    case 2:
        time = 6;
        break;
    case 3:
        time = 12;
        break;
    }
};
Investment::~Investment() {};

double Investment::Invest(int tdif)
{
    srand(time(NULL));
    for(int i{ 0 }; i < tdif; i++) {
        int percent{ rand() % 200 - 100 };
        money = (percent >= 0) ? money - (money * percent * -1) / 100 : money + (money * percent) / 100;
    }
    return money;
};

