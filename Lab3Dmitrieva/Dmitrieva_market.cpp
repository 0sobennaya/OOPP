#include <iostream>
#include <fstream>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/export.hpp>
#include "Dmitrieva_market.h"
#include "Food.h"

BOOST_CLASS_EXPORT(Food)

std::vector<std::shared_ptr<Dmitrieva_product>> Dmitrieva_market::get_products() {
	return _products;
}
void Dmitrieva_market::save_products(std::ostream& out) {
	out << _products.size() << std::endl;
	boost::archive::text_oarchive oa(out);
	for (auto& product : _products) {
		oa& product;
	}
}

bool Dmitrieva_market::read_products_from_file(std::ifstream& in) {
	if (in) {
		size_t count;
		in >> count;
		boost::archive::text_iarchive ia(in);
	
		for (int i = 0; i < count; i++) {
			std::shared_ptr<Dmitrieva_product> product = std::make_shared<Dmitrieva_product>();
			ia& product;
			_products.push_back(product);
		}
	}
	else {
		return false;
	}
	return true;
}
