#include <iostream>
#include <string>

using namespace std;

class Phone {
public:
	int number;
	string model;
	float weight;
	void receiveCall(string name) { cout << "������ " << name; };
	int getNumber() { return number; };
	Phone() {
		cout << "��������� ������...";
	}
	
	Phone(int number1, string model1, float weight1) {
		number = number1;
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
	one.receiveCall("����");
	cout << "\n" << two.getNumber() << "\n";
	two.receiveCall("����");
	cout << "\n" << one.getNumber() << "\n";
	return 0;
}
