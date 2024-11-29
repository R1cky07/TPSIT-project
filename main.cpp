#include <ctime>
#include <iostream>
using namespace std;
#include "Client.cpp"
#include "Client.h"
#include "Investment.cpp"
#include "Investment.h"
#include "Month.cpp"
#include "Month.h"

void start(int choice = 0);
bool check(int firstChoice, int secondChoice = 0);

int main()
{
    srand(time(NULL));
    cout << "Insert how many money you have in your wallet: ";
    double money;
    cin >> money;
    Client client(money);// low duration = 2 month, medium = 6 month, long = 12 month
    int choice[2]{ 0, 0 };
    while(choice[0] != 7) {
        start();
        cout << "Your choice: ";

        cin >> choice[0];
        while(choice[0] < 1 || choice[0] > 7) {
            cout << "Select a parameter between 1 and 7" << endl;
            cout << "Your choice: ";
            cin >> choice[0];
        }
        system("cls");
        if(choice[0] <= 3) {
            start(choice[0]);
            cin >> choice[1];
        }

        while(check(choice[0], choice[1]) == false) {
            cout << "Your choice is not valid" << endl;
            start(choice[0]);
            cin >> choice[1];
        }
        switch(choice[0]) {
        case 1:
            cout << "Insert how much: ";
            cin >> money;
            client.depositOrWithdraw(money, choice[1]);
			break;
		case 2:
			cout << "Insert how much: "; cin >> money;
			
			break;
        case 4:
            cout << "How long do you want to advance in time (the time is in month): ";
            int time;
            cin >> time;
            client.totalMonth.increaseTime(time);
            break;
        case 5:
            cout << "Your bank account is as follows " << client.getBankAccount() << endl << endl;
            break;
        case 6:
            cout << "Your wallet is as follows " << client.getWallet() << endl << endl;
        }
    }
    return 0;
}

void start(int choice)
{
    if(choice == 0) {
        cout << "What do you want to do? " << endl << endl;
        cout << "1 - Deposit or prelevate money" << endl;
        cout << "2 - Invest money with different durations" << endl;
        cout << "3 - Invest money with different margins of risk or profit" << endl;
        cout << "4 - Advance over time" << endl;
        cout << "5 - See your bank status" << endl;
        cout << "6 - See your non-deposited wallet" << endl;
        cout << "7 - Stop program" << endl << endl;
        return;
    }

    switch(choice) {
    case 1:
        cout << endl << "deposit(1) or prelevate(2): ";
        return;
    case 2:
        cout << endl << "select the duration: " << endl;
        cout << "short(1), medium(2), long(3): ";
        return;
    case 3:
        cout << endl << "select the margin: " << endl;
        cout << "low(1), medium(2), high(3): ";
        return;
    }
}

bool check(int firstChoice, int secondChoice)
{
    if(firstChoice == 1) {
        if(secondChoice < 1 || secondChoice > 2) {
            return false;
        } else
            return true;
    } else if(firstChoice == 2 || firstChoice == 3) {
        if(secondChoice < 1 || secondChoice > 3) {
            return false;
        } else
            return true;
    }
    return true;
};