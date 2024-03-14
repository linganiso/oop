//Author: Linganiso Solethu
//File: patientType.h is the header file
//This file contains specifications for the main program

#ifndef PATIENTTYPE_H
#define PATIENTTYPE_H
#include <iostream>

using namespace std;
//Sub class derived from personType which is a base class
class patientType : public personType{
private:
	string patient_id;	//Variable to store patient's ID.
	int age;			 //Variable to store age;
	string date_of_birth; //Variable to store date of birth.
	string physicianNam; //Variable to store physician's name.
	string admissionDate; //Variable to store admission date.
	string dischargedDate; //Variable to store discharged date.
	
public:
	patientType();		//default constructor
	patientType(string,string,string,int,string,string,string,string);	
	//constructor with parameters include the two members from base class.
	
	void setPatient_id(string); 			//Function to set patient's ID.
	string getPatient_id() const;			//Function return patient's ID.
	void setAge(int);						//Function to set age.
	int getAge() const;						//Function to return age.
	void setDate_of_birth(string);			//Function to set date of birth.
	string gettDate_of_birth() const; 		//Function to return date of birth.
	void setPhysicianNam(string); 			//Function to set physician's name.
	string getPhysicianNam() const;			//Function to return physician's name.
	void setAdmissionDate(string);			//Function to set admission date.
	string getAdmissionDate() const;		//Function to return admission date.
	void setDischargedDate(string);			//Function to set discharged date.
	string getDischargedDate() const;		//Function to set discharged date.
};
 #endif
