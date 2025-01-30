
//Pascal's triangle




#include <iostream>
using namespace std;



// Function to print Pascal's Triangle
void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; ++i) {
        int value = 1; // Initialize the first value in the row

        // Print leading spaces for formatting
        for (int space = 0; space < rows - i - 1; ++space) {
            cout << " ";
        }

        for (int j = 0; j <= i; ++j) {
            cout << value << " "; // Print the current value
            value = value * (i - j) / (j + 1); // Update value using nCr logic
        }
        cout << endl; // Move to the next row
    }
}

int main() {
    cout << "Pascal's Triangle. By MUKHIDDINOV SHOHJAHON)\n" << endl;

    int rows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    printPascalsTriangle(rows);
    return 0;
}