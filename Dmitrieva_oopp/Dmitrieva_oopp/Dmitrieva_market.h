#pragma once
#include <iostream>
#include<vector>

#include "Dmitrieva_product.h"

class Dmitrieva_market {
private:
	std::vector <Dmitrieva_product*> _products;
	
public:

	~Dmitrieva_market() {
		delete_data();
	}
	void add_product(Dmitrieva_product* product);
	void export_products(std::ostream& out, bool pretty);
	void delete_data();
	std::vector <Dmitrieva_product*> get_products();
	bool read_products_from_file(std::ifstream& in);
};