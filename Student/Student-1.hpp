//*******************************************************************************************************
//
//          File:                       Student.hpp
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
//                  1.StudentDriver.cpp
//                  2.Student.cpp
//
//*******************************************************************************************************

#ifndef Student_hpp
#define Student_hpp

using namespace std;
//*******************************************************************************************************

class Student
{
private:
    int studentNumber;
    string studentName;
    double GPA;
    
public:
    void setStudentNumber(int);
    void setStudentName(string);
    void setGpa(double);
    string getStudentName() const;
    int getStudentNumber() const;
    double getGpa() const;
};

#endif
