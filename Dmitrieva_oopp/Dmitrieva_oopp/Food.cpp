#include <iostream>
#include "Food.h"
#include "utilites.h"

void Food::add_product() {
	Dmitrieva_product::add_product();

	std::cout << "Введите калорийность от 0 до 800 (ккал/100 г.): " << std::endl;
	correct_enter<int>(_caloric_content, 0, 800);

	std::cout << "Является ли продукт вегетарианским? (0 - нет, 1 - да): " << std::endl;
	correct_enter<bool>(_is_vegetarian, 0, 1);
}

void Food::export_product(std::ostream& stream, bool pretty) {
	Dmitrieva_product::export_product(stream, pretty);

	export_parameter(stream, _caloric_content, "КАЛОРИЙНОСТЬ (ККАЛ/100 Г.):                     ", pretty);
	export_parameter(stream, _is_vegetarian, "ВЕГЕТАРИАНСКИЙ (0 - НЕТ, 1 - ДА):               ", pretty);

}

