#pragma once
#include <iostream>
#include "Item.cpp"
using namespace std;
class OverseaItem :public Item
{
private:
	double landedCost;
public:
	OverseaItem() :Item()
	{
		this->landedCost = 0;
	}
	OverseaItem(int code, string name, double price, double quantity, double landedCost) :Item(code, name, price, quantity)
	{
		this->landedCost = landedCost;
	}
	double getLandedCost()const
	{
		return landedCost;
	}
	void setLandedCost(double landedCost)
	{
		this->landedCost = landedCost;
	}

	void print() 
	{
		Item::print();
		cout << "LandedCost: " << landedCost << endl;
	}


};