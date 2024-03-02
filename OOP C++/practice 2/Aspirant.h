#pragma once
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

class Aspirant : public Student {
public:
	bool scienceWork;
	int getScholarship() const override {
		if (avarageMark == 5) { return 2500; }
		else { return 2200; }
	}
};