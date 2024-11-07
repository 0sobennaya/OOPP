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
    std::vector<int> table_sizes = {8,9,10,8,12,14};
    explicit Dmitrieva_widget(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event) override;
    void draw(QPainter& painer);
    void load(QString& path);
    void clean();
    void get_table_sizes();
    QSize minimumSizeHint() const override;
};

#endif // DMITRIEVA_WIDGET_H
