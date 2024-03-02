#include <iostream>
#include <string>

using namespace std;

class Phone {
public:
	int number;
	string model;
	float weight;
	void receiveCall(string name) { cout << "Звонит " << name; };
	int getNumber() { return number; };
	Phone() {
		cout << "Программа начата...";
	}
	
	Phone(int number, string model1, float weight1) {
		this->number = number;
		model = model1;
		weight = weight1;
	}

	Phone(int number1, string model1) {
		number = number1;
		model = model1;
	}
};

int main5() {

	setlocale(LC_ALL, "RUS");

	Phone one(89051926413, "Samsung", 67.8);
	Phone two(89051928513, "Xiaomi");
	one.receiveCall("Макс");
	cout << "\n" << two.getNumber() << "\n";
	two.receiveCall("Мама");
	cout << "\n" << one.getNumber() << "\n";
	return 0;
}
