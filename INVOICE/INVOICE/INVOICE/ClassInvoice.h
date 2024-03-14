#include<iostream>
#include<string>
using namespace std;

class invoice{

private:
	string Part_number;
	string Part_descript;
	int Quantity;
	int Price_per_item;
	int Invoice_amount;
public:
	invoice();
	invoice(string,string,int,int,int);
	void setPart_num(string);
	string getPart_num()const;
	void setPart_description(string);
	string getPart_description()const;
	void setQuantity(int);
	int getQuantity()const;
	void setPrice(int);
	int getPrice()const;
	void setAmount(int);
    int getAmount()const;

};
