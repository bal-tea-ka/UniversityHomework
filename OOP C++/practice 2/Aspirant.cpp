#include <iostream>
#include <string>
#include "Student.h"
#include "Aspirant.h"

using namespace std;

int main11() {

	setlocale(LC_ALL, "RUS");

	Student* st[3];
	st[0] = new Student();
	st[1] = new Student();
	st[2] = new Aspirant();

	for (int i = 0; i < 3; i++) {
		cout << "Введите фамилию " << i+1 << "-го студента: ";
		string f;
		cin.ignore();
		getline(cin, f);
		st[i]->set_firstName(f);
		cout << "Введите имя " << i+1 << "-го студента: ";
		string l;
		getline(cin, l);
		st[i]->set_lastName(l);
		cout << "Введите группу " << i+1 << "-го студента: ";
		string g;
		getline(cin, g);
		cout << "Введите средний балл " << i+1 << "-го студента: ";
		int m;
		cin >> m;
		st[i]->set_avarageMark(m);
		cin.ignore();
		cout << "\n";
	}
	for (int i = 0; i < 3; i++) {
		cout << "Степендия " << i+1 << "-го студента равна " << st[i]->getScholarship() << "\n";
	}

	return 0;
}