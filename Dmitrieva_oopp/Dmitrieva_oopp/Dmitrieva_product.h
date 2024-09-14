#pragma once
#include <iostream>
#include <fstream>
#include <string>

class Dmitrieva_product {
private:
	std::string _name = "None";
	float _price = -1.0;
	int _amount = -1;
	bool _is_active = 0; //0 - no, 1 - yes
public:
	void add_product();
	void export_product(std::ostream& stream, bool pretty);
	bool read_product_from_file(std::ifstream& in);
	
};