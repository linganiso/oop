//Author: Linganiso Solethu
//File: personType.h is the header file
//This file contains specifications for the main program

#ifndef PERSONTYPE_H
#define PERSONTYPE_H
#include <iostream>
using namespace std;
//Base class
class personType{
private:
	string firstNam;	//variable to store the first name
	string lastNam;		//variable to store the last name
		
public:
	personType();		 
	//Default constructor
	//The set first name and last name as empty string (" ").
	//Postcondition: firstNam = " "; lastNam = " ";
	personType(string,string);
	//Constructor with parameters.
	//The first Name and last Name is set according to the parameters.
	//Postcondition:  firstNam=firstName; lastNam=lastName;
	void setFirstName(string); 	 	//Function to set first name
	string getFirstName() const; 	//Function to retun fisrt name
	void setLastName(string);		//Function to set last name
	string getLastName() const;		//Function to return last name

};
 #endif
