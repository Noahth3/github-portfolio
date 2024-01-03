//*******************************************************************************************************
//
//          File:                       Student.cpp
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
//                  2.StudentDriver.cpp
//
//*******************************************************************************************************

#include <iostream>
#include "Student.hpp"
#include <cstring>

using namespace std;

//*******************************************************************************************************

void Student::setStudentNumber(int studentNumber)
{
    this -> studentNumber = studentNumber;
}

//*******************************************************************************************************

int Student::getStudentNumber() const
{
    return  studentNumber;
}

//*******************************************************************************************************

void Student::setStudentName(string studentName)
{
    this -> studentName = studentName;
}

//*******************************************************************************************************

string Student::getStudentName() const
{
    return studentName;
}

//*******************************************************************************************************

void Student::setGpa(double GPA)
{
    this -> GPA = GPA;
}

//*******************************************************************************************************

double Student::getGpa() const
{
    return GPA;
}
