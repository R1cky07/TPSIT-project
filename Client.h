#ifndef CLIENT_H
#define CLIENT_H
#include "Month.h"
class Client
{
    double depositedMoney, wallet;

public:
    Month totalMonth;
    Client(double M);
    ~Client();
    double getBankAccount();
    double getWallet();
    void depositOrWithdraw(double M, int choice);
};

#endif
