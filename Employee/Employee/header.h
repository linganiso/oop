#include<iostream>
#include<string>
using namespace std;

class Employee {

private:
	string First_Name;
	string Last_Name;
	int Monthly_Salary; 
public:
	Employee();
	Employee(string,string,int);
	
	void setFirstName(string);
	string getFirstName()const;
	
	void setLastName(string);
	string getLastName()const;
	
	void setMonthlySalary(int);
	int getMonthlySalary()const;
};
