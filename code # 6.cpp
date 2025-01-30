#include <iostream>
using namespace std;

// Function to calculate the area of a rectangle
double area(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double area(double base, double height, int) { 
    return 0.5 * base * height;
}

// Function to calculate the area of a square
double area(double side) {
    return side * side;
}

// Function to determine quality points based on average score
int qualityPoints(int average) {
    if (average >= 90 && average <= 100)
        return 4;
    else if (average >= 80 && average <= 89)
        return 3;
    else if (average >= 70 && average <= 79)
        return 2;
    else if (average >= 60 && average <= 69)
        return 1;
    else
        return 0;
}

// Template functions for maximum and minimum
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
T minimum(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
   
    double length, width, base, height, side;

    // For rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle: " << area(length, width) << endl;

    // For triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << area(base, height, 0) << endl;

    // For square
    cout << "Enter the side length of the square: ";
    cin >> side;
    cout << "Area of Square: " << area(side) << endl;

    // Variable for quality points
    int average;
    cout << "\nEnter student's average: ";
    cin >> average;
    cout << "Quality Points: " << qualityPoints(average) << endl;

    // Variables for max and min functions
    int int1, int2;
    char char1, char2;
    double double1, double2;

    // Calculation for integers
    cout << "\nEnter two integers: ";
    cin >> int1 >> int2;
    cout << "Maximum of integers: " << maximum(int1, int2) << endl;
    cout << "Minimum of integers: " << minimum(int1, int2) << endl;

    // Calculation for characters
    cout << "Enter two characters: ";
    cin >> char1 >> char2;
    cout << "Maximum of characters: " << maximum(char1, char2) << endl;
    cout << "Minimum of characters: " << minimum(char1, char2) << endl;

    // Calculation for doubles
    cout << "Enter two floating point numbers: ";
    cin >> double1 >> double2;
    cout << "Maximum of doubles: " << maximum(double1, double2) << endl;
    cout << "Minimum of doubles: " << minimum(double1, double2) << endl;

    return 0;
}