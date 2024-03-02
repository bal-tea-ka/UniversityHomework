#include <iostream>
#include <string>
#include "Product.h"
#include "Category.h"
#include "Basket.h"
#include "User_Shop.h"

using namespace std;


void print_cataloge() {

	Category category[2];
	category[0].set_category_name("Шоколад");
	category[0].product[0].set_name("Алёнка");
	category[0].product[0].set_price(89.45);
	category[0].product[0].set_rating(100);
	category[0].product[1].set_name("Milka");
	category[0].product[1].set_price(95.5);
	category[0].product[1].set_rating(85.5);
	category[1].set_category_name("Энергетики");
	category[1].product[0].set_name("Flash");
	category[1].product[0].set_price(62.4);
	category[1].product[0].set_rating(101);
	category[1].product[1].set_name("Volt");
	category[1].product[1].set_price(85.9);
	category[1].product[1].set_rating(110);

	for (int i = 0; i < 2; i++) {
		cout << "Категория: " << category[i].get_category_name() << "\n\n";
		for (int j = 0; j < 2; j++) {
			cout << j + 1 << ". '" << category[i].product[j].get_name() << "' цена: " << category[i].product[j].get_price() << " рейтинг: " << category[i].product[j].get_rating() << "\n\n";
		}
	}
}

void print_buying() {
	User man[3];
	man[0].set_login("Loozer");
	man[0].basket.product[0].set_name("Алёнка");
	man[0].basket.product[0].set_price(85.45);
	man[0].basket.product[1].set_name("Flash");
	man[0].basket.product[1].set_price(62.4);
	man[1].basket.product[0].set_name("Volt");
	man[1].basket.product[0].set_price(85.9);
	man[1].basket.product[1].set_name("Milka");
	man[1].basket.product[1].set_price(95.5);
	for (int i = 0; i < 2; i++) {
		cout << "Логин покупателя: " << man[i].get_login() << "\n\n";
		for (int j = 0; j < 2; j++) {
			cout << j + 1 << ". '" << man[i].basket.product[j].get_name() << "' цена: " << man[i].basket.product[j].get_price() << "\n\n";
		}
	}
}

int main() {

	setlocale(LC_ALL, "RUS");

	print_cataloge();

	print_buying();

	return 0;
}