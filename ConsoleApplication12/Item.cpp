#pragma once
#include <iostream>
using namespace std;
class Item
{
private:
	int code;
	string name;
	double price;
	double quantity;

public:
	Item()
	{
		this->code = 0;
		this->name = "unknown";
		this->price = 0;
		this->quantity = 0;

	}
	Item(int code, string name, double price, double quantity)
	{
		this->code = code;
		this->name = name;
		this->price = price;
		this->quantity = quantity;

	}
	int getCode() const
	{
		return code;
	}
	void setCode(int code)
	{
		this->code = code;
	}
	string getName() const
	{
		return name;
	}
	void setName(string name)
	{
		this->name = name;
	}
	double getPrice()const
	{
		return price;
	}
	void setPrice(double price) 
	{
		this->price = price;
	}
	double getQuantity() const
	{
		return quantity;
	}
	void setQuantity(double quantity)
	{
		this->quantity = quantity;
	}

	virtual void print()
	{
		cout << "Code: " << code << endl;
		cout << "Name: " << name << endl;
		cout << "price: " << price << endl;
		cout << "quantity: " << quantity << endl;
	}



};