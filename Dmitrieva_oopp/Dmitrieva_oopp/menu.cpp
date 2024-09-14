#include <iostream>
#include <fstream>
#include "menu.h"
#include "utilites.h"
#include "Dmitrieva_product.h"
#include "Dmitrieva_market.h"

void add_products_to_market(Dmitrieva_market& market) {
	Dmitrieva_product* product = new Dmitrieva_product;
	product->add_product();
	market.add_product(product);
}

void print_products_at_market(Dmitrieva_market& market) {
	if (market.get_products().empty()) {
		std::cout << "Список товаров пуст" << std::endl;
	}
	else {
		market.export_products(std::cout, true);
	}

}

void save_products_to_file(Dmitrieva_market& market) {
	if (market.get_products().empty()) {
		std::cout << "Список товаров пуст" << std::endl;
	}
	else {
		std::string filename;
		std::cout << "Введите имя файла:" << std::endl;
		std::cin >> std::ws;
		std::getline(std::cin, filename);

		std::ofstream out;
		out.open(filename);

		out << market.get_products().size() << std::endl;
		market.export_products(out, false);

		out.close();
		std::cout << "Данные успешно сохранены" << std::endl;
	}
}
void load_products_from_file(Dmitrieva_market& market) {
	std::cout << "Внимание, при  загрузке данных вы потеряете текущие товары. Продолжить? (0 - нет, 1 - да)" << std::endl;
	bool ok;
	correct_enter<bool>(ok, 0, 1);

	if (ok) {
		market.delete_data();

		std::string filename;
		std::cout << "Введите имя файла:" << std::endl;
		std::cin >> std::ws;
		std::getline(std::cin, filename);

		std::ifstream in;
		in.open(filename);

		if (market.read_products_from_file(in)) {
			std::cout << "Данные успешно загружены" << std::endl;
		}
		else {
			market.delete_data();
		}
		
	}
}
void clear_products(Dmitrieva_market& market) {
	market.delete_data();
	std::cout << "Список товаров очищен" << std::endl;
}

void print_menu() {
	std::cout << "- - Выберите действие - -" << std::endl;
	std::cout << "1. Добавить товар " << std::endl;
	std::cout << "2. Показать товары " << std::endl;
	std::cout << "3. Сохранить в файл" << std::endl;
	std::cout << "4. Загрузить из файла " << std::endl;
	std::cout << "5. Очистить список товаров " << std::endl;
	std::cout << "0. Выйти" << std::endl;
}

void menu() {

	Dmitrieva_market market;
	
	int choice;
	do {
		print_menu();
		correct_enter(choice, 0, 5);
		switch (choice) {
		case 1:
		{
			add_products_to_market(market);
			break;
		}
		case 2:
		{
			print_products_at_market(market);
			break;
		}
		case 3:
		{
			save_products_to_file(market);
			break;
		}
		case 4:
		{
			load_products_from_file(market);
			break;
		}
		case 5:
		{
			clear_products(market);
		}
		}
	} while (choice != 0);
}