#include <iostream>

using namespace std;

class Circle {
public:
	int x;
	int y;
	int R;
	Circle() {
		x = 0;
		y = 0;
		R = 1;
	}
	Circle(int r){
		R = r;
		x = 0;
		y = 0;
	}
	Circle(int r, int x) {
		this->x = x;
		R = r;
		y = 0;
	}
	Circle(int r, int x, int y) {
		this->x = x;
		this->y = y;
		R = r;
	}
};