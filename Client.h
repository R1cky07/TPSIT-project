#include <iostream>
#include "Time.h"
#include "Time.cpp"
using namespace std;
#ifndef CLIENT_H
#define CLIENT_H

class Client
{
	double depositedMoney, wallet;
	Time month;
public:

	Client(double M);
	~Client();
	void showBankStatus();
	void showWallet();
	void deposit(double M);
	void withdraw(double M);

};

#endif
