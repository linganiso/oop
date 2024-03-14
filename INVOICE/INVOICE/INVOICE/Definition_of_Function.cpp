#include<iostream>
#include<string>
#include"ClassInvoice.h"
using namespace std;


invoice::invoice(string partNum,string partDescrip,int qty,int price,int amount){
	
	Part_number=partNum;
	Part_descript=partDescrip;
	setQuantity(qty);
	setPrice(price);
	
	if(Price_per_item>0)
	{
		
		Price_per_item=price;
	}
	
	else
	{
	Price_per_item=1;
    }
    
    if(Quantity>0)
	{
    	
    	Quantity=qty;
	}
	
	else
	{
		Quantity=1;
	}
	
    if(Invoice_amount>0)
	{	
 		Invoice_amount=amount;
    }
    
    else
	{
 	    Invoice_amount=1;
    }
}

	void invoice::setPart_num(string partNum)
	{
		Part_number=partNum;
	}
	string invoice::getPart_num()const
	{
	    return Part_number;
	}
	
	void invoice::setPart_description(string partDescrip)
	{
		Part_descript=partDescrip;	
	}
	string invoice::getPart_description()const
	{
	    return Part_descript;
	}
	
	void invoice::setQuantity(int qty)
	{
	if(Quantity>0){
    	
    	Quantity=qty;
	    }
	else{
			Quantity=1;
     	}
		
	}
	int invoice::getQuantity()const
	{
	    return Quantity;
	}
	void invoice::setPrice(int price)
	{
	  if(Price_per_item>0)
	 	{	
			Price_per_item=price;	
      	}
    else
	{
      	Price_per_item=1;
	}
		
}
	int invoice::getPrice()const
	{
	  return Price_per_item;
	}
		
	void invoice::setAmount(int amount)
	{
		
	if(Invoice_amount>0)
	{
    	Invoice_amount=amount;
    }
    else
	{
 	    Invoice_amount=1;
	}
		
}
	int invoice::getAmount()const
	{
	    return getPrice()*getQuantity();	
	}
	
	



