#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Dog: public Animal {
public:
	void makeNoise() { cout << "Гав-Гав\n"; };
	void eat() { cout << "Ваша собака ест\n"; };
	void getDescription() const override {
		cout << "Собака - одно из наиболее попудярных домашних животных, наряду с кошками" <<
			", порождающее вечный спор между кошатниками и собачниками.\n " <<
			"Собака - лучший друг человека, который будет дарить" <<
			"вам безусловную любовь и тепло, даже в самые темные времена.\n";
	};
};