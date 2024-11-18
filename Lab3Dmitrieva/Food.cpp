#include <iostream>
#include "Food.h"

void Food::draw(QPainter& painter, int x, int& y, std::vector<int> &table_sizes){
    QStringList fields = {QString::fromLocal8Bit(_name), QString::number(_price), QString::number(_amount), QString::number(_is_active), QString::number(_caloric_content),QString::number(_is_vegetarian)};
    int h = 50;
    for (int i = 0; i<6; ++i){
        QRect cellRect(x, y, table_sizes[i] * 8, h);
        painter.drawText(cellRect, Qt::AlignCenter, fields[i]);
        x+= table_sizes[i]*8;
    }
    y += h;

}

std::shared_ptr<Dmitrieva_product> Food::clone() const
{
    return std::make_shared<Food>(*this);
}

