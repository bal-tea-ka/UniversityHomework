#include <iostream>
#include <string>
#include "User.h"
#include "Driver.h"
#include "Worker.h"

using namespace std;

int main2() {

	setlocale(LC_ALL, "RUS");

	Worker Ivan;
	Ivan.setName("Иван");
	Ivan.setAge(25);
	Ivan.setSalary(1000);
	Worker Vasiliy;
	Vasiliy.setName("Вася");
	Vasiliy.setAge(26);
	Vasiliy.setSalary(2000);

	cout << "Средняя зарпалата Васи и Ивана: " << (Ivan.getSalary() + Vasiliy.getSalary()) / 2;

	return 0;
}