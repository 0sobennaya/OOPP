#pragma once
#include "Dmitrieva_product.h"

class Food : public Dmitrieva_product {
private:
	int _caloric_content = -1;
	bool _is_vegetarian = 0;
public:
	void add_product() override;
	void export_product(std::ostream& stream, bool pretty) override;
	//bool read_product_from_file(std::ifstream& in);
};