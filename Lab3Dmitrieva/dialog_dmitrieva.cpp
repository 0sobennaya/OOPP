#include "dialog_dmitrieva.h"
#include "ui_dialog_dmitrieva.h"
#include "Food.h"
#include "add_dialog.h"
#include <QPainter>
#include <vector>


#include <QMessageBox>

QString product_to_string(std::shared_ptr<Dmitrieva_product> product)
{
    return QString("%1").arg(QString::fromLocal8Bit(product->get_name()));
}

Dialog_dmitrieva::Dialog_dmitrieva(std::shared_ptr<Dmitrieva_market> market_ptr, QWidget *parent)
    : QDialog(parent)
    , market_ptr(market_ptr)
    , ui(new Ui::Dialog_dmitrieva)

{

    ui->setupUi(this);
    for (auto& product : market_ptr->get_products()){
        ui->listWidget->addItem(product_to_string(product));
    }
    ui->listWidget->setCurrentRow(0);
}

void Dialog_dmitrieva::paintEvent(QPaintEvent *event){
    QPainter painter(this);

}

Dialog_dmitrieva::~Dialog_dmitrieva()
{
    delete ui;
}


void Dialog_dmitrieva::on_listWidget_currentRowChanged(int currentRow)
{
    if(currentRow < 0 || currentRow >=market_ptr->get_products().size()){
        ui->write_name->setText("");
        ui->write_price->setText("");
        ui->write_amount->setText("");
        ui->write_status->setText("");
        ui->write_caloric->setText("");
        ui->write_veget->setText("");
        return;
    }
    auto p = market_ptr->get_products()[currentRow];
    auto check_type = std::dynamic_pointer_cast<Food>(p);
    ui->write_name->setText(QString::fromLocal8Bit((market_ptr->get_products())[currentRow]->get_name()));
    ui->write_price->setText(QString::number((market_ptr->get_products())[currentRow]->get_price()));
    ui->write_amount->setText(QString::number((market_ptr->get_products())[currentRow]->get_amount()));
    if (market_ptr->get_products()[currentRow]->get_status()){
        ui->write_status->setText("Да");
    }
    else{
        ui->write_status->setText("Нет");
    }

    if(check_type){
        ui->caloric_label->setText("Калорийность");
        ui->veget_label->setText("Вегетарианский");
        ui->write_caloric->setText(QString::number(check_type->get_caloric()));
        if (check_type->get_vegetarian()){
            ui->write_veget->setText("Да");
        }
        else{
            ui->write_veget->setText("Нет");
        }

    }
    else{
        ui->caloric_label->setText("");
        ui->veget_label->setText("");
        ui->write_caloric->setText("");
        ui->write_veget->setText("");
    }
}


    //ui->write_caloric->setText(QString::number(market_ptr->get_products())[currentRow]))




void Dialog_dmitrieva::on_delete_button_clicked()
{
    if (ui->listWidget->count() == 0){
        QMessageBox msg;
        msg.setText("Нет продуктов");
        msg.setWindowTitle("Ошибка");
        msg.setIcon(QMessageBox::Critical);
        msg.exec();
        return;
    }
    int currentRow = ui->listWidget->currentRow();

    auto selected = market_ptr->get_products_ref().begin() + currentRow;
    ui->listWidget->takeItem(currentRow);
    market_ptr->get_products_ref().erase(selected);
}


void Dialog_dmitrieva::on_add_button_clicked()
{
    Add_Dialog add_wid (market_ptr, this);
    if(add_wid.exec() == QDialog::Accepted){
        market_ptr = add_wid.market_ptr;
        ui->listWidget->addItem(QString::fromLocal8Bit(market_ptr->get_products()[market_ptr->get_products().size() - 1]->get_name()));
        //ui->listWidget->addItem(product_to_string(market_ptr->get_products()[market_ptr->get_products().size() - 1]));
    }
}


void Dialog_dmitrieva::on_edit_button_clicked()
{
    int currentRow = ui->listWidget->currentRow();
    auto selected = market_ptr->get_products_ref()[currentRow];
    Add_Dialog add_wid (selected ,this);
    add_wid.exec();

}

