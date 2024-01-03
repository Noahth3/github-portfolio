//*****************************************************************************************************
//
//        File:                   Node.h
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
//            1.    qDriver
//            2.    Queue.h
//
//*****************************************************************************************************

#ifndef Node_h
#define Node_h

//*****************************************************************************************************

template <typename TYPE>
struct Node
{
    TYPE data;
    Node<TYPE> * next;
    
    Node();
    Node(const TYPE & d, Node<TYPE> * n = nullptr);
};

//*****************************************************************************************************

template <typename TYPE>
Node<TYPE> :: Node()
{
    data = 0;
    next = nullptr;
}

//*****************************************************************************************************

template <typename TYPE>
Node<TYPE> :: Node(const TYPE & d, Node<TYPE> * n)
{
    data = d;
    next = n;
}

//*****************************************************************************************************

#endif
