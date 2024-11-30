#include "Investment.h"

Investment::Investment()
{
    money = 0;
    risk = 0;
    time = 0;
}

Investment::~Investment(){};

void Investment::setAll(double M, int firstChoice, int secondChoice)
{
    money = M;
    if(firstChoice == 3) {
        switch(secondChoice) {
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
    } else {
        switch(secondChoice) {
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
    }
};

double Investment::UpdateInvestment(int tdif)
{
    if(time == 0) {
        return money;
    }
    double moneyRisk{ 0 };
    moneyRisk = (money * risk) / 100;
    if(time < tdif) {
        tdif -= time;
        time = 0;
    } else {
        time -= tdif;
    }
    for(int i{ 0 }; i < tdif; i++) {
        int percent{ rand() % 200 - 100 };
        double moneyAfterMonth;
        moneyAfterMonth = (percent >= 0) ? money - (money * percent * -1) / 100 : money + (money * percent) / 100;

        if(moneyRisk != 0 && moneyRisk <= moneyAfterMonth) {
            money = 0;
            time = 0;
            risk = 0;
        } else
            money = moneyAfterMonth;
    }
    return money;
};