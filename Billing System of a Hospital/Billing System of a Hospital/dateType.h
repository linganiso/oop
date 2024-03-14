//Author: Linganiso Solethu
//File: dateType.h is the header file 
//This file contains specifications for the main program

#ifndef DATETYPE_H
#define DATETYPE_H
#include <iostream>

using namespace std;

 class dateType{		
private:
	int day;	 //variable to store the day
	int month;	 //variable to store the month
	int year;	 //variable to store the year
	
 public:
 	dateType();		
 	//Default constructor
	//The date is set to 0/0/0.
	//Postcondition: day = 0; month = 0; year = 0;
 	dateType(int d,int m,int y);
	//Constructor with parameters.
	//The date is set according to the parameters.
	//Postcondition: day = d; month = m; year = y;

	void setDate(int ,int,int );
	//Function to set the Date.
	//The date is set according to the parameters.
	//Postcondition: day = d; month = m; year = y;
	// 				The function checks whether the
	// 				values of day, month and year
	// 				are valid. If a value is invalid, the
	//				default value 0 is assigned.
	void printDate() const;	
	//This function connot modify the member variables of a variable of type dateType
	//Function to output the Date
	//Postcondition: The date is printed in the form day/month/year.
 };
 #endif
