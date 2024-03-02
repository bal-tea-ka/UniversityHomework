#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Bear : public Animal {
public:
	void makeNoise() { cout << "ААААААААЭ\n"; };
	void eat() { cout << "Медведь ест\n"; };
	void getDescription() const override {
		cout << "Медведи - один из символов России, наряду с водкой, ушанкой и балалайкой " <<
			"это крупные всеядные, живущие в умеренном и северном климате.";
	};
};