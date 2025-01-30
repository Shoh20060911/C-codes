#include <iostream>
using namespace std;

// Function to calculate the average of numbers from 1 to n
double calculateAverage(int n) {
    return (n * (n + 1) / 2.0) / n;
}

// Function to reverse the digits of a number
int reverseDigits(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

// Function to convert Celsius to Fahrenheit and display the conversion table
void celsiusToFahrenheit() {
    cout << "Celsius to Fahrenheit: " << endl;
    for (int c = 0; c <= 100; c += 10) {
        double fahrenheit = (c * 9.0 / 5.0) + 32;
        cout << "Celsius: " << c << " -> Fahrenheit: " << fahrenheit << endl;
    }
}

// Function to convert Fahrenheit to Celsius and display the conversion table
void fahrenheitToCelsius() {
    cout << "Fahrenheit to Celsius: " << endl;
    for (int f = 32; f <= 212; f += 10) {
        double celsius = (f - 32) * 5.0 / 9.0;
        cout << "Fahrenheit: " << f << " -> Celsius: " << celsius << endl;
    }
}

int main() {
    // Task # 1
    int n;
    cout << "Enter a number from 1 to 10: ";
    cin >> n;
    if (n >= 1 && n <= 10) {
        double avg = calculateAverage(n);
        cout << "The average of numbers from 1 to " << n << " is: " << avg << endl;
    }
    else {
        cout << "Error: Please enter a number between 1 and 10." << endl;
    }

    // Task # 2
    int num;
    cout << "Enter a number to reverse its digits: ";
    cin >> num;
    int reversed = reverseDigits(num);
    cout << "The reversed number is: " << reversed << endl;

    // Task # 3
    celsiusToFahrenheit();
    fahrenheitToCelsius();

    return 0;
}
