#include <iostream>
#include <string>

using namespace std;

class Reader {
public:
	string FIO;
	int number;
	string faculty;
	string birthday;
	int phoneNumber;
	int countBooks;

	void set_FIO(string FIO) { this->FIO = FIO; };
	void set_number(int number) { this->number = number; };
	void set_faculty(string faculty) { this->faculty = faculty; };
	void set_birthday(string birthday) { this->birthday = birthday; };
	void set_phoneNumber(int phoneNumber) { this->phoneNumber = phoneNumber; };
	void set_countBooks(int c) { countBooks = c; };
	string get_FIO() { return FIO; };
	int get_number() { return number; };
	string get_faculty() { return faculty; };
	string get_birthday() { return birthday; };
	int get_phoneNumber() { return phoneNumber; };
	int get_countBooks() { return countBooks; };
	
	void takeBook() { countBooks += 1; };
	void returnBook() { countBooks -= 1; };
};

class Book {
private:
	string author;
	string name;
	int year;
public:
	string get_author() { return author; };
	string get_name() { return name; };
	int get_year() { return year; };
	void set_author(string author) {this->author = author; };
	void set_name(string name) { this->name = name; };
	void set_year(int year) { this->year = year; };
};

int main() {

	setlocale(LC_ALL, "RUS");

	Reader ourReaders[3];
	for (int i = 0; i < 3; i++) {
		string F;
		cout << "������� ��� ��������: ";
		cin.ignore();
		getline(cin, F);
		ourReaders[i].set_FIO(F);
		cout << "������� ����� ������������ ������: ";
		int n;
		cin >> n;
		ourReaders[i].set_number(n);
		cout << "������� ���������: ";
		string f;
		cin.ignore();
		getline(cin, f);
		ourReaders[i].set_faculty(f);
		cout << "������� ���� ��������: ";
		string b;
		getline(cin, b);
		ourReaders[i].set_birthday(b);
		cout << "������� ����� ��������: ";
		int nn;
		cin >> nn;
		ourReaders[i].set_phoneNumber(nn);
		ourReaders[i].set_countBooks(0);
		cout << "������ �������\n\n";
	}

	ourReaders[1].takeBook();
	cout << "� �������� � ������� " << ourReaders[1].get_number() << " " << ourReaders[1].get_countBooks() << " ���� �� �����\n";
	return 0;
}