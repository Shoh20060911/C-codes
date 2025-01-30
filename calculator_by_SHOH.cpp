#include <iostream>
#include <cmath>

using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    // Constructor to initialize numbers
    Calculator(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }

    // Addition
    double add() {
        return num1 + num2;
    }

    // Subtraction
    double subtract() {
        return num1 - num2;
    }

    // Multiplication
    double multiply() {
        return num1 * num2;
    }

    // Division
    double divide() {
        if (num2 == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return num1 / num2;
    }

    // Power function
    double power() {
        return pow(num1, num2);
    }

    // Square root function (only for num1)
    double squareRoot() {
        if (num1 < 0) {
            cout << "Error: Cannot compute square root of a negative number!" << endl;
            return 0;
        }
        return sqrt(num1);
    }
};

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /, ^, r): ";
    cin >> operation;

    if (operation != 'r') {
        cout << "Enter second number: ";
        cin >> num2;
    }

    Calculator calc(num1, num2);
    double result;

    switch (operation) {
    case '+': result = calc.add(); break;
    case '-': result = calc.subtract(); break;
    case '*': result = calc.multiply(); break;
    case '/': result = calc.divide(); break;
    case '^': result = calc.power(); break;
    case 'r': result = calc.squareRoot(); break;
    default:
        cout << "Invalid operator!" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
