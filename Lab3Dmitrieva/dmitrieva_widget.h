#ifndef DMITRIEVA_WIDGET_H
#define DMITRIEVA_WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QString>
#include "Dmitrieva_market.h"

class Dmitrieva_widget : public QWidget
{
    Q_OBJECT
public:
    Dmitrieva_market market;
    explicit Dmitrieva_widget(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void draw(Dmitrieva_market& market, QPainter& painer);
    void load(QString& path);
    void clean();
signals:
};

#endif // DMITRIEVA_WIDGET_H
