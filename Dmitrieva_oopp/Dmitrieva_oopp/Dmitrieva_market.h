#pragma once
#include <iostream>
#include <vector>
#include <boost/serialization/shared_ptr.hpp>
#include "Dmitrieva_product.h"

class Dmitrieva_market {
private:
	std::vector <boost::shared_ptr<Dmitrieva_product>> _products;
	
public:
	void add_product(boost::shared_ptr<Dmitrieva_product> product);
	void export_products(std::ostream& out, bool pretty);
	void save_products(std::ostream& out);
	void delete_data();
	std::vector <boost::shared_ptr<Dmitrieva_product>> get_products();
	bool read_products_from_file(std::ifstream& in);
};