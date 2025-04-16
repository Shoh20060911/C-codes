#pragma once


/*
Full Name: Shohjahon Muxiddinov
Student iD: U2410151
Lab # 5
*/

#include<iostream>
#include<string>
using namespace std;

class Account {
private:
	string AccountName;
	int AccountNumber;
	string type;
	float Balance;

public:
	// Constructor

	Account(string name, int number, string Type, float bal);

	// Deposit and Withdraw

	void deposit(float amount);
	void withdraw(float amount);

	// Display Account Details
	void displayAccountDetails() const;

	// Overload relational operators

	bool operator==(const Account& ac) const;
	bool operator>(const Account& ac)const;

	// Overloaded the stream insertion and extraction

	friend ostream& operator<<(ostream& ost, const Account& acc);
	friend istream& operator>>(istream& ist, Account& acc);


};