//Author: Linganiso Solethu
//File: doctorType.h is the header file
//This file contains specifications for the main program

#ifndef DOCTORTYPE_H
#define DOCTORTYPE_H
#include <iostream>
using namespace std;
//Sub class of personType which is the base class.
class doctorType: public personType
{
private:
	string speciality;		//variable to store the speciality of the doctor.
	
public:
	doctorType();		
	//default constructor
	//The speciality is set to " ".
	doctorType(string,string,string);		//constructor with parameters include the one in the base class.
	void setSpeciality(string);				//Function to set the speciality.
	string getSpeciality() const;			//Function to return the speciality.
};
 #endif
