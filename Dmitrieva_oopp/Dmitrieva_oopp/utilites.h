#pragma once
#include <iostream>

template<typename Type>
bool data_is_correct(std::istream& stream, Type& value, Type low, Type high) {
	Type data;
	stream >> data;
	if (!stream || stream.peek() != '\n' || data < low || data > high) {
		stream.clear();
		stream.ignore(1000, '\n');
		return false;
	}
	value = data;
	return true;
}

template<typename Type>
void correct_enter(Type& value, Type low, Type high) {
	while (!data_is_correct(std::cin, value, low, high)) {
		std::cout << "Некорректный ввод. Введите значение от " << low << " до " << high << std::endl;
	}
}

template<typename Type>
void export_parameter(std::ostream& stream, Type& parameter, const std::string& text, bool pretty) {
	if (pretty) {
		stream << text << parameter << std::endl;
	}
	else {
		stream << parameter << std::endl;
	}
}
