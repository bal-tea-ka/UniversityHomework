#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
	string name;
public:
	void makeNoise() {};
	void eat() {};
	virtual void getDescription() const {};
	void setName(string n) { name = n; };
	string getName() { return name; };
};