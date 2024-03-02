#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Veterinarian {
public:
	void treatAnimal(Animal* a) {
		cout << "Имя животного:  " << a->getName() <<
			"\n Описание: "; a->getDescription(); cout << "\n";
	};
};