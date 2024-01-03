//*****************************************************************************************************
//
//        File:                   node.h
//
//        Student:                Noah Thomas
//
//        Assignment:             Program #11
//
//        Course Name:            Data Structures I
//
//        Course Number:          COSC 3050-01
//
//        Due:                    November 22nd
//
//
//        This program test if a palindrome is valid or invalid and which type if valid.
//
//        Other files required:
//            1.    pal.cpp
//            2.    Queue.h
//            3,    Stack.h
//            4.    palindromes.txt
//
//*****************************************************************************************************

#ifndef NODE_H
#define NODE_H

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
