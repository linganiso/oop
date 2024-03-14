//Author: Linganiso Solethu
//publisher : Solethu Linganiso
//Description : Program that computerze the billing 
//system of a hospital
//File: mainFunction.h is a main function file
//Date created 06/10/2021                            
//Due Date:10/10/2021

#include <iostream>
#include "dateType.h"
#include "personType.h"
#include "doctorType.h"
#include "billType.h"
#include "patientType.h"

using namespace std;	// use std namespace
// function main begins program execution
int main(){
	
	cout<<endl; 	//display endl
	cout<<" *********BILLING SYSTEM OF A HOSPITAL***********"<<endl;	//display message and endl
	cout<<endl; 	//display endl
	//display message and endl
	cout<<" ================================================"<<endl;	
	cout<<"	    	    Date"<<endl;									
	cout<<" ================================================"<<endl;		

	dateType date_of_birth(18,8,1998);	//initializes its member variables of date of birth day,month and year to 18, 8 and 1998.
	dateType admissionDate(20,5,2020);	//initializes its member variables of admission date day,month and year to 20, 5 and 2020.
	dateType dischargedDate(9,10,2021);	//initializes its member variables of discharged date day,month and year to 9, 10 and 2021.
	
	cout<<" Date of birth		: ";	//Display date of birth of the user
	date_of_birth.printDate();			//The function output the centents of three member variables of date_of_birth.
	
	cout<<" Admission date 	: ";		//Diplay admission date of the user in hospital
	admissionDate.printDate();			//The function output the centents of three member variables of admissionDate.
	
	cout<<" Discharged date	: ";		//Display the discharge date of the user in hospital
	dischargedDate.printDate();			//The function output the centents of three member variables of dischargedDate.
	
	cout<<endl; 	//display endl
	//display message and endl
	cout<<" ================================================"<<endl; 	
	cout<<"	    	Doctor's Info"<<endl;                       		
	cout<<" ================================================"<<endl;	
	
	doctorType doctor("WILLIAM","SOBHUZA","PLASTIC SURGERY");
	cout<<" First Name		: "<<doctor.getFirstName()<<endl;		//Output the doctor's first name.
	cout<<" Last Name		: "<<doctor.getLastName()<<endl;		//Output the doctor's last name.
	cout<<" Specialty 		: "<<doctor.getSpeciality()<<endl;		//Output the doctor's speciality 
	
	cout<<endl;		 //display endl
	//display message and endl
	cout<<" ================================================"<<endl;		
	cout<<"	    	Patient's Info"<<endl;									
	cout<<" ================================================"<<endl;	

	patientType patient("BUZO","MHLALAWEDWA","9806134864087",23," "," "," "," ");	
	//initializes member variables of First Name, First Name, Patient's ID, Patient's age to BUZO, MHLALAWEDWA, 9806134864087. 23.
	cout<<" First Name		: "<<patient.getFirstName()<<endl;			 		//Output patient's first name.
	cout<<" Last Name		: "<<patient.getLastName()<<endl;					//Output patient's last name.
	cout<<" Patient's ID 		: "<<patient.getPatient_id()<<endl;				//Output patient's ID.
	cout<<" Patient's age 		: "<<patient.getAge()<<" years old"<<endl;		//Output patient's age.
	
	cout<<endl;		//display endl
	//display message and endl
	cout<<" ================================================"<<endl;	
	cout<<"	    	Billing Details "<<endl;							
	cout<<" ================================================"<<endl;	
	
	billType bill(" ",300,859.45,598.65); 							
	//initializes member variables of billType patient's ID, Pharmacy's Charges,  
	//Doctor's fee and Room's Charges to " ", 300, 859.45 and 598.65.
	cout<<" Pharmacy's Charges 	: R"<<bill.getPharmacyCharges()<<endl; 	//diplay the Pharmacy's Charges
	cout<<" Doctor's fee 		: R"<<bill.getDoctorFee()<<endl;//display the Doctor's fee
	cout<<" Room's Charges 	: R"<<bill.getRoomCharges()<<endl; //display the Room's Charges
	
	//Add the charges; display the sum
	cout<<" ________________________________________________"<<endl;
	cout<<" Total charges 		: R"<<bill.getPharmacyCharges()+
									  bill.getDoctorFee()+
								  	  bill.getRoomCharges()<<endl;
	cout<<" ________________________________________________"<<endl;
	
	return 0;	// indicate that program ended successfully
};	// end function main

