#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
	string name;
	int number;
	string department;
	string position;
	void set_name(string n) { name = n; };
	void set_number(int num) { number = num; };
	void set_department(string d) { department = d; };
	void set_position(string p) { position = p; };
	string get_name() { return name; };
	int get_number() { return number; };
	string get_department() { return department; };
	string get_position() { return position; };
};

int main3() {

	setlocale(LC_ALL, "RUS");

	Employee e1;
	Employee e2;
	Employee e3;

	e1.set_name("Сьюзан Мейерс");
	e1.set_number(47899);
	e1.set_department("Бухгалтерия");
	e1.set_position("Вице-президент");

	e2.set_name("Марк Джоунс");
	e2.set_number(39119);
	e2.set_department("ИТ");
	e2.set_position("Программист");

	e3.set_name("Джой Роджерс");
	e3.set_number(81774);
	e3.set_department("Производтвенный");
	e3.set_position("Инжинер");

	cout << "Первый сотрудник:\n" <<
	"Имя: " << e1.get_name() << "\t Номер: " << e1.get_number() <<
	"\nОтдел: " << e1.get_department() << "\tДолжность: " << e1.get_position() << "\n";
	cout << "\nВторой сотрудник:\n" <<
	"Имя: " << e2.get_name() << "\t Номер: " << e2.get_number() <<
	"\nОтдел: " << e2.get_department() << "\tДолжность: " << e2.get_position() << "\n";
	cout << "\nТретий сотрудник:\n" <<
	"Имя: " << e3.get_name() << "\t Номер: " << e3.get_number() <<
	"\nОтдел: " << e3.get_department() << "\tДолжность: " << e3.get_position() << "\n";
	return 0;
}
