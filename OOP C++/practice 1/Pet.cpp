#include <iostream>
#include <string>

using namespace std;

class Pet {
public:
	string name;
	string animal_type;
	int age;
	void set_name(string name1) { name = name1; };
	void set_animal_type(string animal_type1) { animal_type = animal_type1; };
	void set_age(int age1) { age = age1; };
	string get_name() { return name; };
	string get_animal_type() { return animal_type; };
	int get_age() { return age; };
	Pet() {
		cout << "Hi!";
	}
};