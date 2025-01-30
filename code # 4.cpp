#include<iostream>
using namespace std;
int main() {

	// Exercise # 4
	// TASk # 1
	int number;
	int largest = 0;
	for (int counter = 1; counter <= 10; counter++) {

		cout << "Enter number: ";
		cin >> number;

		if (number > largest) {
			largest = number;
		}
	}
	cout << "The  largest number is" << largest << endl;


	// TASK # 2

	cout << "N\t10*N\t100*N\t1000*N" << endl;
	for (int N = 1; N <= 5; N++) {
		cout << N << "\t" << 10 * N << "\t" << 100 * N << "\t" << 1000 * N << endl;
	}

	// TASK # 3

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}


	// TASK 4

	for (int i = 1; i <= 5;++i) {
		for (int j = 5; j > i;--j) {
			cout << " ";
		}
		for (int j = 1;j <= i;++j) {
			cout << j;
		}
		cout << endl;
	}

	return 0;
}

