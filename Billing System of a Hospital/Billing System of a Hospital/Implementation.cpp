//Author: Linganiso Solethu
//File: Implimentation.h 
//Implimentation.h is implementation file
//This file provides the function implimentation or functionality
#include <iostream>
#include "dateType.h"	
#include "personType.h"
#include "doctorType.h"
#include "billType.h"
#include "patientType.h"
using namespace std;

dateType ::dateType()	
//default constructor that initialize day, month and year to all 0.
{
	day=0;
	month=0;
	year=0;	
}
dateType::dateType(int d,int m,int y){
	//constructor with parameters
	//day = d; month = m; year = y;	
	//If these values are out of range the member variable d, m and y
	//are initialized to 0
	if(0<=d&&d<=31)
		day=d;
	else
		day=0;
		
	if(0<=m&&m<=12)
		month=m;
	else
		month=0;
				
	if(y>0)
		year=y;
	else
		year=0;
				
}

void dateType::setDate(int d,int m,int y){
//The definition of setDate check for the valid value of m,d and y.
//If these values are out of range the member variable d, m and y
//are initialized to 0

	if(0<=d&&d<=31)
		day=d;
	else
		day=0;
		
	if(0<=m&&m<=12)
		month=m;
	else
		month=0;
				
	if(y>0)
		year=y;
	else
		year=0;
							
}
void dateType::printDate() const
{
//The function contain the values that weill call to print them	
	cout<<day<<"/"<<month<<"/"<<year<<endl;		//print the Date
		
}
//*****************************************
personType ::personType(){
//default constructor that initialize both first and last name to empty string.	
	firstNam=" ";
	lastNam=" ";
}
personType ::personType(string firstName,string lastName){
//constructor with parameters which set firstNam=firstName; lastNam=lastName;	
	firstNam=firstName;
	lastNam=lastName;
}
	void personType::setFirstName(string firstName){ 	//Function set firstNam=firstNam;
		firstNam=firstNam;
	}
	string personType::getFirstName() const{	//Function return firstNam;
		return firstNam;
	}
	void personType::setLastName(string lastName){ 	//Function set lastNam=lastName;
		lastNam=lastName;
	}
	string personType::getLastName() const{ 	//Function return lastNam;
		return lastNam;
	}	

//*******************************************
doctorType::doctorType(){
	//default constructor that initialize speciality to empty string.
	speciality=" ";
}
doctorType::doctorType(string firstName,string lastName, string spty) :personType(firstName,lastName){
	//constructor with parameters. speciality=spty;
	//Include first name and the last name from base class personType
	speciality=spty;							
}	
	void doctorType::setSpeciality(string spty){
		//Function set speciality=spty
		speciality=spty;	
	}
	string doctorType::getSpeciality() const{
		//Function return speciality
		return speciality;
	}
	
//********************************************

billType::billType(){		//default constructor that initialize:
	patient_id=" ";			//patient_id=" ";
	pharmacyCharges=0;		//pharmacyCharges to 0.
	doctorFee=0;			//doctorFee to 0.
	roomCharges=0;			//roomCharges to 0.
}
billType::billType(string id,double Pcharges,double Dfee,double Rcharges)	{
	//constructor with parameters 
	patient_id=id;
	pharmacyCharges=Pcharges;
	doctorFee=Dfee;
	roomCharges=Rcharges;
}
	void billType::setPatient_id(string id){
		//Function set patient_id=id;
		patient_id=id;
	}
	string billType::getPatient_id() const{
		//Function return patient_id;
		return patient_id;
	}
	void billType::setPharmacyCharges(double Pcharges){
		//Function set pharmacyCharges=Pcharges;
		pharmacyCharges=Pcharges;
	}
	double billType::getPharmacyCharges() const{
		//Function retrieve pharmacyCharges that was set to Pcharges
		return pharmacyCharges;
	}
	void billType::setDoctorFee(double Dfee){
		//Function set doctorFee=Dfee;
		doctorFee=Dfee;
	}
	double billType::getDoctorFee() const{
	//Function retrieve	doctorFee that was set to Dfee;
	return doctorFee;
	}
	void billType::setRoomCharges(double Rcharges){
		//Function set Rcharges=Rcharges;
		roomCharges=Rcharges;
	}
	double billType::getRoomCharges() const{
		//Function retrieve roomCharges that was set to Rcharges
		return roomCharges;
	}
//***************************************
patientType::patientType() 	//default constructor that initialize:
{
	patient_id=" ";			//patient_id to " ".
	age=0;					//age to 0.
	date_of_birth=" ";		//date of birth to " ".
	physicianNam=" ";		//Physician's name to " ".
	admissionDate=" ";		//Admission date to " ".
	dischargedDate=" ";		//Discharged date to " ".
}	
patientType::patientType(string firstName,string lastName,string id,int Age,string dfb,string PNam,string ADate,string Ddate):personType(firstName,lastName)
	//constructor with parameters.
	//Include first name and the last name from base class personType
{
	patient_id=id;
	age=Age;
	date_of_birth=dfb;
	physicianNam=PNam;
	admissionDate=ADate;
	dischargedDate=Ddate;
}
	void patientType::setPatient_id(string id)
	//Function set patient_id to id;
	{
		patient_id=id;
	}
	string patientType::getPatient_id() const //This function cannot modify the mem ber variables of a variable of the type patientType
	//Function retrieve the patient_id that was set id.
	{
		return patient_id;
	}
	void patientType::setAge(int Age)
	//Function that set age to Age.
	{
		age=Age;
	}
	int patientType::getAge() const	//This function cannot modify the mem ber variables of a variable of the type patientType
	//Function retrieve age that was set to Age.
	{
		return age;
	}
	void patientType::setDate_of_birth(string dfb)
	//Function that set date_of_birth to dfb.
	{
		date_of_birth=dfb;
	}
	string patientType::gettDate_of_birth() const	//This function cannot modify the mem ber variables of a variable of the type patientType
	//Function retrieve date_of_birth that was set to dfb.
	{
		return	date_of_birth;
	}
	void patientType::setPhysicianNam(string PNam)
	//Functrion that set physicianNam to PNam. 
	{
		physicianNam=PNam;
	}
	string patientType::getPhysicianNam() const	//This function cannot modify the mem ber variables of a variable of the type patientType
	//Function retrieve physicianNam that wat set to PNam. 
	{
		return physicianNam;
	}
	void patientType::setAdmissionDate(string ADate)
	//Function set admissionDate to ADate.
	{
		admissionDate=ADate;
	}
	string patientType::getAdmissionDate() const	//This function cannot modify the mem ber variables of a variable of the type patientType
	//Function retrieve that was set to ADate.
	{
		return admissionDate;
	}
	void patientType::setDischargedDate(string Ddate){
		dischargedDate=Ddate;
	}
	string patientType::getDischargedDate() const	//This function cannot modify the mem ber variables of a variable of the type patientType
	//Function retrieve dischargedDate that was set to Ddate.
	{
		return dischargedDate;
	}
