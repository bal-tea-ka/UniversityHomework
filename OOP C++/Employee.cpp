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

	e1.set_name("������ ������");
	e1.set_number(47899);
	e1.set_department("�����������");
	e1.set_position("����-���������");

	e2.set_name("���� ������");
	e2.set_number(39119);
	e2.set_department("��");
	e2.set_position("�����������");

	e3.set_name("���� �������");
	e3.set_number(81774);
	e3.set_department("���������������");
	e3.set_position("�������");

	cout << "������ ���������:\n" <<
		"���: " << e1.get_name() << "\t �����: " << e1.get_number() <<
		"\n�����: " << e1.get_department() << "\t���������: " << e1.get_position() << "\n";
	cout << "\n������ ���������:\n" <<
		"���: " << e2.get_name() << "\t �����: " << e2.get_number() <<
		"\n�����: " << e2.get_department() << "\t���������: " << e2.get_position() << "\n";
	cout << "\n������ ���������:\n" <<
		"���: " << e3.get_name() << "\t �����: " << e3.get_number() <<
		"\n�����: " << e3.get_department() << "\t���������: " << e3.get_position() << "\n";
	return 0;

}