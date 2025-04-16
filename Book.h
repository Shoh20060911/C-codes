#pragma once



#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    float price;
    int totalBooks;

public:
    // Constructor
    Book(int id, string t, string a, float p);

    // Destructor
    ~Book();

    // Display book details
    void display();

    // Show total books
    void showTotalBooks();
};

