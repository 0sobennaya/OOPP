#include "add_dialog.h"
#include "ui_add_dialog.h"
#include "Dmitrieva_product.h"
#include "dmitrieva_widget.h"

Add_Dialog::Add_Dialog(std::shared_ptr<Dmitrieva_market> market_ptr,QWidget *parent)
    : QDialog(parent)
    , market_ptr(market_ptr)
    , ui(new Ui::Add_Dialog)
{
    ui->setupUi(this);
}

Add_Dialog::~Add_Dialog()
{
    delete ui;
}


void Add_Dialog::on_add_prod_Button_clicked()
{
    std::shared_ptr<Dmitrieva_product> product = std::make_shared<Dmitrieva_product>();
    product->set_name((ui->get_name->text().toStdString()));
    product->set_price(ui->get_price->text().toFloat());
    product->set_amount(ui->get_amount->text().toInt());
    product->set_status(ui->get_status->text().toInt());

    market_ptr->get_products().push_back(product);



}

