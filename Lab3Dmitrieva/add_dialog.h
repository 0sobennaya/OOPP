#ifndef ADD_DIALOG_H
#define ADD_DIALOG_H

#include "Dmitrieva_market.h"

#include <QDialog>

namespace Ui {
class Add_Dialog;
}

class Add_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Add_Dialog(std::shared_ptr<Dmitrieva_market> market_ptr,QWidget *parent = nullptr);
    ~Add_Dialog();
    std::shared_ptr<Dmitrieva_market> market_ptr;

private slots:
    void on_add_prod_Button_clicked();

private:
    Ui::Add_Dialog *ui;
};

#endif // ADD_DIALOG_H
