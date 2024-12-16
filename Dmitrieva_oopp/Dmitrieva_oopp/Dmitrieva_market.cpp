#include <iostream>
#include <fstream>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/export.hpp>
#include<boost/serialization/vector.hpp>
#include "Dmitrieva_market.h"
#include "Food.h"

BOOST_CLASS_EXPORT(Food)

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

void Dmitrieva_market::save_products(std::ostream& out) {
	boost::archive::text_oarchive oa(out);
	oa& _products;
}
void Dmitrieva_market::delete_data() {
	_products.clear();
}

bool Dmitrieva_market::read_products_from_file(std::ifstream& in) {
	if (in) {
		boost::archive::text_iarchive ia(in);
		ia& _products;
	}
	else {
		return false;
	}
	return true;
}