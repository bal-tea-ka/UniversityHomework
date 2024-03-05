#include <iostream>

using namespace std;

class Shape {
protected:
	float getArea() {};
	float getPerimeter() {};
};

class Circle :public Shape {
public:
	float R;
	float pi = 3.14;
	float getArea() { return pi * R * R; };
	float getPerimeter() { return 2 * pi * R; };
};

class Triangle :public Shape {
public:
	float a;
	float b;
	float c;
	float getArea() {
		float p = float(a + b + c) / 2;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	};
	float getPerimeter() { return (a + b + c); };
};

class Rectangle :public Shape {
public:
	float a;
	float b;
	float c;
	float d;
	float getArea() { return (a * b); };
	float getPerimeter() { return (a + b + c + d); };
};