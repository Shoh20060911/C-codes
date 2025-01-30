#include <iostream>
using namespace std;
//Exercise # 10
// 
// Task 1
int Largest(int* arr, int size) {
    int largest = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > largest) {
            largest = *(arr + i);
        }
    }
    return largest;
}

// Task 2
float Average(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return static_cast<float>(sum) / size;
}

// Task 3
void modifyElement(int* arr, int rows, int cols, int rowIndex, int colIndex) {
    int index = rowIndex * cols + colIndex;


    *(arr + index) += 1;
}

void printArray(int* arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << *(arr + i * cols + j) << " ";
        }
        cout << endl;
    }
}
int main() {
    // Task 1
    cout << "Task 1: Find the largest element in an array\n";
    int sz1;
    cout << "Enter the size of the array: ";
    cin >> sz1;
    int* arr1 = new int[sz1];
    cout << "Enter " << sz1 << " elements: ";
    for (int i = 0; i < sz1; i++) {
        cin >> arr1[i];
    }
    cout << "The largest element is: " << Largest(arr1, sz1) << endl;
    delete[] arr1;

    // Task 2
    cout << "\nTask 2: Calculate the average of an array\n";
    int sz2;
    cout << "Enter the number of elements: ";
    cin >> sz2;
    int* arr2 = new int[sz2];
    cout << "Enter " << sz2 << " elements: ";
    for (int i = 0; i < sz2; i++) {
        cin >> arr2[i];
    }
    cout << "The average is: " << Average(arr2, sz2) << endl;
    delete[] arr2;

    // Task 3
    int rows = 3, cols = 3;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            int rowIndex = i, colIndex = j;

            modifyElement((int*)arr, rows, cols, rowIndex, colIndex);
        }
    }

    cout << "\nModified Array:" << endl;
    printArray((int*)arr, rows, cols);


    return 0;
}