#include <iostream>
#include <fstream>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/export.hpp>
#include "Dmitrieva_market.h"
#include "Food.h"

BOOST_CLASS_EXPORT(Food)

std::vector<boost::shared_ptr<Dmitrieva_product>> Dmitrieva_market::get_products() {
	return _products;
}

void Dmitrieva_market::add_product(boost::shared_ptr<Dmitrieva_product> product) {
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
	out << _products.size() << std::endl;
	boost::archive::text_oarchive oa(out);
	for (auto& product : _products) {
		oa& product;
	}
}
void Dmitrieva_market::delete_data() {
	_products.clear();
}

bool Dmitrieva_market::read_products_from_file(std::ifstream& in) {
	size_t count;
	in >> count;
	boost::archive::text_iarchive ia(in);
	for (int i = 0; i < count; i++) {
		boost::shared_ptr<Dmitrieva_product> product = boost::make_shared<Dmitrieva_product>();
		ia& product;
		_products.push_back(product);
	}
	return true;
}