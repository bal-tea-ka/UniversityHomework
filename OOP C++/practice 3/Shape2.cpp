#include <iostream>

using namespace std;

class Shape {
protected:
	void draw() {};
	float CalculationArea() {};
};

class Circle: public Shape {
public:
	float R;
	float pi = 3.14;
	void draw() {
		cout << "         ***        \n"
			 << "       *******      \n"
			 << "      *********     \n" 
			 << "      *********     \n" 
			 << "       *******      \n"
			 << "         ***        \n";
	};
	float CalculateArea() { return (pi * R * R); };
};

class Squere: public Shape{
public:
	float a;
	void draw() {
		cout << "******\n"
			 << "******\n"
			 << "******\n"
			 << "******\n";
	};
	float CalculateArea() { return a * a; };
};

class Triangle :public Shape {
public:
	float a, b, c;
	void draw() { cout << "   *\n  ***\n *****\n*******"; };
	float CalculateArea() {
		float p = float(a + b + c) / 2;
		return (sqrt(p * (p - a) * (p - b) * (p - c)));
	};
};
