#include <iostream>
#include <string>

using namespace std;

class Information {
public:
	string FIO;
	string address;
	int age;
	int phone_number;
	void set_FIO(string name) { FIO = name; };
	void set_address(string adres) { address = adres; };
	void set_age(int age1) { age = age1; };
	void set_phone_number(int number) { phone_number = number; };
	string get_FIO() { return FIO; };
	string set_address() { return address; };
	int get_age() { return age; };
	int get_phone_number() { return phone_number; };
	Information() {
		cout << "������� ���: ";
		string n;
		cin.ignore();
		getline(cin, n);
		set_FIO(n);
		cout << "������� �����: ";
		string a;
		cin.ignore();
		getline(cin, a);
		set_address(a);
		cout << "������� �������: ";
		int ag;
		cin >> ag;
		set_age(ag);
		cout << "������� �����: ";
		int nu = 0;
		cin >> nu;
		set_phone_number(nu);

	}
};

int main2() {

	setlocale(LC_ALL, "RUS");

	cout << "������� ���������� � ����:\n";
	Information me;

	cout << "������� ���������� � ����� �����:\n";

	Information fr;

	cout << "������� ���������� � ����� ��������:\n";

	Information love;

	return 0;
}