#pragma once
#include <iostream>
#include "Dmitrieva_product.h"


void menu();
void save_data_to_file(const std::string& filename, Dmitrieva_product& product);
void load_data_from_file(std::ifstream& in, const std::string& filename, Dmitrieva_product& product);