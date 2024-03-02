#pragma once
#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

class Category {
protected:
	string category_name;
public:
	Product product[3];
	void set_category_name(string n) { category_name = n; };
	string get_category_name() { return category_name; };
};