#include "add_dialog.h"
#include "ui_add_dialog.h"

Add_Dialog::Add_Dialog(std::shared_ptr<Dmitrieva_market> market_ptr,QWidget *parent)
    : QDialog(parent)
    , market_ptr(market_ptr)
    , doubleValidator(1, 10000, 2, this)
    , intValidator (0, 100, this)
    , calIntValidator (0, 800, this)
    , ui(new Ui::Add_Dialog)
{
    ui->setupUi(this);
    this->setFixedSize(521,411);
    doubleValidator.setNotation(QDoubleValidator::StandardNotation);
    doubleValidator.setLocale(QLocale::C);

}

Add_Dialog::Add_Dialog(std::shared_ptr<Dmitrieva_product> product_ptr,QWidget *parent)
    : QDialog(parent)
    , product_ptr (product_ptr)
    , doubleValidator(1, 10000, 2, this)
    , intValidator (0, 100, this)
    , calIntValidator (0, 800, this)
    , ui(new Ui::Add_Dialog)
{
    ui->setupUi(this);
    this->setFixedSize(521,411);
    _edit = true;
    doubleValidator.setNotation(QDoubleValidator::StandardNotation);
    doubleValidator.setLocale(QLocale::C);

    auto check_type = std::dynamic_pointer_cast<Food>(product_ptr);
    if(check_type){
        ui->tabWidget->setCurrentIndex(1);
        ui->tabWidget->setTabEnabled(0,false);
        ui->add_food_btn->setText("Редактировать");
        ui->name_field->setText(QString::fromLocal8Bit(product_ptr->get_name()));
        ui->price_field->setText(QString::number(product_ptr->get_price()));
        ui->amount_field->setText(QString::number(product_ptr->get_amount()));
        ui->status_field->setChecked(product_ptr->get_status());
        ui->caloric_field->setText(QString::number(check_type->get_caloric()));
        ui->veget_field->setChecked(check_type->get_vegetarian());
    }
    else{
        ui->tabWidget->setCurrentIndex(0);
        ui->tabWidget->setTabEnabled(1,false);
        ui->add_prod_Button->setText("Редактировать");
        ui->get_name->setText(QString::fromLocal8Bit(product_ptr->get_name()));
        ui->get_price->setText(QString::number(product_ptr->get_price()));
        ui->get_amount->setText(QString::number(product_ptr->get_amount()));
        ui->get_status->setChecked(product_ptr->get_status());
    }

}

Add_Dialog::~Add_Dialog()
{
    delete ui;
}


void Add_Dialog::on_add_prod_Button_clicked()
{
    std::string name = ui->get_name->text().toLocal8Bit().constData();
    QString price = ui->get_price->text();
    QString amount = ui->get_amount->text();
    bool status = false;
    if(ui->get_status->checkState() == Qt::Checked){
        status = true;
    }

    int pos = 0;
    QValidator::State state_price = doubleValidator.validate(price,pos);
    QValidator::State state_amount = intValidator.validate(amount, pos);

    if(!name.empty() && state_price == QValidator::Acceptable && state_amount == QValidator::Acceptable){
        double pr = ui->get_price->text().toDouble();
        int am = ui->get_amount->text().toInt();
        if (_edit){
            product_ptr->set_name(name);
            product_ptr->set_price(pr);
            product_ptr->set_amount(am);
            product_ptr->set_status(status);
        }
        else{
            std::shared_ptr<Dmitrieva_product> product = std::make_shared<Dmitrieva_product>();
            product->set_name(name);
            product->set_price(pr);
            product->set_amount(am);
            product->set_status(status);
            market_ptr->get_products_ref().push_back(product);
        }
        done(QDialog::Accepted);
    }
    else{
        ui->get_message->setText("Некорректный ввод");
    }

}

void Add_Dialog::on_add_food_btn_clicked()
{
    std::string name = ui->name_field->text().toLocal8Bit().constData();
    QString price = ui->price_field->text();
    QString amount = ui->amount_field->text();
    bool status = false;
    QString cal = ui->caloric_field->text();
    bool vegen = false;
    if(ui->status_field->checkState() == Qt::Checked){
        status = true;
    }
    if(ui->veget_field->checkState() == Qt::Checked){
        vegen = true;
    }

    int pos = 0;
    QValidator::State state_price = doubleValidator.validate(price,pos);
    QValidator::State state_amount = intValidator.validate(amount, pos);
    QValidator::State state_cal = calIntValidator.validate(cal, pos);

    if(!name.empty() && state_price == QValidator::Acceptable && state_amount == QValidator::Acceptable && state_cal == QValidator::Acceptable){
        double pr = ui->price_field->text().toDouble();
        int am = ui->amount_field->text().toInt();
        int ca = ui->caloric_field->text().toInt();
        if (_edit){
            auto food_ptr = std::dynamic_pointer_cast<Food>(product_ptr);
            food_ptr->set_name(name);
            food_ptr->set_price(pr);
            food_ptr->set_amount(am);
            food_ptr->set_status(status);
            food_ptr->set_caloric(ca);
            food_ptr->set_veget(vegen);
        }
        else{
            std::shared_ptr<Food> product = std::make_shared<Food>();

            product->set_name(name);
            product->set_price(pr);
            product->set_amount(am);
            product->set_status(status);
            product->set_caloric(ca);
            product->set_veget(vegen);
            market_ptr->get_products_ref().push_back(product);

        }
       done(QDialog::Accepted);
    }
    else{
        ui->message_field->setText("Некорректный ввод");
    }

}

