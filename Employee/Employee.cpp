//*******************************************************************************************************
//
//          File:                       Employee.cpp
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
//                  1.Employee.hpp
//                  2.EmployeeDriver.cpp
//
//*****************************************************************************************

#include <iostream>
#include "Employee.hpp"
#include <cstring>

using namespace std;

//*******************************************************************************************************

Employee::Employee()
{
    this -> empID = 0;
    this -> empName = "*none*";
    this -> salary = 0;
}

//*******************************************************************************************************

Employee::~Employee()
{
    cout << empName << " removed!" << endl;
    
    this -> empID = 0;
    this -> empName = "*none*";
    this -> salary = 0;
}

//*******************************************************************************************************

void Employee::setEmpID(int empID)
{
    this -> empID = empID;
}

//*******************************************************************************************************

int Employee::getEmpID() const
{
    return  empID;
}

//*******************************************************************************************************

void Employee::setEmpName(string empName)
{
    this -> empName = empName;
}

//*******************************************************************************************************

string Employee::getEmpName() const
{
    return empName;
}

//*******************************************************************************************************

void Employee::setSalary(double salary)
{
    this -> salary = salary;
}

//*******************************************************************************************************

double Employee::getSalary() const
{
    return salary;
}
