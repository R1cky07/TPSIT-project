#ifndef CLIENT_H
#define CLIENT_H
#include "Investment.h"
#include "Month.h"

class Client
{
    double depositedMoney, wallet;
    Investment invested;
    friend Month;

public:
    Month totalMonth;
    explicit Client(double M);
    ~Client();
    const double getBankAccount() const;
    const double getWallet() const;
    void depositOrWithdraw(double M, const int& choice);
    void investMoney(double M, const int& firstChoice, const int& secondChoice);
    void addMoneyMonth();
};

#endif
