//*******************************************************************************************************
//
//          File:                       Employee.hpp
//
//          Student:                    Noah Thomas
//
//          Assignment:                 Program #11
//
//          Course Name:                Programming II
//
//          Course Number:              COSC 1560
//
//          Due:                        December 6th
//
//
//          This program will display a employees name, ID number, and salary that the user inputs.
//
//          Other files required:
//                  1.Employee.cpp
//                  2.EmployeeDriver.cpp
//
//*******************************************************************************************************

#ifndef EMPLOYEE_hpp
#define EMPLOYEE_hpp

#include <stdio.h>
#include <string>

using namespace std;
//*******************************************************************************************************

class Employee
{
private:
    int empID;
    string empName;
    double salary;
    
public:
    Employee();
    ~Employee();
    void setEmpID(int);
    void setEmpName(string);
    void setSalary(double);
    
    string getEmpName() const;
    int getEmpID() const;
    double getSalary() const;
};
#endif
