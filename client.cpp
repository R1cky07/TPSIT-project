#include "client.hpp"

#include <iostream>
using namespace std;

client::client() {}

client::~client() {}
void client::withdraw(double money)
{
    if(depositedMoney >= money) {
        wallet += money;
        depositedMoney -= money;
    }
}
void client::deposit(double money)
{
    if(wallet >= money) {
        wallet -= money;
        depositedMoney += money;
    }
}
void client::increaseTime(int time)
{
    if(time % 60 != 0) {
        time = (time / 60) * 60;
    }
    wallet += 100 * (time / 60);
    this->time += time;
}
void client::outBankAccountState() { cout << depositedMoney << endl; }
void client::outWalletState() { cout << wallet << endl; }
