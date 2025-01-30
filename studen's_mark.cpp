#include<iostream>
#include<iomanip>
using namespace std;


int main() {

	        
	int b, c;
	
	
	cout << "Enter the first score of the first student: ";
	cin >> b;
	cout << "Enter the second score of the next student: ";
	cin >> c;
	cout << "\n";
	

	cout << setw(20) << left << "Entrance score";
	cout << setw(20) << "Ball";
	cout << setw(20) << "Fail/Pass" << endl;
	cout << string(60, '-') ;
	cout << "\n";

	if (b <= 55) {
		cout << setw(20) << left << "00-55";
		cout << setw(20) << b;
		cout << setw(20) << "Fail(with score 2)" << endl;

	}
	

	if (b >= 56 && b <= 70) {
		cout << setw(20) << left << "56-70";
		cout << setw(20) << b;
		cout << setw(20) << "Pass(with score 3-4) " << endl;

		
	}

	

	if (b >= 70 && b <= 100) {
		cout << setw(20) << left << "70-100";
		cout << setw(20) << b;
		cout << setw(20) << "Pass(with score 5) " << endl;

		

	}
	
	

	if (c >= 70 && c <= 100) {
		cout << setw(20) << left << "70-100";
		cout << setw(20) << c;
		cout << setw(20) << "Pass(with score 5) " << endl;
	}
	
	if (c <= 55) {
		cout << setw(20) << left << "00-55";
		cout << setw(20) << c;
		cout << setw(20) << "Fail(with score 2)" << endl;
	}
	if (c >= 56 && c <= 70) {
		cout << setw(20) << left << "56-70";
		cout << setw(20) << c;
		cout << setw(20) << "Pass(with score 3-4) " << endl;


	}


	

	return 0;
}