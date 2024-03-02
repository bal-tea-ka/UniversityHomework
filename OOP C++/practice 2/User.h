#pragma once
#include <iostream>
#include <string>

using namespace std;

class User {
private:
	string name;
	int age;
public:
	void setName(string n) { name = n; };
	void setAge(int a) { age = a; };
	string getName() { return name; };
	int getAge() { return age; };
};