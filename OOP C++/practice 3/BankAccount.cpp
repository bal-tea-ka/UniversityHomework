#include <iostream>

using namespace std;

class BankAccount {
public:
	float deposit(float sum) { this->sum += sum; };
protected:
	float sum;
	float withdraw() {};
};

class SavingAccount : public BankAccount {
private:
	float commision = 0.1;
	int limit = 100000;
public:
	float withdraw(float s) {
		s -= s * commision;
		if (sum + s <= limit) {
			sum += s;
			cout << "\nmoney has been deposited\n";
		}
		else {
			cout << "\nyour limit has been exceeded\n";
		}
		return sum;
	}
};

class CheckingAccount : public BankAccount {
private:
	float commision = 0.05;
	int limit = 50000000;
public:
	float withdraw(float s) {
		s -= s * commision;
		if (sum + s <= limit) {
			sum += s;
			cout << "\nmoney has been deposited\n";
		}
		else {
			cout << "\nyour limit has been exceeded\n";
		}
		return sum;
	}
};