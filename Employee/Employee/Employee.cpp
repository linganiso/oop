#include<iostream>
#include<string>
#include"header.h"
using namespace std;


Employee::Employee(string firstNam,string lastNam,int Salary){
	
	First_Name=firstNam;
	Last_Name=lastNam;
	Monthly_Salary=Salary;
	
	if(Monthly_Salary>0)
	{
    	
    	Monthly_Salary=Salary;
	}
	
	else
	{
		Monthly_Salary=0;
	}
			
}

	void Employee::setFirstName(string firstNam)
	{
		First_Name=firstNam;
	}
	string Employee::getFirstName()const
	{
	    return First_Name;
	}
	
	void Employee::setLastName(string lastNam)
	{
		Last_Name=lastNam;	
	}
	string Employee::getLastName()const
	{
	    return Last_Name;
	}
	
	void Employee::setMonthlySalary(int Salary)
	{
		Monthly_Salary=Salary;
	}
	int Employee::getMonthlySalary()const
	{
	    return Monthly_Salary;
	}
	


