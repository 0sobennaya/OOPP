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
   // ui->label->setText(QString::fromLocal8Bit((market_ptr->get_products())[currentRow]->get_name()));
    if(currentRow < 0 || currentRow >=market_ptr->get_products().size())
        return;

   // market_ptr->get_products()[currentRow]->draw_in_cols(painter);
    //update();
    //market_ptr->get_products_ref()[currentRow];
    // auto p =market_ptr->get_products()[currentRow];
    // auto check_type = std::dynamic_pointer_cast<Food>(p);
    // ui->label_2->setText(QString::number(check_type!=nullptr));
    // if(check_type){
    //     ui->label->setText(QString::fromLocal8Bit((market_ptr->get_products())[currentRow]->get_name()));
    // }

    // ui->name_ans_label->setText(QString::fromLocal8Bit((market_ptr->get_products())[currentRow]->get_name()));
    // ui->price_ans_label->setText(QString::number((market_ptr->get_products())[currentRow]->get_price()));
    // ui->amount_ans_label->setText(QString::number((market_ptr->get_products())[currentRow]->get_amount()));
    // ui->status_ans_label->setText(QString::number((market_ptr->get_products())[currentRow]->get_status()));


}

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
    Add_Dialog add_wid (market_ptr,this);
    add_wid.exec();
    ui->listWidget->addItem(product_to_string(market_ptr->get_products()[market_ptr->get_products().size()]));
}

