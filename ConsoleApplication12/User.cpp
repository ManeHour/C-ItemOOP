#pragma once
#include <iostream>
using namespace std;
class User
{
protected:
	string username;
	string password;
	string role;

public:
	User()
	{
		this->username = "";
		this->password = "";
		this->role = "";
	}
	User(string username, string password, string role)
	{
		this->username = username;
		this->password = password;
		this->role = role;

	}
	string getUsername() const
	{
		return username;
	}
	void setUsername(string username)
	{
		this->username = username;
	}
	string getPassword() const
	{
		return password;
	}
	void setPassword(string password)
	{
		this->password = password;
	}
	string getRole() const
	{
		return role;
	}
	void setRole(string role)
	{
		this->role = role;
	}


	void print()
	{
		cout << "username: " << username << endl;
		//cout << "password: " << password << endl;
	}
};