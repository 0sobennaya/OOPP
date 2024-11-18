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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QDialogButtonBox *ok_buttonbox;
    QSpacerItem *verticalSpacer;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_fields;
    QLabel *status_label;
    QLabel *amount_label;
    QLabel *name_label;
    QLabel *price_label;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_answers;
    QLabel *amount_ans_label;
    QLabel *status_ans_label;
    QLabel *name_ans_label;
    QLabel *price_ans_label;

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
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout_menu->addWidget(pushButton, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout_menu->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout_menu->addWidget(pushButton_3, 0, 0, 1, 1);

        ok_buttonbox = new QDialogButtonBox(gridLayoutWidget);
        ok_buttonbox->setObjectName("ok_buttonbox");
        ok_buttonbox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        ok_buttonbox->setCenterButtons(true);

        gridLayout_menu->addWidget(ok_buttonbox, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_menu->addItem(verticalSpacer, 3, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(Dialog_dmitrieva);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(10, 220, 91, 131));
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

        gridLayoutWidget_3 = new QWidget(Dialog_dmitrieva);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(150, 220, 441, 130));
        gridLayout_answers = new QGridLayout(gridLayoutWidget_3);
        gridLayout_answers->setObjectName("gridLayout_answers");
        gridLayout_answers->setContentsMargins(0, 0, 0, 0);
        amount_ans_label = new QLabel(gridLayoutWidget_3);
        amount_ans_label->setObjectName("amount_ans_label");

        gridLayout_answers->addWidget(amount_ans_label, 2, 0, 1, 1);

        status_ans_label = new QLabel(gridLayoutWidget_3);
        status_ans_label->setObjectName("status_ans_label");

        gridLayout_answers->addWidget(status_ans_label, 3, 0, 1, 1);

        name_ans_label = new QLabel(gridLayoutWidget_3);
        name_ans_label->setObjectName("name_ans_label");

        gridLayout_answers->addWidget(name_ans_label, 0, 0, 1, 1);

        price_ans_label = new QLabel(gridLayoutWidget_3);
        price_ans_label->setObjectName("price_ans_label");

        gridLayout_answers->addWidget(price_ans_label, 1, 0, 1, 1);


        retranslateUi(Dialog_dmitrieva);

        QMetaObject::connectSlotsByName(Dialog_dmitrieva);
    } // setupUi

    void retranslateUi(QDialog *Dialog_dmitrieva)
    {
        Dialog_dmitrieva->setWindowTitle(QCoreApplication::translate("Dialog_dmitrieva", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        status_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\224\320\276\321\201\321\202\321\203\320\277\320\265\320\275", nullptr));
        amount_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        name_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        price_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        amount_ans_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "TextLabel", nullptr));
        status_ans_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "TextLabel", nullptr));
        name_ans_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "TextLabel", nullptr));
        price_ans_label->setText(QCoreApplication::translate("Dialog_dmitrieva", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_dmitrieva: public Ui_Dialog_dmitrieva {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DMITRIEVA_H
