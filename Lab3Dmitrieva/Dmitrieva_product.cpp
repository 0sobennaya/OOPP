#include "Dmitrieva_product.h"
#include <QPainter>
#include <vector>
#include <QString>

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

void Dmitrieva_product::set_name(std::string name){
    _name = name;
}
void Dmitrieva_product::set_price(float price){
    _price = price;
}
void Dmitrieva_product::set_amount(int amount){
    _amount = amount;
}
void Dmitrieva_product::set_status(bool status){
    _is_active = status;
}

void Dmitrieva_product::draw(QPainter& painter, int x, int& y, std::vector<int> &table_sizes){
    QStringList fields = {QString::fromLocal8Bit(_name), QString::number(_price), QString::number(_amount), QString::number(_is_active), QString::fromStdString("--"),QString::fromStdString("--")};
    int h = 50;
    for (int i = 0; i<6; ++i){
        QRect cellRect(x, y, table_sizes[i] * 8, h);
        painter.drawText(cellRect, Qt::AlignCenter, fields[i]);
        x+= table_sizes[i]*8;
    }
    y += h;
}

void Dmitrieva_product::draw_in_cols(QPainter& painter)
{
    QStringList fields = {QString::fromLocal8Bit(_name), QString::number(_price), QString::number(_amount), QString::number(_is_active), QString::fromStdString("--"),QString::fromStdString("--")};
    int h = 50;
    int x = 10;
    int y = 70;
    for (int i = 0; i<6; ++i){
        painter.drawText(x,y + i*h, fields[i]);

    }

}

std::shared_ptr<Dmitrieva_product> Dmitrieva_product::clone() const
{
    return std::make_shared<Dmitrieva_product>(*this);
}

