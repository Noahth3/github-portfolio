//*****************************************************************************************************
//
//        File:                   Queue.h
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
//            1.    qDriver.cpp
//            2.    Node.h
//
//*****************************************************************************************************

#ifndef Queue_h
#define Queue_h
#include <new>

#include "Node.h"

//*****************************************************************************************************

template <typename TYPE>
class Queue
{
    private:
        Node<TYPE> * front;
        Node<TYPE> * rear;
        int numValues;
    
    public:
        Queue();
        ~Queue();
        bool enqueue(const TYPE & dataIn);
        bool dequeue(TYPE & dataOut);
        bool viewFront(TYPE & dataOut) const;
        bool viewRear(TYPE & dataOut) const;
        int getNumValues() const;
        bool isFull() const;
        bool isEmpty() const;
    
};

//*****************************************************************************************************

template <typename TYPE>
Queue<TYPE> :: Queue()
{
    front = nullptr;
    rear = nullptr;
    numValues = 0;
}

//*****************************************************************************************************

template <typename TYPE>
Queue<TYPE> :: ~Queue()
{
    Node<TYPE> * pDel;
    
    while (front)
    {
        pDel = front;
        front = front -> next;
        delete pDel;
    }
    
}

//*****************************************************************************************************

template <typename TYPE>
bool Queue<TYPE> :: enqueue(const TYPE & dataIn)
{
    bool success = false;
    Node<TYPE> * pNew;
    
    pNew = new (nothrow) Node<TYPE> (dataIn);
    
    if (pNew)
    {
        if (front)
        {
            rear -> next = pNew;
        }
        else
        {
            front = pNew;
        }
        
        rear = pNew;
        numValues++;
        success = true;
    }
    
    return success;
}

//*****************************************************************************************************

template <typename TYPE>
bool Queue<TYPE> :: dequeue(TYPE & dataOut)
{
    bool success = false;
    Node<TYPE> * pDel = front;
    
    if (front)
    {
        dataOut = pDel -> data;
        front = front -> next;
        numValues--;
        delete pDel;
        success = true;
        
        if (!front)
        {
            rear = nullptr;
        }
        
    }
    
    return success;
}

//*****************************************************************************************************

template <typename TYPE>
bool Queue<TYPE> :: viewFront(TYPE & dataOut) const
{
    bool success = false;
    
    if (front)
    {
        dataOut = front -> data;
        success = true;
    }
    
    return success;
}
 
//*****************************************************************************************************

template <typename TYPE>
bool Queue<TYPE> :: viewRear(TYPE & dataOut) const
{
    bool success = false;
    
    if (front)
    {
        dataOut = rear -> data;
        success = true;
    }
    
    return success;
}

//*****************************************************************************************************

template<typename TYPE>
int Queue<TYPE> :: getNumValues() const
{
    return numValues;
}

//*****************************************************************************************************

template<typename TYPE>
bool Queue<TYPE> :: isFull() const
{
    bool success = true;
    Node<TYPE> * pNew;
    
    pNew = new (nothrow) Node<TYPE>;
    
    if (pNew)
    {
        success = false;
        delete pNew;
    }
    
    return success;
}

//*****************************************************************************************************

template<typename TYPE>
bool Queue<TYPE> :: isEmpty() const
{
    return (numValues == 0);
}

//*****************************************************************************************************

#endif
