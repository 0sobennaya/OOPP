#include <iostream>
#include <fstream>
#include "Dmitrieva_market.h"

std::vector<Dmitrieva_product*> Dmitrieva_market::get_products() {
	return _products;
}

void Dmitrieva_market::add_product(Dmitrieva_product* product) {
	_products.push_back(product);
}

void Dmitrieva_market::export_products(std::ostream& out, bool pretty) {
	for (auto product : _products) {
		product->export_product(out, pretty);
		if (pretty) {
			std::cout << "-----------------------------------------" << std::endl;
		}
	}
}
void Dmitrieva_market::delete_data() {
	for (auto product : _products) {
		delete product;
	}
	_products.clear();
}

bool Dmitrieva_market::read_products_from_file(std::ifstream& in) {
	size_t count;
	in >> count;
	for (int i = 0; i < count; i++) {
		Dmitrieva_product* product = new Dmitrieva_product;
		if (product->read_product_from_file(in)) {
			add_product(product);
		}
		else {
			std::cout << "Ошибка: файл содержит некорректные данные" << std::endl;
			delete product;			
			return false;
		}
	}
	return true;
}