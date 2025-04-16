// Exercise # 2
// Name: Shohjahon Muxiddinov
// St ID: U2410151 

// Library Management System

#include "Book.h"

// Constructor 
Book::Book(int id, string t, string a, float p) {
    bookID = id;
    title = t;
    author = a;
    price = p;
    totalBooks = 1;
}

// Destructor 
Book::~Book() {
    cout << "Book \"" << title << "\" deleted." << endl;
}

// Display book details 
void Book::display() {
    cout << "Book ID: " << bookID << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price: $" << price << endl;
    showTotalBooks();
}

// Show total books 
void Book::showTotalBooks() {
    cout << "Total Books: " << totalBooks << endl;
}


int main() {
    // Book objects
    Book b1(0001, "Atomic Habits", "James Clear", 10.09);
    Book b2(0002, "Rich Dad Poor Dad", "Robert T.Kiyosaki", 9.95);
    Book b3(0002, "The Psychology of Money", "Morgan Housel", 11.12);

    // Display
    cout << "\nBook 1 Details\n";
    cout << "---------------------" << endl;
    b1.display();

    cout << "\nBook 2 Details\n";
    cout << "---------------------" << endl;
    b2.display();

    cout << "\nBook 3 Details\n";
    cout << "---------------------" << endl;
    b3.display();
    cout << "---------------------" << endl;

    return 0;
}