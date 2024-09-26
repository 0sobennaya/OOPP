#include <iostream>
#include "Food.h"
#include "utilites.h"

void Food::add_product() {
	Dmitrieva_product::add_product();

	std::cout << "������� ������������ �� 0 �� 800 (����/100 �.): " << std::endl;
	correct_enter<int>(_caloric_content, 0, 800);

	std::cout << "�������� �� ������� ��������������? (0 - ���, 1 - ��): " << std::endl;
	correct_enter<bool>(_is_vegetarian, 0, 1);
}

void Food::export_product(std::ostream& stream, bool pretty) {
	Dmitrieva_product::export_product(stream, pretty);

	export_parameter(stream, _caloric_content, "������������ (����/100 �.):                     ", pretty);
	export_parameter(stream, _is_vegetarian, "�������������� (0 - ���, 1 - ��):               ", pretty);

}

