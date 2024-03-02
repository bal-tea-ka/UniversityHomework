#include <iostream>

using namespace std;

class Vector {
protected:
	float x;
	float y;
public:
	Vector(float x, float y) {
		this->x = x;
		this->y = y;
	}
	float operator * (Vector p) {
		float pr = this->x * p.x + this->y * p.y;
		return float(pr);
	}
};

int main2() {

	setlocale(LC_ALL, "RUS");

	Vector a(2.25, 3);
	Vector b(3, 5.43);
	cout << "Скалярное произведение: " << a * b;

	return 0;
}