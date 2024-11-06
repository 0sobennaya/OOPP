#include "Dmitrieva_product.h"
#include <QPainter>

std::string Dmitrieva_product::get_name(){
    return _name;
}
float Dmitrieva_product::get_price(){
    return _price;
}

int Dmitrieva_product::get_amount(){
    return _amount;
}

bool Dmitrieva_product::get_status(){
    return _is_active;
}
