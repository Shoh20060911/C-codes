#include<iostream>
#include<string>
using namespace std;
// Exercise # 9

// TASK 2 (Function)
void swapStrings(string* str1, string* str2) {
    string temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

int main() {
    //TASK 1
    int length, width, area;
    int* ptrL = &length;
    int* ptrW = &width;

    cout << "Enter length of the rectangle: ";
    cin >> *ptrL;
    cout << "Enter width of the rectangle: ";
    cin >> *ptrW;

    area = (*ptrL) * (*ptrW);
    cout << "Area of the rectangle: " << area << endl;

    // TASK 2
   
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    swapStrings(&str1, &str2);

    cout << "After swapping:\n";
    cout << "First string: " << str1 << endl;
    cout << "Second string: " << str2 << endl;

    // TASK 3
    int* ptrI = new int;
    char* ptrCh = new char;
    string* ptrStr = new string;

    cout << "Enter an integer: ";
    cin >> *ptrI;
    cout << "Enter a character: ";
    cin >> *ptrCh;
    cout << "Enter a string: ";
    cin >> *ptrStr;

    cout << "\nYou entered:\n";
    cout << "Integer: " << *ptrI << endl;
    cout << "Character: " << *ptrCh << endl;
    cout << "String: " << *ptrStr << endl;

    delete ptrI;
    delete ptrCh;
    delete ptrStr;


    return 0;
}

