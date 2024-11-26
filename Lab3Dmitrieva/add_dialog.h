#ifndef ADD_DIALOG_H
#define ADD_DIALOG_H

#include "Dmitrieva_market.h"
#include "Food.h"
#include <QDoubleValidator>
#include <QIntValidator>
#include <QDialog>

namespace Ui {
class Add_Dialog;
}

class Add_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Add_Dialog(std::shared_ptr<Dmitrieva_market> market_ptr, QWidget *parent = nullptr);
    explicit Add_Dialog(std::shared_ptr<Dmitrieva_product> product_ptr, QWidget *parent = nullptr);
    ~Add_Dialog();
    std::shared_ptr<Dmitrieva_market> market_ptr;
    std::shared_ptr<Dmitrieva_product> product_ptr;

private slots:
    void on_add_prod_Button_clicked();

    void on_add_food_btn_clicked();

private:
    Ui::Add_Dialog *ui;
    QDoubleValidator doubleValidator;
    QIntValidator intValidator;
    QIntValidator calIntValidator;
    bool _edit = false;
};

#endif // ADD_DIALOG_H
