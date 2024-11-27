#include <iostream>
//#include "bank.h"
using namespace std;

void start(int choice = 0);
bool check(int firstChoice, int secondChoice = 0);

int main()
{
    start();
    cout << "Your choice: ";
    int choice[2];
    cin >> choice[0];
	while(choice[0] <= 0 || choice[0] >= 7){
		cout << "Select a parameter between 1 and 6" << endl;
		cout << "Your choice: "; cin >> choice[0];
	}
	if(choice[0] <= 3){
		start(choice[0]);
		cin >> choice[1];
	}
	while(check(choice[0], choice[1]) == false){
		cout << "Your choice is not valid" << endl;
		start(choice[0]); cin >> choice[1];
	}
	
    return 0;
}

void start(int choice)
{
	if(choice == 0){
		cout << "What do you want to do? " << endl << endl;
		cout << "1 - Deposit or prelevate money" << endl;
		cout << "2 - Invest money with different durations" << endl;
		cout << "3 - Invest money with different margins of risk or profit" << endl;
		cout << "4 - Advance over time" << endl;
		cout << "5 - See your bank status" << endl;
		cout << "6 - See your non-deposited wallet" << endl << endl;
		return;
	}
		
	switch(choice){
		case 1:
			cout << endl << "deposit(1) or prelevate(2): ";
			return;
		case 2:
			cout << endl << "select the duration: " << endl;
			cout << "short(1), medium(2), long(3): ";
			return;
		case 3:
			cout << "select the margin: " << endl;
			cout << "low(1), medium(2), high(3): ";
			return;
		default:
			cout << "Invalid choice" << endl;
			cout << "Reinsert: "; cin >> choice;
			start(choice);
	}
};

bool check(int firstChoice, int secondChoice){
	if(firstChoice == 1){
		if(secondChoice < 1 || secondChoice > 2){
			return false;
		}
		else
			return true;
	}
	if(firstChoice == 2 || 3){
		if(secondChoice < 1 || secondChoice > 3){
			return false;
		}
		else
			return true;
	}
	else if(firstChoice > )
		return true;
}