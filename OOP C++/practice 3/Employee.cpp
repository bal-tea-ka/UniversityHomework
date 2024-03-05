#include <iostream>

using namespace std;

class Employee {
public:
	float salary;
	void CalculateSalary() {};
};

class Manager :public Employee {
	int k_salary = 500;
	void CalculateSalary(int time) { salary = k_salary * time; };
};
class Programmer :public Employee {
	int k_salary = 1000;
	void CalculateSalary(int time) { salary = k_salary * time; };
};