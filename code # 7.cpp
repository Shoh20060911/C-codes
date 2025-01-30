#include<iostream>
using namespace std;

// Exercise # 8

// TASK 1

int sumTen(int arr[], int a) {
    int sum = 0;
    for (int i = 0; i < a; i++) {
        if (arr[i] > 10) {
            sum += arr[i];
        }
    }
    return sum;
}


// TASK 2

void sortNums(int arr[], int b) {
    
    for (int i = 0; i < b - 1; i++) {
        for (int j = 0; j < b - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// TASK 3

void whoiscurrentlywinning(int sc[], int sz) {
    for (int i = 0; i < sz / 2; i++) {
        if (sc[2 * i] > sc[2 * i + 1]) {
            cout << "Y ";  
        }
        else {
            cout << "O ";  
        }
    }
}

int main() {
    
        // Task 1 (input)
        int arr1[] = { 1, 5, 10, 30, 4, 9, 18 };
        int arr2[] = { 1, 2, 3, 8, 5 };
        int j = sizeof(arr1) / sizeof(arr1[0]);
        int d = sizeof(arr2) / sizeof(arr2[0]);

        cout << "sumTen([1,5,10,30,4,9,18]) => ";
        cout << sumTen(arr1, j) << " \n" << endl;  // 48
        cout << "sumTen([1,2,3,8,5]) => ";
        cout << sumTen(arr2, d) <<"\n"<< endl;  // 0


        // TASK 2(input)

        cout << "sortNums([1,2,10,50,5]) => " ;
        int arr3[] = { 1, 2, 10, 50, 5 };
        int size3 = sizeof(arr3) / sizeof(arr3[0]);

        sortNums(arr3, size3);
        for (int i = 0; i < size3; i++) {
            cout << arr3[i] << " ";  // 1 2 5 10 50
        }
        cout << "\n"<<endl;

        // Task 3 (input)

        cout << "Who is currentl winning => ";
        int scores[] = { 5, 10, 18, 30, 15, 40, 60, 14, 12, 10 };
        int s = sizeof(scores) / sizeof(scores[0]);

        whoiscurrentlywinning(scores, s);
        cout << endl;

        return 0;
}