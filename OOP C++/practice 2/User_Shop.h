#pragma once
#include <iostream>
#include <string>
#include "Basket.h"

using namespace std;

class User {
protected:
	string login;
	string pasword;
public:
	Basket basket;

	void set_login(string login) { this->login = login; };
	void set_pasword(string password) { this->pasword = password; };
	string get_login() { return login; };
	string get_pasworg() { return pasword; };

};