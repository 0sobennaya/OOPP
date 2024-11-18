#include "dialog_dmitrieva.h"
#include "ui_dialog_dmitrieva.h"


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
    for (auto product : market_ptr->get_products()){
        ui->listWidget->addItem(product_to_string(product));
    }
    ui->listWidget->setCurrentRow(0);
}

Dialog_dmitrieva::~Dialog_dmitrieva()
{
    delete ui;
}
void Dialog_dmitrieva::on_listWidget_currentRowChanged(int currentRow)
{
    if(currentRow < 0 || currentRow >=market_ptr->get_products().size())
        return;

    ui->name_ans_label->setText(QString::fromLocal8Bit((market_ptr->get_products())[currentRow]->get_name()));
    ui->price_ans_label->setText(QString::number((market_ptr->get_products())[currentRow]->get_price()));
    ui->amount_ans_label->setText(QString::number((market_ptr->get_products())[currentRow]->get_amount()));
    ui->status_ans_label->setText(QString::number((market_ptr->get_products())[currentRow]->get_status()));

}
void Dialog_dmitrieva::on_pushButton_clicked()
{

}

