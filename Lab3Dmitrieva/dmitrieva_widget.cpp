#include "dmitrieva_widget.h"
#include "Dmitrieva_product.h"
#include <QPainter>
#include <fstream>
#include <vector>
Dmitrieva_widget::Dmitrieva_widget(QWidget *parent)
    : QWidget{parent}
{}

int get_max_size(std::vector<QString>& vec){
    int max_size = 0;
    for(auto& item : vec){
        if(item.size() > max_size){
            max_size = item.size();
        }
    }
    return max_size;
}
void Dmitrieva_widget::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    draw(market,painter);


}

void Dmitrieva_widget::draw(Dmitrieva_market& market, QPainter& painter){
    int x = 20;
    int y = 20;
    int height = 50;
    std::vector<int> table_sizes = {8,9,10,8,12,14}; //название - 8, стоимость - 9, количество - 10, доступен -8, калорийность - 12, вегетарианский - 14
    QStringList colnames = {"название","стоимость","количество","доступен", "калорийность","вегетарианский"};
    for (int i = 0; i < market.get_products().size(); i++){

        if (market.get_products()[i]->get_name().size() > table_sizes[0]){
            table_sizes[0] = market.get_products()[i]->get_name().size();
        }
        std::string price = std::to_string(market.get_products()[i]->get_price());
        if (price.size() > table_sizes[1]){
            table_sizes[1] = price.size();
        }
        std::string amount = std::to_string(market.get_products()[i]->get_amount());
        if (amount.size() > table_sizes[2]){
            table_sizes[2] = amount.size();
        }
    }
//draw colnames
    for (int k = 0; k<6; ++k){
        QRect cellRect(x,y,table_sizes[k]*8, height);

        painter.drawRect(cellRect);
        painter.drawText(cellRect, Qt::AlignCenter, colnames[k]);

        for (int j = 0; j<market.get_products().size();j++){
            y+=height;
            painter.drawRect(x,y,table_sizes[k]*8,height);
        }
        x+=table_sizes[k]*8;
        y = 20;
    }
    x = 20;
    std::for_each(market.get_products().begin(),market.get_products().end(), bind(&Dmitrieva_product::draw, std::placeholders::_1,std::ref(painter), x, std::ref(y), std::ref(table_sizes)));

}

void Dmitrieva_widget::clean(){
    market.delete_data();
    update();
}


void Dmitrieva_widget::load(QString& path){
    clean();
    std::ifstream in(path.toStdString());
    market.read_products_from_file(in);
    std::cout << market.get_products().size() << std::endl;
    update();
}

