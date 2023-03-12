#pragma once
#include <iostream>
#include "User.cpp"
using namespace std;
class UserManagement
{
private:
	User users[100];
	int count = 1;
public:
	int search(User arr[], int n, string val)
	{
		for (int i = 0; i < n; i++)
		{
			if (arr[i].getUsername() == val)
			{
				return i;
			}
		}
		return -1;
	}

	void sort(User arr[], int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n - i - 1; j++)
			{
				if (arr[j].getUsername() > arr[j + 1].getUsername())
				{
					User temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}

	void run()
	{
		char ch;
		string username;
		do
		{
			system("cls");
			cout << "MAIN MENU" << endl;
			cout << "1. Add new User" << endl;
			cout << "2. Edit User" << endl;
			cout << "3. Delete User" << endl;
			cout << "4. Search User" << endl;
			cout << "5. View User" << endl;
			cout << "6. Sort User" << endl;
			cout << "0. Exit" << endl;
			cout << "Select Your Option (0-6) ";
			cin >> ch;
			system("cls");
			switch (ch)
			{
			case '1':
			{
				cout << "Create a new user:" << endl;

				string password;
				cout << "Enter username: ";
				cin >> username;
				cout << "Enter password: ";
				cin >> password;

				cout << "1. admin user" << endl;
				cout << "2. item user" << endl;
				int n;
				cout << "Please select (1-2): ";
				cin >> n;
				switch (n)
				{
				case 1:
				{
					users[count].setUsername(username);
					users[count].setPassword(password);
					users[count].setRole("admin");
					count++;
					cout << "Add completed" << endl;
					cout << "Press anykey to continue";

					break;
				}
				case 2:
				{
					users[count].setUsername(username);
					users[count].setPassword(password);
					users[count].setRole("item");
					count++;
					cout << "Add completed" << endl;
					cout << "Press anykey to continue";

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
				cout << "Enter username: ";
				cin >> username;
				int found = search(users, count, username);
				string val;
				if (found != -1)
				{
					char c;
					cout << "1.Username\n";
					cout << "2.Password\n";
					cout << "3.Origin\n";
					cout << "Enter value: ";
					cin >> c;
					switch (c)
					{
					case '1':
					{
						cout << "Enter new username: ";
						cin >> val;
						users[found].setUsername(val);
						cout << "Edited" << endl;
						cout << "Press anykey to continue" << endl;

						break;
					}
					case '2':
					{
						cout << "Enter new Password: ";

						cin >> val;
						users[found].setPassword(val);
						cout << "Edited" << endl;
						cout << "Press anykey to continue" << endl;

						break;
					}
					case '3':
					{
						cin >> val;
						users[found].setRole(val);
						cout << "Edited" << endl;
						cout << "Press anykey to continue" << endl;

						break;
					}

					default:
					{
						cout << "Invalid Input" << endl;
						cout << "Press anykey to continue" << endl;

					}
					}
				}
				else
				{
					cout << "Not found!!!";

				}
				break;
			}
			case '3':
			{
				cout << "Enter username: ";
				cin >> username;
				int found = search(users, count, username);
				if (found != -1)
				{
					char c;

					cout << "Username: " << users[found].getUsername() << endl;
					cout << "Role: " << users[found].getRole() << endl;

					cout << "\nAre you sure?\n";
					cout << "1.Yes\n";
					cout << "2.No\n";
					cout << "Inpur option: ";
					cin >> c;
					if (c == '1')
					{
						for (int i = found; i < count; i++)
						{
							users[i] = users[i + 1];
						}
						count--;
						cout << "Deleted" << endl;
						cout << "Press anykey to continue" << endl;


					}
					else if (c == '2')
					{
						cout << "Cancelled" << endl;
						cout << "Press anykey to continue" << endl;

					}
					else
					{
						cout << "Invalid Input" << endl;
						cout << "Press anykey to continue" << endl;

					}
				}
				else
				{
					cout << "Not found" << endl;
					cout << "Press anykey to continue" << endl;

				}

				break;
			}
			case '4':
			{
				cout << "Enter username: ";
				cin >> username;
				int found = search(users, count, username);
				if (found != -1)
				{
					cout << "Username: " << users[found].getUsername() << endl;
					cout << "Role: " << users[found].getRole() << endl;
				}
				else
				{
					cout << "Not found" << endl;
					cout << "Press anykey to continue" << endl;

				}
				break;
			}
			case '5':
			{
				cout << "Username" << "\t\t\t" << "Role" << endl;
				for (int i = 0; i < count; i++)
				{
					cout << users[i].getUsername() << "\t\t\t\t" << users[i].getRole() << endl;
				}

				break;
			}
			case '6':
			{
				sort(users, count);
				break;
			}
			case '0':
			{
				cout << "Thanks";

				break;
			}
			default:
			{
				cout << "Invalid Input" << endl;

			}
			}
			cin.ignore();
			cin.get();
		} while (ch != '0');
	}
};