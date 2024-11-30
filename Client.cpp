#include "Client.h"

Client::Client(double M)
{
    wallet = M;
    depositedMoney = 0;
};

Client::~Client(){};

double Client::getBankAccount() { return depositedMoney; };

double Client::getWallet() { return wallet; };

void Client::depositOrWithdraw(double M, int choice)
{
    if(choice == 1) {
        while(M > wallet) {
            cout << "You haven't " << M << " money in your wallet" << endl;
            cout << "Please reinsert how much to deposit: ";
            cin >> M;
        }
        wallet -= static_cast<double>(M);
        depositedMoney += static_cast<double>(M);
    } else {
        if(depositedMoney <= 0) {
            cout << "You can't withdraw, your bank account is negative or equal to 0" << endl << endl;
            return;
        }
        while(M > depositedMoney) {
            cout << "You haven't " << M << " money in your bank account" << endl;
            cout << "Please reinsert how much to withdraw: ";
            cin >> M;
        }
        depositedMoney -= M;
        wallet += M;
    }
};
void Client::investMoney(double M, int firstChoice, int secondChoice)
{
    if(depositedMoney < 0) {
        cout << "You can't invest, your bank account is negative" << endl;
        depositOrWithdraw(M, 1);
        cout << M << " money have been deposited in your bank account" << endl << endl;
        return;
    }
    depositedMoney -= M;
    invested.setAll(M, firstChoice, secondChoice);
};

void Client::addMoneyMonth() { wallet += totalMonth.timeDif * 100; }