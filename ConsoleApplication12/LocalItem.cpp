#pragma once
#include <iostream>
#include "Item.cpp"
using namespace std;
//class encapsulation
class LocalItem :public Item
{
private:
	double tax;
public:
	LocalItem() :Item()
	{
		this->tax = 0;
	}
	LocalItem(int code, string name, double price, double quantity, double tax) :Item(code, name, price, quantity)
	{
		this->tax = tax;
	}
	double getTax()const
	{
		return tax;
	}
	void setTax(double tax)
	{
		this->tax = tax;
	}

	void print() 
	{
		Item::print();
		cout << "Tax: " << tax << endl;
	}
	
};