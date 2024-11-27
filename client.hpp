#pragma once
class client
{
private:
    double wallet;
    double depositedMoney;
    int time;

public:
    client();
    ~client();
    void withdraw(double money);
    void deposit(double money);
    void increaseTime(int time);
	void outBankAccountState();
	void outWalletState();
};
