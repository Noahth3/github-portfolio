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
//                  1.Employee.hpp
//                  2.Employee.cpp
//
//*******************************************************************************************************

#include <iostream>
#include <string>
#include <iomanip>
#include "Employee.hpp"

using namespace std;

//*******************************************************************************************************

void getInput(Employee* ptrEmp, int SIZE);
void displayAllEmployeeRecord(const Employee* ptrEmp, int SIZE);

//*******************************************************************************************************


int main()
{
    int SIZE = 0;
    cout << "Enter the number of employees: ";
    cin >> SIZE;
    cout << endl;
    cout << string(85, '*') << endl;
    
    Employee * ptrEmp = new Employee[SIZE];
    getInput(ptrEmp, SIZE);
    displayAllEmployeeRecord(ptrEmp, SIZE);
    cout << endl;
    
    delete[] ptrEmp;
    ptrEmp = nullptr;
    
    return 0;
}

//*******************************************************************************************************

void getInput(Employee * ptrEmp, const int SIZE)
{
    int empID;
    string empName;
    double salary;
    
    for (int i =0; i < SIZE; i++)
    {
        cout << "Please enter the information for Employee " << i + 1 << endl;
        
        int MIN_ID = 1000;
        int MAX_ID = 2000;
        
        cout << "Please enter ID: ";
        cin >> empID;
        while (empID < MIN_ID | empID > MAX_ID)
        {
            cout << "!!!Error ID cannot be less than 1000 or more than 2000" << endl;
            cout << "Please enter ID: ";
            cin >> empID;
        }
        
        cout << "Please enter name: ";
        cin.ignore();
        getline(cin, empName);
        
        int MIN_SAL = 0;
        
        cout << "Please enter salary: ";
        cin >> salary;
        while(salary < MIN_SAL)
        {
            cout << "!!!Error salary must be more then 0" << endl;
            cout << "Please enter Employee salary: ";
            cin >> salary;
        }
        cout << endl;
        
        ptrEmp[i].setEmpID(empID);
        ptrEmp[i].setEmpName(empName);
        ptrEmp[i].setSalary(salary);
    }
}

//*******************************************************************************************************
void displayAllEmployeeRecord(const Employee * ptrEmp, const int SIZE)
{
    cout << setw(25) << left << "Employee Name";
    cout << setw(25) << left << "Employee Number";
    cout << setw(25) << left << "Salary";
    cout << endl;
    
    cout << string(85, '*') << endl;
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(25) << left << ptrEmp[i].getEmpName();
        cout << setw(25) << left << ptrEmp[i].getEmpID();
        cout << setw(25) << left << ptrEmp[i].getSalary();
        cout << endl;
    }
}
//OUTPUT
//Enter the number of employees: 5
//
//*************************************************************************************
//Please enter the information for Employee 1
//Please enter ID: 1001
//Please enter name: John Doe
//Please enter salary: 5000
//
//Please enter the information for Employee 2
//Please enter ID: 200
//!!!Error ID cannot be less than 1000 or more than 2000
//Please enter ID: 1200
//Please enter name: Jane Doe
//Please enter salary: 1500
//
//Please enter the information for Employee 3
//Please enter ID: 1002
//Please enter name: Joe Doe
//Please enter salary: 3450
//
//Please enter the information for Employee 4
//Please enter ID: 1010
//Please enter name: Janet Doe
//Please enter salary: 5678
//
//Please enter the information for Employee 5
//Please enter ID: 4000
//!!!Error ID cannot be less than 1000 or more than 2000
//Please enter ID: 1040
//Please enter name: James Doe
//Please enter salary: 9200
//
//Employee Name            Employee Number          Salary
//*************************************************************************************
//John Doe                 1001                     5000
//Jane Doe                 1200                     1500
//Joe Doe                  1002                     3450
//Janet Doe                1010                     5678
//James Doe                1040                     9200
//
//James Doe removed!
//Janet Doe removed!
//Joe Doe removed!
//Jane Doe removed!
//John Doe removed!
//Program ended with exit code: 0
