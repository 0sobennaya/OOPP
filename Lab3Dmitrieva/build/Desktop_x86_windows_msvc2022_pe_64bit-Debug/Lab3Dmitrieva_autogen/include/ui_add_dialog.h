/********************************************************************************
** Form generated from reading UI file 'add_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_DIALOG_H
#define UI_ADD_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_Dialog
{
public:
    QTabWidget *tabWidget;
    QWidget *Add_product;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *get_name;
    QLineEdit *get_price;
    QLineEdit *get_status;
    QLineEdit *get_amount;
    QPushButton *add_prod_Button;
    QWidget *Add_food;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_10;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_10;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Add_Dialog)
    {
        if (Add_Dialog->objectName().isEmpty())
            Add_Dialog->setObjectName("Add_Dialog");
        Add_Dialog->resize(514, 412);
        tabWidget = new QTabWidget(Add_Dialog);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 521, 411));
        Add_product = new QWidget();
        Add_product->setObjectName("Add_product");
        gridLayoutWidget = new QWidget(Add_product);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 80, 171, 151));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(Add_product);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(210, 80, 261, 161));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        get_name = new QLineEdit(gridLayoutWidget_2);
        get_name->setObjectName("get_name");

        gridLayout_2->addWidget(get_name, 0, 0, 1, 1);

        get_price = new QLineEdit(gridLayoutWidget_2);
        get_price->setObjectName("get_price");

        gridLayout_2->addWidget(get_price, 1, 0, 1, 1);

        get_status = new QLineEdit(gridLayoutWidget_2);
        get_status->setObjectName("get_status");

        gridLayout_2->addWidget(get_status, 3, 0, 1, 1);

        get_amount = new QLineEdit(gridLayoutWidget_2);
        get_amount->setObjectName("get_amount");

        gridLayout_2->addWidget(get_amount, 2, 0, 1, 1);

        add_prod_Button = new QPushButton(Add_product);
        add_prod_Button->setObjectName("add_prod_Button");
        add_prod_Button->setGeometry(QRect(170, 300, 151, 41));
        tabWidget->addTab(Add_product, QString());
        Add_food = new QWidget();
        Add_food->setObjectName("Add_food");
        gridLayoutWidget_3 = new QWidget(Add_food);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(40, 50, 171, 191));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(gridLayoutWidget_3);
        label_9->setObjectName("label_9");

        gridLayout_3->addWidget(label_9, 3, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_3);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 5, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_3);
        label_8->setObjectName("label_8");

        gridLayout_3->addWidget(label_8, 4, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_3);
        label_7->setObjectName("label_7");

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_3);
        label_6->setObjectName("label_6");

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_3);
        label_10->setObjectName("label_10");

        gridLayout_3->addWidget(label_10, 1, 0, 1, 1);

        gridLayoutWidget_4 = new QWidget(Add_food);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(230, 50, 241, 193));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_5 = new QLineEdit(gridLayoutWidget_4);
        lineEdit_5->setObjectName("lineEdit_5");

        gridLayout_4->addWidget(lineEdit_5, 0, 0, 1, 1);

        lineEdit_9 = new QLineEdit(gridLayoutWidget_4);
        lineEdit_9->setObjectName("lineEdit_9");

        gridLayout_4->addWidget(lineEdit_9, 4, 0, 1, 1);

        lineEdit_7 = new QLineEdit(gridLayoutWidget_4);
        lineEdit_7->setObjectName("lineEdit_7");

        gridLayout_4->addWidget(lineEdit_7, 3, 0, 1, 1);

        lineEdit_8 = new QLineEdit(gridLayoutWidget_4);
        lineEdit_8->setObjectName("lineEdit_8");

        gridLayout_4->addWidget(lineEdit_8, 1, 0, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget_4);
        lineEdit_6->setObjectName("lineEdit_6");

        gridLayout_4->addWidget(lineEdit_6, 5, 0, 1, 1);

        lineEdit_10 = new QLineEdit(gridLayoutWidget_4);
        lineEdit_10->setObjectName("lineEdit_10");

        gridLayout_4->addWidget(lineEdit_10, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(Add_food);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(170, 280, 131, 41));
        tabWidget->addTab(Add_food, QString());

        retranslateUi(Add_Dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Add_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Add_Dialog)
    {
        Add_Dialog->setWindowTitle(QCoreApplication::translate("Add_Dialog", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Add_Dialog", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("Add_Dialog", "\320\224\320\276\321\201\321\202\321\203\320\277\320\265\320\275", nullptr));
        label->setText(QCoreApplication::translate("Add_Dialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("Add_Dialog", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        add_prod_Button->setText(QCoreApplication::translate("Add_Dialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Add_product), QCoreApplication::translate("Add_Dialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\276\320\264\321\203\320\272\321\202", nullptr));
        label_9->setText(QCoreApplication::translate("Add_Dialog", "\320\224\320\276\321\201\321\202\321\203\320\277\320\265\320\275", nullptr));
        label_5->setText(QCoreApplication::translate("Add_Dialog", "\320\222\320\265\320\263\320\265\321\202\320\260\321\200\320\270\320\260\320\275\321\201\320\272\320\270\320\271", nullptr));
        label_8->setText(QCoreApplication::translate("Add_Dialog", "\320\232\320\260\320\273\320\276\321\200\320\270\320\271\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_7->setText(QCoreApplication::translate("Add_Dialog", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_6->setText(QCoreApplication::translate("Add_Dialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_10->setText(QCoreApplication::translate("Add_Dialog", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Add_Dialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Add_food), QCoreApplication::translate("Add_Dialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\265\320\264\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_Dialog: public Ui_Add_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_DIALOG_H
