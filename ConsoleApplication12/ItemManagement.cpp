#pragma once
#include <iostream>
#include "Warehouse.cpp"
using namespace std;
class ItemManagement
{
public:
	void run()
	{
		char ch;
		int num;
		Warehouse warehouse;
		do
		{
			system("cls");
			cout << "MAIN MENU" << endl;
			cout << "1. Add new Item" << endl;
			cout << "2. Edit Item" << endl;
			cout << "3. Delete Item" << endl;
			cout << "4. Search Item" << endl;
			cout << "5. View Item" << endl;
			cout << "6. Sort Item" << endl;
			cout << "0. Exit" << endl;
			cout << "Select Your Option (0-6) ";
			cin >> ch;
			system("cls");
			switch (ch)
			{
			case '1': 
			{
				cout << "Create a new item:" << endl;
				cout << "1. Local Item" << endl;
				cout << "2. Oversea Item" << endl;
				int n;
				cout << "Please select (1-2): ";
				cin >> n;
				switch (n) 
				{
				case 1:
				{
					int code;
					string name;
					double price;
					double quantity;
					double tax;
					cout << "Enter code: ";
					cin >> code;
					cout << "Enter name: ";
					cin >> name;
					cout << "Enter price: ";
					cin >> price;
					cout << "Enter quantity: ";
					cin >> quantity;
					cout << "Enter tax: ";
					cin >> tax;
					LocalItem lItem(code, name, price, quantity, tax);
					warehouse.createItem(&lItem);
					cout << "Added" << endl;
					break;
				}
				case 2:
				{
					int code;
					string name;
					double price;
					double quantity;
					double landedCost;
					cout << "Enter code: ";
					cin >> code;
					cout << "Enter name: ";
					cin >> name;
					cout << "Enter price: ";
					cin >> price;
					cout << "Enter quantity: ";
					cin >> quantity;
					cout << "Enter Landed Cost: ";
					cin >> landedCost;
					LocalItem oItem(code, name, price, quantity, landedCost);
					warehouse.createItem(&oItem);
					cout << "Added" << endl;
					break;
				}
				default:
				{
					cout << "Invalid Input" << endl;
				}
				}

				break;
			}
			case '2':
			{
				cout << "\n\n\tEnter The code ";
				cin >> num;
				warehouse.updateItem(num);
				break;

			}
			case '3':
			{
				cout << "\n\n\tEnter code : ";
				cin >> num;
				warehouse.deleteItem(num);
				break;
			}

			case '4':
			{
				
				break;
			}

			case '5':
			{
				for (Item* i : warehouse.readAllItem())
				{
					i->print();

				}
				break;
			}
			case '6':
			{
				warehouse.sorted();
				break;
			}
			case '0':
			{
				cout << "Thanks";
				break;
			}
			default:cout << "\a";
			}

			cin.ignore();
			cin.get();

		} while (ch != '0');
	}
};