#pragma once
#include <iostream>
#include <algorithm>
#include "Item.cpp"
#include "LocalItem.cpp"
#include "OverseaItem.cpp"
#include <vector>
using namespace std;
class Warehouse
{
private:
	string name;
	vector<Item*> items;

public:

	void createItem(Item* item) 
	{
		items.push_back(item);
	}
	vector<Item*> readAllItem() 
	{
		return items;
	}
	void updateItem(int code)
	{
		for (auto it = items.begin(); it != items.end(); it++) 
		{
			if ((*it)->getCode() == code) 
			{
				cout << "Enter a new name: ";
				string name;
				cin >> name;
				(*it)->setName(name);
				break;
			}
			else
			{
				cout << "Not found";
			}
		}
	}
	void deleteItem(int code) 
	{
		for (auto it = items.begin(); it != items.end(); it++) 
		{
			if ((*it)->getCode() == code)
			{
				items.erase(it);
				break;
			}
			else
			{
				cout << "Not found";
			}
		}

	}
	
	void sorted()
	{
		sort(items.begin(), items.end());
	}
};
