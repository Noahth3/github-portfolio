//*****************************************************************************************************
//
//        File:                   pal.cpp
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
//            1.    Node.h
//            2.    Queue.h
//            3,    Stack.h
//            4.    palindromes.txt
//
//*****************************************************************************************************

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>

using namespace std;

#include "Stack.h"
#include "Queue.h"

//*****************************************************************************************************

bool testNdisplayPal(Stack<char> & s1, Queue<char> & myQueue);
char getPalType(bool & hasSpace, bool & hasPunct);
void displayPalResult(char & palType, bool & isValid);

//*****************************************************************************************************

int main()
{
    Stack<char> s1;
    Stack<char> tempStack;
    Queue<char> myQueue;
    
    char pal[100];
    char palType;
    
    bool isValid;
    
    ifstream palFile;
    palFile.open ("palindromes.txt");
    
    if (palFile.fail())
    {
        cout << "failed to open file.";
    }
    else
    {
        while (palFile.getline(pal, 100, '#'))
        {
            int len = int (strlen(pal));
            bool hasSpace = false;
            bool hasPunct = false;
        
            for (int i = 0; i < len; i++)
            {
                if (ispunct(pal[i]))
                {
                    hasPunct = true;
                }
                else if (isspace(pal[i]))
                {
                    hasSpace = true;
                }
                else
                {
                    s1.push(tolower(pal[i]));
                    myQueue.enqueue(tolower(pal[i]));
                }
                
            }
            
            isValid = testNdisplayPal(s1, myQueue);
            palType = getPalType(hasSpace, hasPunct);
            displayPalResult(palType, isValid);
        
        }
        
    }
    
    palFile.close();
    
    return 0;
}

//*****************************************************************************************************

bool testNdisplayPal(Stack<char> & s1, Queue<char> & myQueue)
{
    bool success = true;
    char test1;
    char test2;

    while ((s1.pop(test1)) && (myQueue.dequeue(test2)))
    {
        if (test1 != test2)
        {
            success = false;
        }

        cout << test1;
        
    }
    
    return success;
}

//*****************************************************************************************************

char getPalType(bool & hasSpace, bool & hasPunct)
{
    char palType = '1';
    
    if (hasPunct)
    {
        palType = '3';
    }
    else if (hasSpace)
    {
        palType = '2';
    }
    
    return palType;
}

//*****************************************************************************************************

void displayPalResult(char & palType, bool & isValid)
{
    if (isValid)
    {
        cout << setw(50) << "type " << palType << endl;
    }
    else
    {
        cout << setw(50) << "invalid" << endl;
    }
    
}

//*****************************************************************************************************

/*
aha                                             type 3
isitiitisi                                             type 3
deed                                             type 1
srotor                                           invalid
neveroddoreven                                             type 2
nolemonsnomelon                                             type 3
racecar                                             type 2
cimoc                                           invalid
wasitacaroracatisaw                                             type 3
yddad                                           invalid
Program ended with exit code: 0
*/

