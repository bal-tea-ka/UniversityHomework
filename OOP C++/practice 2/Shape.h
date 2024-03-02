#pragma once
#include <iostream>
#include <string>

using namespace std;

class Shape {
public:
	string color;
	void draw() { cout << "your shape was drawn\n"; };
};