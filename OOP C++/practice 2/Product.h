#pragma once
#include <iostream>
#include <string>

using namespace std;

class Product {
protected:
	string name;
	double price;
	double rating;
public:
	void set_name(string name) { this->name = name; };
	void set_price(double price) { this->price = price; };
	void set_rating(double r) { rating = r; };
	string get_name() { return name; };
	double get_price() { return price; };
	double get_rating() { return rating; };
};