#pragma once

// University_Management_System.h
// Lab # 7
// Muxiddinov Shohjahon
// U2410151

#include<iostream>
#include<string>
using namespace std;

// Person Class 

class Person {
protected:
    string Name;
    int Age;
    char Gender;

public:
    void setData(string n, int a, char g);
    void showData();
};

// Student Class

class Student : virtual public Person {
protected:
    int ID;
    string subject;
    int grade;

public:
    void setData(int id, string sub, int gr);
    void showStudent();
};

// Teacher Class

class Teacher : virtual public Person {
protected:
    string courseinfo;

public:
    void setCourseInfo(string courinfo);
    void showTeacher();
};

// ECLASS

class ECLASS : public Student, public Teacher {
public:

    // Constructor to initialize Student and Teacher details

    ECLASS(string n, int a, char g, int id, string sub, int gr, string courinfo);

    void ShowStudentInfo();
    void ShowTeacherInfo();
};
