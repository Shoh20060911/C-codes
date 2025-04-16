/*
Full Name: Shohjahon Muxiddinov
Student iD: U2410151
Lab # 5
*/


#include"Bank_Management.h"
using namespace std;

// Parameterized Constructor
Account::Account(string name, int number, string Type, float bal) {
    AccountName = name;
    AccountNumber = number;
    type = Type;
    Balance = bal;
}


// Deposit 
void Account::deposit(float b) {
    if (b > 0) {
        Balance += b;
        cout << "Deposited: " << b << "   New Balance: " << Balance << endl;
    }
    else {
        cout << "Invalid deposit amount!" << endl;
    }
}

// Withdraw 
void Account::withdraw(float a) {
    if (a > 0 && a <= Balance) {
        Balance -= a;
        cout << "Withdrawn: " << a << " | New Balance: " << Balance << endl;
    }
    else {
        cout << "Invalid withdrawal amount!" << endl;
    }
}

// Display Account Details
void Account::displayAccountDetails() const {
    cout << "Account Name: " << AccountName << endl;
    cout << "Account Number: " << AccountNumber << endl;
    cout << "Account Type: " << type << endl;
    cout << "Balance: " << Balance << endl;

}

// Operator Overloading
bool Account::operator==(const Account& ac) const {
    return this->AccountNumber == ac.AccountNumber;
}

bool Account::operator>(const Account& ac) const {
    return this->Balance > ac.Balance;
}

// Overloaded Stream Operators
ostream& operator<<(ostream& ost, const Account& acc) {
    ost << "Account Name: " << acc.AccountName << endl;
    ost << "Account Number: " << acc.AccountNumber << endl;
    ost << "Account Type: " << acc.type << endl;
    ost << "Balance: " << acc.Balance << endl;
    return ost;
}
istream& operator>>(istream& ist, Account& acc) {
    cout << "Enter Account Name: ";
    ist >> acc.AccountName;
    cout << "Enter Account Number: ";
    ist >> acc.AccountNumber;
    cout << "Enter Account Type: ";
    ist >> acc.type;
    cout << "Enter Balance: ";
    ist >> acc.Balance;
    return ist;
}


// Main function

int main() {
    // Account objects

    Account acc1("Shohjahon Muxiddinov", 100, "Deposit Account", 1000);
    Account acc2("Odilov Avazbek", 200, "Transactional Account", 2000);
    Account acc3("Alex Smith", 300, "Corporate Account", 3000);
    // Display initial account details
    cout << "Initial Account Details:\n";
    cout << acc1 << endl;
    cout << acc2 << endl;
    cout << acc3 << endl;

    // Perform deposit and withdrawal operations
    acc1.deposit(1000.0);
    acc2.withdraw(2000.0);
    acc3.deposit(3000.0);

    // Display updated account details
    cout << "\nUpdated Account Details:\n";
    cout << acc1 << endl;
    cout << acc2 << endl;
    cout << acc3 << endl;

    // Checking equality of accounts (by account number)
    if (acc1 == acc2) {
        cout << "Account 1 and Account 2 have the same account number.\n";
    }
    else {
        cout << "Account 1 and Account 2 have different account numbers.\n";
    }

    // Comparing which account has a greater balance
    if (acc3 > acc1) {
        cout << "Account 3 has a greater balance than Account 1.\n";
    }
    else {
        cout << "Account 1 has a greater balance than Account 3.\n";
    }

    return 0;
}