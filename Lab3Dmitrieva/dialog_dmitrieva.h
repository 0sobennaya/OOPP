#ifndef DIALOG_DMITRIEVA_H
#define DIALOG_DMITRIEVA_H
#include "Dmitrieva_market.h"
#include <QDialog>


namespace Ui {
class Dialog_dmitrieva;
}

class Dialog_dmitrieva : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_dmitrieva(std::shared_ptr<Dmitrieva_market> market_ptr, QWidget *parent = nullptr);
    ~Dialog_dmitrieva();
    std::shared_ptr<Dmitrieva_market> market_ptr;
    void paintEvent(QPaintEvent *event);


private slots:


    void on_listWidget_currentRowChanged(int currentRow);

    void on_delete_button_clicked();

    void on_add_button_clicked();

    void on_edit_button_clicked();

private:
    Ui::Dialog_dmitrieva *ui;
};

#endif // DIALOG_DMITRIEVA_H
