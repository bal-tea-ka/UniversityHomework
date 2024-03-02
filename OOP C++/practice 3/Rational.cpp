#include <iostream>

using namespace std;

class Rational {
public:
	int chisl;
	int znam;
public:
	void print() {
		cout << chisl << "/" << znam;
	}
	Rational() {
		chisl = 1;
		znam = 1;
	}
	Rational(int c, int z) {
		chisl = c;
		znam = z;
	}

	Rational operator + (Rational p) {
		Rational sum;
		sum.znam = this->znam * p.znam;
		sum.chisl = this->chisl * p.znam + this->znam * p.chisl;
		return sum;
	}
	Rational operator * (Rational p) {
		Rational pr;
		pr.znam = this->znam * p.znam;
		pr.chisl = this->chisl * p.chisl;
		return pr;
	}
	
};

int main1() {

	setlocale(LC_ALL, "RUS");

	Rational first(1, 2);
	Rational scnd(3, 4);
	Rational temp;
	temp = first + scnd;
	cout << "Сумма: ";
	temp.print();
	temp = first * scnd;
	cout << "\nПроизведение: ";
	temp.print();
	return 0;
}