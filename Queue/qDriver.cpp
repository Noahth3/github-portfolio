//*****************************************************************************************************
//
//        File:                   qDriver.cpp
//
//        Student:                Noah Thomas
//
//        Assignment:             Program #10
//
//        Course Name:            Data Structures I
//
//        Course Number:          COSC 3050-01
//
//        Due:                    November 16
//
//
//        This program test values in linked list queue data structure.
//
//        Other files required:
//            1.    Queue.h
//            2.    Node.h
//
//*****************************************************************************************************

#include <iostream>

using namespace std;

#include "Queue.h"

//*****************************************************************************************************

int main()
{
    Queue<int> myQueue;
    int dataOut = 0;
    int dataOutFront = 0;
    int dataOutRear = 0;

    cout << "List is currently empty" << endl << endl;
    
    cout << "Enqueue six values (Test: 2, 5, 6, 1, 8, 9):" << endl;
    myQueue.enqueue(2);
    myQueue.enqueue(5);
    myQueue.enqueue(6);
    myQueue.enqueue(1);
    myQueue.enqueue(8);
    myQueue.enqueue(9);
    myQueue.viewFront(dataOutFront);
    myQueue.viewRear(dataOutRear);
    
    cout << "Front: " << dataOutFront << "\nRear: " << dataOutRear << "\nNumValues: " <<
    myQueue.getNumValues() << endl << endl;;
    
    if (myQueue.isEmpty())
    {
        cout << "List is currently empty" << endl << endl;
    }
    else if (myQueue.isFull())
    {
        cout << "List is currently full." << endl << endl;
    }
    
    
    
    dataOutFront = 0;
    dataOutRear = 0;
    
    
    
    cout << "Dequeue two values then enqueue 8:" << endl;
    myQueue.dequeue(dataOut);
    myQueue.dequeue(dataOut);
    myQueue.enqueue(8);
    myQueue.viewFront(dataOutFront);
    myQueue.viewRear(dataOutRear);
    
    cout << "Front: " << dataOutFront << "\nRear: " << dataOutRear << "\nNumValues: " <<
    myQueue.getNumValues() << endl << endl;
    
    if (myQueue.isEmpty())
    {
        cout << "List is currently empty" << endl << endl;
    }
    else if (myQueue.isFull())
    {
        cout << "List is currently full." << endl << endl;
    }
    
    return 0;
}

//*****************************************************************************************************

/*
 List is currently empty

 Enqueue six values (Test: 2, 5, 6, 1, 8, 9):
 Front: 2
 Rear: 9
 NumValues: 6

 Dequeue two values then enqueue 8:
 Front: 6
 Rear: 8
 NumValues: 5

 Program ended with exit code: 0
*/

