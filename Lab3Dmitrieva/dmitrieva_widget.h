#ifndef DMITRIEVA_WIDGET_H
#define DMITRIEVA_WIDGET_H

#include <QWidget>

class Dmitrieva_widget : public QWidget
{
    Q_OBJECT
public:
    explicit Dmitrieva_widget(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);

signals:
};

#endif // DMITRIEVA_WIDGET_H
