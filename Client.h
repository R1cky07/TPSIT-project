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
    Client(double M);
    ~Client();
    double getBankAccount();
    double getWallet();
    void depositOrWithdraw(double M, int choice);
    void investMoney(double M, int firstChoice, int secondChoice);
    void addMoneyMonth();
};

#endif
