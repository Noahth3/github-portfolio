//*****************************************************************************************************
//
//        File:                   stackDriver.cpp
//
//        Student:                Noah Thomas
//
//        Assignment:             Program #7
//
//        Course Name:            Data Structures I
//
//        Course Number:          COSC 3050-01
//
//        Due:                    October 28th
//
//
//        This program test values in an stack by pushing, poping, and peeking the values.
//
//        Other files required:
//            1.    stack.h
//
//*****************************************************************************************************

#include <iostream>

using namespace std;

#include "stack.h"

//*****************************************************************************************************

int main()
{
    Stack<int> myStack(100);
    int dataOut = 0;
    
    if (myStack.isFull())
    {
        cout << "Stack is currently full"  << endl << endl;
    }
    else if (myStack.isEmpty())
    {
        cout << "Stack is currently empty" << endl << endl;
    }
    
    cout << "Push(Test: 2, 5, 6, 7, 9): ";
    if (myStack.push(2))
    {
        cout << "Push successsful!" << endl;
        myStack.push(5);
        myStack.push(6);
        myStack.push(7);
        myStack.push(9);
    
        cout << "Peek Test: ";
    
        if (myStack.peek(dataOut))
        {
            cout << "Peek successsful!" << endl;
            cout << "Top is: " << dataOut << endl;
            cout << "NumValues is: " << myStack.getNumValues() << endl << endl;
        }
        else
        {
            cout << "Peek Failed." << endl;
        }
    
    }
    else
    {
        cout << "Push Failed." << endl;
    }

    
    dataOut = 0;
    
    
    cout << "Pop Test: ";
    
    if (myStack.pop(dataOut))
    {
        cout << "Pop successsful!" << endl;
        cout << "Peek Test: ";
        
        if (myStack.peek(dataOut))
        {
            cout << "Peek successsful!" << endl;
            cout << "Top is: " << dataOut << endl;
            cout << "NumValues is: " << myStack.getNumValues() << endl << endl;
        }
        else
        {
            cout << "Peek Failed." << endl;
        }
        
    }
    else
    {
        cout << "Pop Failed." << endl;
    }
    
    if (myStack.isFull())
    {
        cout << "Stack is currently full"  << endl << endl;
    }
    else if (myStack.isEmpty())
    {
        cout << "Stack is currently empty" << endl << endl;
    }
    
    return 0;
}

//*****************************************************************************************************

/*
 Stack is currently empty

Push(Test: 2, 5, 6, 7, 9): Push successsful!
Peek Test: Peek successsful!
Top is: 9
NumValues is: 5

Pop Test: Pop successsful!
Peek Test: Peek successsful!
Top is: 7
NumValues is: 4

Program ended with exit code: 0
*/

