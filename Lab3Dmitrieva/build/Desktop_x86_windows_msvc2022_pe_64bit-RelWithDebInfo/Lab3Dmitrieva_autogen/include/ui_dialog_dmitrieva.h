/********************************************************************************
** Form generated from reading UI file 'dialog_dmitrieva.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DMITRIEVA_H
#define UI_DIALOG_DMITRIEVA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_dmitrieva
{
public:
    QListWidget *listWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_menu;
    QPushButton *delete_button;
    QPushButton *edit_button;
    QPushButton *add_button;
    QDialogButtonBox *ok_buttonbox;
    QSpacerItem *verticalSpacer;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_fields;
    QLabel *name_label;
    QLabel *caloric_label;
    QLabel *price_label;
    QLabel *status_label;
    QLabel *amount_label;
    QLabel *veget_label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *write_name;
    QLabel *write_price;
    QLabel *write_amount;
    QLabel *write_status;
    QLabel *write_caloric;
    QLabel *write_veget;

    void setupUi(QDialog *Dialog_dmitrieva)
    {
        if (Dialog_dmitrieva->objectName().isEmpty())
            Dialog_dmitrieva->setObjectName("Dialog_dmitrieva");
        Dialog_dmitrieva->resize(774, 442);
        listWidget = new QListWidget(Dialog_dmitrieva);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 10, 511, 191));
        gridLayoutWidget = new QWidget(Dialog_dmitrieva);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(550, 20, 211, 171));
        gridLayout_menu = new QGridLayout(gridLayoutWidget);
        gridLayout_menu->setObjectName("gridLayout_menu");
        gridLayout_menu->setContentsMargins(0, 0, 0, 0);
        delete_button = new QPushButton(gridLayoutWidget);
        delete_button->setObjectName("delete_button");

        gridLayout_menu->addWidget(delete_button, 2, 0, 1, 1);

        edit_button = new QPushButton(gridLayoutWidget);
        edit_button->setObjectName("edit_button");

        gridLayout_menu->addWidget(edit_button, 1, 0, 1, 1);

        add_button = new QPushButton(gridLayoutWidget);
        add_button->setObjectName("add_button");

        gridLayout_menu->addWidget(add_button, 0, 0, 1, 1);

        ok_buttonbox = new QDialogButtonBox(gridLayoutWidget);
        ok_buttonbox->setObjectName("ok_buttonbox");
        ok_buttonbox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        ok_buttonbox->setCenterButtons(true);

        gridLayout_menu->addWidget(ok_buttonbox, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_menu->addItem(verticalSpacer, 3, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(Dialog_dmitrieva);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(10, 220, 131, 181));
        gridLayout_fields = new QGridLayout(gridLayoutWidget_2);
        gridLayout_fields->setObjectName("gridLayout_fields");
        gridLayout_fields->setContentsMargins(0, 0, 0, 0);
        name_label = new QLabel(gridLayoutWidget_2);
        name_label->setObjectName("name_label");

        gridLayout_fields->addWidget(name_label, 1, 0, 1, 1);

        caloric_label = new QLabel(gridLayoutWidget_2);
        caloric_label->setObjectName("caloric_label");

        gridLayout_fields->addWidget(caloric_label, 5, 0, 1, 1);

        price_label = new QLabel(gridLayoutWidget_2);
        price_label->setObjectName("price_label");

        gridLayout_fields->addWidget(price_label, 2, 0, 1, 1);

        status_label = new QLabel(gridLayoutWidget_2);
        status_label->setObjectName("status_label");

        gridLayout_fields->addWidget(status_label, 4, 0, 1, 1);

        amount_label = new QLabel(gridLayoutWidget_2);
        amount_label->setObjectName("amount_label");

        gridLayout_fields->addWidget(amount_label, 3, 0, 1, 1);

        veget_label = new QLabel(gridLayoutWidget_2);
        veget_label->setObjectName("veget_label");

        gridLayout_fields->addWidget(veget_label, 6, 0, 1, 1);

        verticalLayoutWidget = new QWidget(Dialog_dmitrieva);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(160, 220, 471, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        write_name = new QLabel(verticalLayoutWidget);
        write_name->setObjectName("write_name");

        verticalLayout->addWidget(write_name);

        write_price = new QLabel(verticalLayoutWidget);
        write_price->setObjectName("write_price");

        verticalLayout->addWidget(write_price);

        write_amount = new QLabel(verticalLayoutWidget);
        write_amount->setObjectName("write_amount");

        verticalLayout->addWidget(write_amount);

        write_status = new QLabel(verticalLayoutWidget);
        write_status->setObjectName("write_status");

        verticalLayout->addWidget(write_status);

        write_caloric = new QLabel(verticalLayoutWidget);
        write_caloric->setObjectName("write_caloric");

        verticalLayout->addWidget(write_caloric);

        write_veget = new QLabel(verticalLayoutWidget);
        write_veget->setObjectName("write_veget");

        verticalLayout->addWidget(write_veget);


        retranslateUi(Dialog_dmitrieva);
        QObject::connect(ok_buttonbox, &QDialogButtonBox::accepted, Dialog_dmitrieva, qOverload<>(&QDialog::accept));
        QObject::connect(ok_buttonbox, &QDialogButtonBox::rejected, Dialog_dmitrieva, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog_dmitrieva);
    } // setupUi

    void retranslateUi(QDialog *Dialog_dmitrieva)
    {
        Dialog_dmitrieva->setWindowTitle(QCoreApplication::translate("Dialog_dmitrieva", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\276\320\262", nullptr));
        delete_button->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        edit_button->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        add_button->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        name_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        caloric_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\232\320\260\320\273\320\276\321\200\320\270\320\271\320\275\320\276\321\201\321\202\321\214", nullptr));
        price_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        status_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\224\320\276\321\201\321\202\321\203\320\277\320\265\320\275", nullptr));
        amount_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        veget_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\222\320\265\320\263\320\265\321\202\320\260\321\200\320\270\320\260\320\275\321\201\320\272\320\270\320\271", nullptr));
        write_name->setText(QString());
        write_price->setText(QString());
        write_amount->setText(QString());
        write_status->setText(QString());
        write_caloric->setText(QString());
        write_veget->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_dmitrieva: public Ui_Dialog_dmitrieva {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DMITRIEVA_H
