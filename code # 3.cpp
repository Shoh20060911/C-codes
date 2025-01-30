// EXERCISE # 3
// OCTOBER 9th


#include<iostream>
using namespace std;
int main() {
	// TASK # 1
	int product = 1;
	int num = 1;
	while (num <= 15) {
		if (num % 2 != 0) {


			product = product * num;

		}
		num++;

	}
	cout << "The product of the odd integers is:" << product << endl;



	// TASK # 2

	int m;
	int n;
	int sum = 0;


	cout << "Enter the value of m: ";
	cin >> m;
	cout << "Enter the value of n: ";
	cin >> n;
	int i = m;
	while (i <= n)
	{
		sum += i;
		i++;
	}
	cout << "Sum of the numbers from n to m is: " << sum << endl;

	// TASK # 3

    char operation;
    double a, b;


    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> b;

    switch (operation) {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':

        if (b != 0)
            cout << a << " / " << b << " = " << a / b << endl;
        else
            cout << "Error! Division by zero." << endl;
        break;
    default:

        cout << "Invalid operator!" << endl;
        break;


    }

    // TASK # 4


    int number;
    int sum = 0;

  
    cout << "Enter a number: ";
    cin >> number;

   
    while (number != 0) {
        sum += number % 10; 
        number = number / 10; 
    }
    cout << "The sum of the digits is: " << sum << endl;



return 0;

}