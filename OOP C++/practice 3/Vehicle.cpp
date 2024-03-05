#include <iostream>

using namespace std;

class Vehicle {
public:
	int speed;
protected:
	void SpeedUp(){}
};

class Car :public Vehicle {
public:
	void SpeedUp() { speed += 10; };
};

class Bicycle : public Vehicle {
public:
	void SpeedUp() { speed += 5; };
};