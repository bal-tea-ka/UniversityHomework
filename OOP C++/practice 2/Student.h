#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
	string firstName;
	string lastName;
	string group;
	double avarageMark;
public:
	void set_firstName(string f) { firstName = f; };
	void set_lastName(string l) { lastName = l; };
	void set_group(string g) { group = g; };
	void set_avarageMark(double m) { avarageMark = m; };
	string get_firstName() { return firstName; };
	string get_lastName() { return lastName; };
	string get_group() { return group; };
	double get_avarageMark() { return avarageMark; };
	virtual int getScholarship() const {
		if (avarageMark == 5) {return 2000;}
		else {return 1900;}
	};
};