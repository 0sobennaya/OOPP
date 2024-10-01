#include "Dmitrieva_product.h"
#include "utilites.h"

void Dmitrieva_product::add_product() {
	std::cout << "Введите название товара: " << std::endl;

	std::cin >> std::ws;
	std::getline(std::cin, _name);

	std::cout << "Введите стоимость от 1.0 до 10 000.0 (руб.): " << std::endl;
	correct_enter<float>(_price, 1.0, 10000.0);

	std::cout << "Введите количество от 0 до 100 (шт.): " << std::endl;
	correct_enter<int>(_amount, 0, 100);

	std::cout << "Доступен ли товар для заказа (0 - нет, 1 - да): " << std::endl;
	correct_enter<bool>(_is_active, 0, 1);

}
void Dmitrieva_product::export_product(std::ostream& stream, bool pretty) {
	export_parameter(stream, _name, "НАЗВАНИЕ:                                       ", pretty);
	export_parameter(stream, _price,"СТОИМОСТЬ (РУБ.):                               ", pretty);
	export_parameter(stream, _amount ,"КОЛИЧЕСТВО (ШТ.):                               ", pretty);
	export_parameter(stream, _is_active, "ДОСТУПЕН ДЛЯ ЗАКАЗА (0 - НЕТ, 1 - ДА):          ", pretty);
}
