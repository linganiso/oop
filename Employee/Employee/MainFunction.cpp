/*
* Author:Solethu 219325561
* publisher : Solethu Linganiso
* Description : print content of items first name,
* last name and salary before and after 10% raise
* Date created 2021/09/29                            
* Due Date:2021/10/04
*
*/
#include<iostream>
#include<string>
#include"header.h"
#include<iomanip>
using namespace std;

int main()
{
	
	Employee Employer1("Bob","Janes",34500);
	
	cout<<"Employee 1 : "<<Employer1.getFirstName()
		<<" "<<Employer1.getLastName()<<"; "
		<<" Yearly Salary :"<<Employer1.getMonthlySalary()<<endl;

    Employee Employer2("Susan","Baker",37800);

	cout<<"Employee 2 : "<<Employer2.getFirstName()<<" "
		<<Employer2.getLastName()<<"; "<<" Yearly Salary :"
		<<Employer2.getMonthlySalary()<<endl;
	
	cout<<"\nIncreasing employee salaries by 10%\n"<<endl;
	
	cout<<"Employee 1 : "<<Employer1.getFirstName()
		<<" "<<Employer1.getLastName()<<"; "
		<<" Yearly Salary :"<<Employer1.getMonthlySalary()+Employer1.getMonthlySalary()*10/100<<endl;
		
	cout<<"Employee 2 : "<<Employer2.getFirstName()<<" "
		<<Employer2.getLastName()<<"; "<<" Yearly Salary :"
		<<Employer2.getMonthlySalary()+Employer2.getMonthlySalary()*10/100<<endl;
											
};
