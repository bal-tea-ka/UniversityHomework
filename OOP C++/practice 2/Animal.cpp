#include <iostream>
#include <string>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Bear.h"
#include "Veterinarian.h"

using namespace std;

int main3() {

	setlocale(LC_ALL, "RUS");

	Animal* a[3];
	a[0] = new Cat();
	a[1] = new Dog();
	a[2] = new Animal();

	a[2]->setName("Чебурек");
	a[0]->setName("Виски");
	a[1]->setName("Коржик");
	Veterinarian v;
	v.treatAnimal(a[0]);
	v.treatAnimal(a[1]);
	v.treatAnimal(a[2]);
	return 0;
}