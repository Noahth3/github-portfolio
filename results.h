//*****************************************************************************************************
//
//        File:                   results.h
//
//        Student:                Noah Thomas
//
//        Assignment:             Program #10
//
//        Course Name:            Data Structures II
//
//        Course Number:          COSC 3100-01
//
//        Due:                    May 3rd
//
//
//        This program calculates the amount of compares and copies from list of values using multiple 
//        sorts.
//
//        Other files required:
//            1.    sortCompares.cpp
//
//*****************************************************************************************************

#ifndef RESULTS_H
#define RESULTS_H

//*****************************************************************************************************

struct Results
{
	int ordCompares;
	int unOrdCompares;
	int revOrdCompares;
	int avgCompares;
	int ordCopies;
	int unOrdCopies;
	int revOrdCopies;
	int avgCopies;

	Results();
};

//*****************************************************************************************************

Results ::Results()
{
	ordCompares = 0;
	unOrdCompares = 0;
	revOrdCompares = 0;
	avgCompares = 0;
	ordCopies = 0;
	unOrdCopies = 0;
	revOrdCopies = 0;
	avgCopies = 0;
}

//*****************************************************************************************************

#endif