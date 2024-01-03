//*****************************************************************************************************
//
//        File:                   stack.h
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
//            1.    stackDriver.cpp
//
//*****************************************************************************************************

#ifndef STACK_H
#define STACK_H

//*****************************************************************************************************

template <typename TYPE>
class Stack
{
    private:
        TYPE * stack;
        int top;
        int capacity;
    
    public:
        Stack(int c = 100);
        ~Stack();
        bool push(const TYPE & dataIn);
        bool pop(TYPE & dataOut);
        bool peek(TYPE & dataOut) const;
        int getNumValues() const;
        bool isFull() const;
        bool isEmpty() const;
    
};

//*****************************************************************************************************

template <typename TYPE>
Stack<TYPE> :: Stack(int c)
{
    capacity = c;
    stack = new TYPE[capacity];
    top = -1;
}

//*****************************************************************************************************

template <typename TYPE>
Stack<TYPE> :: ~Stack()
{
    capacity = 0;
    delete [] stack;
    stack = nullptr;
    top = -1;
}

//*****************************************************************************************************

template <typename TYPE>
bool Stack<TYPE> :: push(const TYPE & dataIn)
{
    bool success = false;
    
    if (top + 1 < capacity)
    {
        top++;
        stack[top] = dataIn;
        success = true;
    }

    return success;
}

//*****************************************************************************************************

template <typename TYPE>
bool Stack<TYPE> :: pop(TYPE & dataOut)
{
    bool success = false;
    
    if (top >= 0)
    {
        dataOut = stack[top];
        top--;
        success = true;
    }

    return success;
}

//*****************************************************************************************************

template <typename TYPE>
bool Stack<TYPE> :: peek(TYPE & dataOut) const
{
    bool success = false;
    
    if (top >= 0)
    {
        dataOut = stack[top];
        success = true;
    }
    
    return success;
}

//*****************************************************************************************************

template <typename TYPE>
int Stack<TYPE> :: getNumValues() const
{
    return top + 1;
}

//*****************************************************************************************************

template <typename TYPE>
bool Stack<TYPE> :: isFull() const
{
    return ((top + 1) == capacity);
}

//*****************************************************************************************************

template <typename TYPE>
bool Stack<TYPE> :: isEmpty() const
{
    return (top <= -1);
}

//*****************************************************************************************************

#endif
