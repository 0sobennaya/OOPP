#pragma once
#include <iostream>
#include <vector>
#include <boost/serialization/shared_ptr.hpp>
#include "Dmitrieva_product.h"

class Dmitrieva_market {
private:
	std::vector <std::shared_ptr<Dmitrieva_product>> _products;
	
public:
	void save_products(std::ostream& out);
    std::vector <std::shared_ptr<Dmitrieva_product>> get_products();
	bool read_products_from_file(std::ifstream& in);
};
