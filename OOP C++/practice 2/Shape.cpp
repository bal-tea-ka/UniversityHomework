#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main4() {

	setlocale(LC_ALL, "RUS");

	Shape figures[2];
	figures[0] = Circle();
	figures[1] = Rectangle();
	figures[0].draw();
	figures[1].draw();
	return 0;
}