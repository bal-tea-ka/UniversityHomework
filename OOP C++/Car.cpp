#include <iostream>
#include <string>

using namespace std;

class Car {
public:
	int year_model;
	string manufacture;
	int speed;

	void accelerate() { speed += 5; };
	void breakk() { speed -= 5; };
	int get_speed() { return speed; };
	void print_speed() { cout << "—корость: " << get_speed() << "\n"; }

	Car(int year_model, string manufacture) {
		speed = 0;
	}
};

int main1() {

	setlocale(LC_ALL, "RUS");

	int y;
	string m;
	cout << "¬ведите год выпуска: ";
	cin >> y;
	cout << "¬ведите название завода: ";
	cin.ignore();

	getline(cin, m);

	Car c(y, m);
	c.accelerate();
	c.accelerate();
	c.accelerate();
	c.print_speed();
	c.breakk();
	c.breakk();
	c.print_speed();
	return 0;
}