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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_dmitrieva
{
public:
    QListWidget *listWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_menu;
    QPushButton *delete_button;
    QPushButton *pushButton_2;
    QPushButton *add_button;
    QDialogButtonBox *ok_buttonbox;
    QSpacerItem *verticalSpacer;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_fields;
    QLabel *status_label;
    QLabel *amount_label;
    QLabel *name_label;
    QLabel *price_label;
    QLabel *caloric_label;
    QLabel *label;
    QLabel *label_2;

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

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout_menu->addWidget(pushButton_2, 1, 0, 1, 1);

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
        gridLayoutWidget_2->setGeometry(QRect(10, 220, 111, 131));
        gridLayout_fields = new QGridLayout(gridLayoutWidget_2);
        gridLayout_fields->setObjectName("gridLayout_fields");
        gridLayout_fields->setContentsMargins(0, 0, 0, 0);
        status_label = new QLabel(gridLayoutWidget_2);
        status_label->setObjectName("status_label");

        gridLayout_fields->addWidget(status_label, 4, 0, 1, 1);

        amount_label = new QLabel(gridLayoutWidget_2);
        amount_label->setObjectName("amount_label");

        gridLayout_fields->addWidget(amount_label, 3, 0, 1, 1);

        name_label = new QLabel(gridLayoutWidget_2);
        name_label->setObjectName("name_label");

        gridLayout_fields->addWidget(name_label, 1, 0, 1, 1);

        price_label = new QLabel(gridLayoutWidget_2);
        price_label->setObjectName("price_label");

        gridLayout_fields->addWidget(price_label, 2, 0, 1, 1);

        caloric_label = new QLabel(gridLayoutWidget_2);
        caloric_label->setObjectName("caloric_label");

        gridLayout_fields->addWidget(caloric_label, 5, 0, 1, 1);

        label = new QLabel(Dialog_dmitrieva);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 240, 63, 20));
        label_2 = new QLabel(Dialog_dmitrieva);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 280, 63, 20));

        retranslateUi(Dialog_dmitrieva);

        QMetaObject::connectSlotsByName(Dialog_dmitrieva);
    } // setupUi

    void retranslateUi(QDialog *Dialog_dmitrieva)
    {
        Dialog_dmitrieva->setWindowTitle(QCoreApplication::translate("Dialog_dmitrieva", "Dialog", nullptr));
        delete_button->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        add_button->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        status_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\224\320\276\321\201\321\202\321\203\320\277\320\265\320\275", nullptr));
        amount_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        name_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        price_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        caloric_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\232\320\260\320\273\320\276\321\200\320\270\320\271\320\275\320\276\321\201\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Dialog_dmitrieva", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_dmitrieva", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_dmitrieva: public Ui_Dialog_dmitrieva {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DMITRIEVA_H
