#include "Dmitrieva_product.h"
#include "utilites.h"

void Dmitrieva_product::add_product() {
	std::cout << "������� �������� ������: " << std::endl;

	std::cin >> std::ws;
	std::getline(std::cin, _name);

	std::cout << "������� ��������� �� 1.0 �� 10 000.0 (���.): " << std::endl;
	correct_enter<float>(_price, 1.0, 10000.0);

	std::cout << "������� ���������� �� 0 �� 100 (��.): " << std::endl;
	correct_enter<int>(_amount, 0, 100);

	std::cout << "�������� �� ����� ��� ������ (0 - ���, 1 - ��): " << std::endl;
	correct_enter<bool>(_is_active, 0, 1);

}
void Dmitrieva_product::export_product(std::ostream& stream, bool pretty) {
	export_parameter(stream, _name, "��������:                                       ", pretty);
	export_parameter(stream, _price,"��������� (���.):                               ", pretty);
	export_parameter(stream, _amount ,"���������� (��.):                               ", pretty);
	export_parameter(stream, _is_active, "�������� ��� ������ (0 - ���, 1 - ��):          ", pretty);
}
