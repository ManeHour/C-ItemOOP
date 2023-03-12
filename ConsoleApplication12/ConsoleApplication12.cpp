#include <iostream>
#include <vector>
#include <fstream>
#include "User.cpp"
#include "UserManagement.cpp"
#include "Item.cpp"
#include "LocalItem.cpp"
#include "OverseaItem.cpp"
#include "ItemManagement.cpp"
using namespace std;

int main()
{
    User users[100];
    users[0].setUsername("admin");
    users[0].setPassword("123");
    users[0].setRole("admin");
    string un;
    string p;
    char option;
    UserManagement u;
    ItemManagement items;
    int pl = 0;
    
    cout << "Login" << endl;
    cout << "Username: ";
    cin >> un;
    cout << "Password: ";
    cin >> p;

    for (int i = 0; i < 100; i++)
    {
        if (users[i].getUsername() == un && users[i].getPassword() == p)
        {
            if (users[i].getRole() == "admin")
            {
                
                do
                {
                    cout << "1. User Module" << endl;
                    cout << "2. Stock Module" << endl;
                    cout << "0. Exit" << endl;
                    cout << "Input Option: ";
                    cin >> option;
                    if (option == '1')
                    {
                        
                        u.run();
                    }
                    else if (option == '2')
                    {
                        
                        items.run();
                    }
                } while (option == 0);
                pl = 1;
                
            }
            else
            {
                for (int i = 0; i > 0; i++)
                {
                    items.run();
                    cout << "Press Y exit: ";
                    cin >> option;
                    if (option == 'Y')
                    {
                        break;
                    }
                }
                pl = 1;
            }
        }
        
    }
    if (pl == 0)
    {
        cout << "Invalid Input";
    }

    return 0;
}