//*******************************************************************************************************
//
//          File:                       StudentDriver.cpp
//
//          Student:                    Noah Thomas
//
//          Assignment:                 Program #10
//
//          Course Name:                Programming II
//
//          Course Number:              COSC 1560
//
//          Due:                        December 1st
//
//
//          This program will display a students name, student number, and GPA that the user inputs.
//
//          Other files required:
//                  1.Student.hpp
//                  2.Student.cpp
//
//*******************************************************************************************************

#include <iostream>
#include <iomanip>
#include "Student.hpp"

using namespace std;

//*******************************************************************************************************

int main()
{
    int studentNumber;
    string studentName;
    double GPA;
    Student myClassmate;
    Student mySelf;
    
    cout << "Please enter the information for student 2 " << endl;
    cout << "Student Number: ";
    cin >> studentNumber;
    if (studentNumber < 1)
    {
        cout << "!!!Error student number cannot be less than 1" << endl;
        cout << "Student Number: ";
        cin >> studentNumber;
    }
    
    cout << "Student Name: ";
    cin.ignore();
    getline(cin, studentName);
    
    cout << "Student GPA: ";
    cin >> GPA;
    if (GPA < 0 | GPA >= 4)
    {
        cout << "!!!Error GPA must be more than 0 and less or equal to 4" << endl;
        cout << "Student GPA: ";
        cin >> GPA;
    }
    cout << string(60, '*') << endl;
    
    myClassmate.setStudentNumber(1);
    myClassmate.setStudentName("John Doe");
    myClassmate.setGpa(3.5);
    
    mySelf.setStudentNumber(2);
    
    mySelf.setStudentNumber(studentNumber);
    mySelf.setStudentName(studentName);
    mySelf.setGpa(GPA);
    
    cout << "Student 1:" << endl;
    cout << setw(5) << left << myClassmate.getStudentNumber();
    cout << setw(15) << left << myClassmate.getStudentName();
    cout << setw(5) << left << fixed << setprecision(2) << myClassmate.getGpa() << endl;
    cout << endl;
    
    cout << "Student 2:" << endl;
    cout << setw(5) << left << mySelf.getStudentNumber();
    cout << setw(15) << left << mySelf.getStudentName();
    cout << setw(5) << left << fixed << setprecision(2) << mySelf.getGpa() << endl;;
    cout << endl;
    return 0;
}

//*******************************************************************************************************

//
//OUTPUT
//OUTCOME 1:
//Please enter the information for student 2
//Student Number: 35
//Student Name: Joe Doe
//Student GPA: 0.8
//************************************************************
//Student 1:
//1    John Doe       3.50
//
//Student 2:
//35   Joe Doe        0.80
//
//Program ended with exit code: 0
//
//
//OUTCOME 2:
//Please enter the information for student 2
//Student Number: 0
//!!!Error student number cannot be less than 1
//Student Number: 90
//Student Name: Janet Doe
//Student GPA: -0.9
//!!!Error GPA must be more than 0 and less or equal to 4
//Student GPA: 4.0
//************************************************************
//Student 1:
//1    John Doe       3.50
//
//Student 2:
//90   Janet Doe      4.00
//
//Program ended with exit code: 0
