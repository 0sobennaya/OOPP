#include <iostream>
#include <fstream>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/export.hpp>
#include "Dmitrieva_market.h"
#include "Food.h"

#include <QPainter>

BOOST_CLASS_EXPORT(Dmitrieva_product)
BOOST_CLASS_EXPORT(Food)

std::vector<std::shared_ptr<Dmitrieva_product>>& Dmitrieva_market::get_products_ref() {
    return _products;
}
std::vector<std::shared_ptr<Dmitrieva_product>> Dmitrieva_market::get_products() const {
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
    size_t count;
    in >> count;
    boost::archive::text_iarchive ia(in);

    for (int i = 0; i < count; i++) {
        std::shared_ptr<Dmitrieva_product> product = std::make_shared<Dmitrieva_product>();
        ia& product;
        _products.push_back(product);
    }
	return true;
}

void Dmitrieva_market::delete_data() {
    _products.clear();
}

Dmitrieva_market &Dmitrieva_market::operator=(const Dmitrieva_market &other)
{
    if (this != &other) {
        delete_data();

        for (const auto& product : other._products)
            _products.push_back(product->clone());
    }
    return *this;
}


