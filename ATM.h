#pragma once

// Shohjahon Muxiddinov
// U2410151
// Lab # 3

#include<iostream>
using namespace std;

// Class representing an Account in the ATM system

class Account {
private:
	string AccountName;
	int PinNumber;

public:
	//Parametrized constructor to initialize account details

	Account(string name, int pin) :
		AccountName(name), PinNumber(pin) {
	}

	//Function to display account details

	void Display() const {
		
		cout << "Account Name: " << AccountName << endl;
		
		
		cout << "Account Pin: " << PinNumber << endl;
		;
	}

};

// Balance details of an Account

class Balance {
private:
	int Withdrawal;
	int Deposit;
	int BalanceInquiry;

public:
	//Parametrized constructor to initialize balance details

	Balance(int withdrawal, int deposit, int balanceinquiry) :
		Withdrawal(withdrawal), Deposit(deposit), BalanceInquiry(balanceinquiry) {
	}
	//Function to display balance details
	void Show() const {
		
		cout << "Withdrawal: " << Withdrawal << endl;
		
		cout << "Deposit: " << Deposit << endl;
		
		cout << "Balance Inquiry: " << BalanceInquiry << endl;
		
	}


	
};

//Class representing an ATM system
class ATM {
private:
	Account acc;
	Balance bal;
public:
	//Parametrized constructor to initialize Account and Balance ojects
	ATM(string name, int pin, int withdrawal, int deposit, int balanceinquiry) :
		acc(name, pin), bal(withdrawal, deposit, balanceinquiry) {
	}
	void Display2() const {
		acc.Display(); // Display accaount information
		bal.Show();  // Display balance information
	}
};