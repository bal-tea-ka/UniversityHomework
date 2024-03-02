#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Cat : public Animal {
public:
	void makeNoise() { cout << "Кис-Кис\n"; };
	void eat() { cout << "Ваша кошка ест\n"; };
	void getDescription() const override {
		cout << "Коты - самые милые домашние животные по мнению всех подростков" <<
			" и одиноких женщин где-то за сорок. В отличие от собак, коты будут лишь забирать вашу любовь " <<
			"и лежать на больном месте потому, что там теплее.";
	}
};