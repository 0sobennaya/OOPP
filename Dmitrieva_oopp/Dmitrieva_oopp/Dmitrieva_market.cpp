#include <iostream>
#include <fstream>
#include "Dmitrieva_market.h"

std::vector<std::shared_ptr<Dmitrieva_product>> Dmitrieva_market::get_products() {
	return _products;
}

void Dmitrieva_market::add_product(std::shared_ptr<Dmitrieva_product> product) {
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
	_products.clear();
}

bool Dmitrieva_market::read_products_from_file(std::ifstream& in) {
	size_t count;
	in >> count;
	for (int i = 0; i < count; i++) {
		std::shared_ptr<Dmitrieva_product> product = std::make_shared<Dmitrieva_product>();
		if (product->read_product_from_file(in)) {
			add_product(product);
		}
		else {
			std::cout << "Ошибка: файл содержит некорректные данные" << std::endl;		
			return false;
		}
	}
	return true;
}