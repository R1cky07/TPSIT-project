#include "Client.h"

Client::Client(double M)
{
	wallet = M;
};

Client::~Client()
{
};

void Client::showBankStatus(){
	cout << depositedMoney << endl;
};

void Client::showWallet(){
	cout << wallet << endl;
};

void Client::deposit(double M){
	while(M > wallet){
		cout << "You haven't " << M << " money in your wallet" << endl;
		cout << "Please reinsert how much to deposit: "; cin >> M;
	}
	wallet -= M;
	depositedMoney += M;
};

void Client::withdraw(double M){
	while(M > depositedMoney){
		cout << "You haven't " << M << " money in your bank account" << endl;
		cout << "Please reinsert how much to withdraw: "; cin >> M;
	}
	depositedMoney -= M;
	wallet += M;
};
