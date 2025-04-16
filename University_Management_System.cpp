

// University_Management_System.cpp
// Lab # 7
// Muxiddinov Shohjahon
// U2410151


#include "University_Management_System.h"

// Person class 

void Person::setData(string n, int a, char g) {
    Name = n;
    Age = a;
    Gender = g;
}

void Person::showData() {
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
    cout << "Gender: " << Gender << endl;
}

// Student class 

void Student::setData(int id, string sub, int gr) {
    ID = id;
    subject = sub;
    grade = gr;
}

void Student::showStudent() {
    cout << "ID number: " << ID << endl;
    cout << "Subject: " << subject << endl;
    cout << "Grade: " << grade << endl;
}

// Teacher class

void Teacher::setCourseInfo(string courinfo) {
    courseinfo = courinfo;
}

void Teacher::showTeacher() {
    cout << "Course Info: " << courseinfo << endl;
}

// Constructor for ECLASS that initializes both Student and Teacher

ECLASS::ECLASS(string n, int a, char g, int id, string sub, int gr, string courinfo) :
    Person(), Student(), Teacher() {

    Person::setData(n, a, g);      // Initialize Person (base class)
    Student::setData(id, sub, gr);  // Initialize Student
    Teacher::setCourseInfo(courinfo);  // Initialize Teacher
}


// Show Student Information

void ECLASS::ShowStudentInfo() {
    showData();   // Show Person details
    showStudent();   // Show Student details
}

// Show Teacher Information

void ECLASS::ShowTeacherInfo() {
    showData();   // Show Person details
    showTeacher();   // Show Teacher details
}

// Main function

int main() {

    // Creating an object of ECLASS that combines both Student and Teacher

    ECLASS st("Shohjahon Muxiddinov", 19, 'M', 151, "OOP2", 100, "CS");

    cout << "Student Information: \n";
    cout << "----------------------" << endl;
    st.ShowStudentInfo();
    cout << endl;

    cout << "Teacher Information: \n";
    cout << "----------------------" << endl;
    st.ShowTeacherInfo();
    cout << endl;

    return 0;
}
