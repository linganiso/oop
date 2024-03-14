//Author: Linganiso Solethu
//File: billType.h is the header file
//This file contains specifications for the main program

#ifndef BILLTYPE_H
#define BILLTYPE_H
#include <iostream>
using namespace std;

class billType{
private:
	string patient_id;			//variable to store patient's ID.
	double pharmacyCharges;		//Variable to store pharmacy's Charges.
	double doctorFee;			//Variable to store doctor's fee.
	double roomCharges;			//Variable to store room's Charges.
	
public:
	billType();	
	//default constructor.
	//The patient_id is set to " ".
	//The pharmacyCharges is set to 0.
	//The doctorFee is set to 0.
	//The roomCharges is set to 0.
	billType(string,double,double,double);	//constructor with parameters.
	void setPatient_id(string);				//Function to set patient's ID.
	string getPatient_id() const;			//Function to return patient's ID.
	void setPharmacyCharges(double);		//Function to set pharmacy's Charges.
	double getPharmacyCharges() const;		//Function to return pharmacy's Charges.
	void setDoctorFee(double);				//Function to set doctor's fee.
	double getDoctorFee() const;			//Function to return doctor's fee.
	void setRoomCharges(double);			//Function to set room's Charges.
	double getRoomCharges() const; 			//Function to return room's Charges.
};
 #endif
