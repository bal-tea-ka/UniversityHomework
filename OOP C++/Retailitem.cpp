#include <iostream>
#include <string>

using namespace std;

class Retailitem {
public:
	string description;
	int count;
	float price;
	void set_description(string d) { description = d; };
	void set_count(int c) { count = c; };
	void set_price(float p) { price = p; };
	string get_description() { return description; };
	int get_count() { return count; };
	float get_price() { return price; };
};

int main() {

	setlocale(LC_ALL, "RUS");

	Retailitem a[3];
	a[0].set_description("Пиджак");
	a[0].set_count(12);
	a[0].set_price(59.95);

	a[1].set_description("Дизайнерские джинсы");
	a[1].set_count(40);
	a[1].set_price(34.95);
	
	a[2].set_description("Рубашка");
	a[2].set_count(20);
	a[2].set_price(24.95);

}
