#include "dmitrieva_widget.h"
#include <QPainter>
Dmitrieva_widget::Dmitrieva_widget(QWidget *parent)
    : QWidget{parent}
{}
void Dmitrieva_widget::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    painter.drawText(100,100,"hello world");
}
