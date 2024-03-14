/*
* Author:Solethu 219325561
* publisher : Solethu Linganiso
* Description : print content of items Part number,
* Quantity,amount,price
* Date created 2021/09/22                              
* Due Date:2021/09/27
*
*/
#include<iostream>
#include<string>
#include"ClassInvoice.h"
#include<iomanip>
using namespace std;

int main()
{
	
	invoice item("12345","hummer",100.564,5.78,0);
	cout<<fixed<<showpoint<<setprecision(2)<<endl;
	cout<<"Description :"<<item.getPart_description()<<endl;
    cout<<"Part number :"<<item.getPart_num()<<endl;
    cout<<"Quantity    :"<<item.getQuantity()<<endl;
    cout<<"Price       :"<<"R"<<item.getPrice()<<endl;
    cout<<"Amount      :"<<"R"<<item.getAmount();
    
    invoice item1("123456","Saw",0.75474,10.768,0);
	cout<<fixed<<showpoint<<setprecision(2)<<endl;
	cout<<"\nDescription :"<<item1.getPart_description()<<endl;
    cout<<"Part number :"<<item1.getPart_num()<<endl;
    cout<<"Quantity    :"<<item1.getQuantity()<<endl;
    cout<<"Price       :"<<"R"<<item1.getPrice()<<endl;
    cout<<"Amount      :"<<"R"<<item1.getAmount();
			
}
