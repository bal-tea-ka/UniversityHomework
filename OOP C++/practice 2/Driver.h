#pragma once
#include <iostream>
#include <string>
#include "Worker.h"

using namespace std;

class Driver : public Worker {
private:
	int experience;
	string category;
public:
	void setExperience(int e) { experience = e; };
	void setCategory(string c) { category = c; };
	int getExperience() { return experience; };
	string getCategory() { return category; };
};