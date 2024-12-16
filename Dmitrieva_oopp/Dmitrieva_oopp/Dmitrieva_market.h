#pragma once
#include <iostream>
#include <vector>
#include <boost/serialization/shared_ptr.hpp>
#include "Dmitrieva_product.h"

class Dmitrieva_market {
private:
	std::vector <std::shared_ptr<Dmitrieva_product>> _products;
	friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive& ar, const unsigned int version) {
		ar& _products;
	}
	
public:
	void add_product(std::shared_ptr<Dmitrieva_product> product);
	void export_products(std::ostream& out, bool pretty);
	void save_products(std::ostream& out);
	void delete_data();
	std::vector <std::shared_ptr<Dmitrieva_product>> get_products();
	bool read_products_from_file(std::ifstream& in);
};