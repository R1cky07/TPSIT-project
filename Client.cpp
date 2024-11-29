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
        wallet -= M;
        depositedMoney += M;
    } else {
		if(depositedMoney < 0){
			cout << "You can't withdraw, your bank account is negative" << endl << endl;
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