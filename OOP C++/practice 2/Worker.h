#pragma once
#include <iostream>
#include <string>
#include "User.h"

using namespace std;

class Worker :public User {
private:
	double salary;
public:
	void setSalary(double s) { salary = s; };
	double getSalary() { return salary; };
};