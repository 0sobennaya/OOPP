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

private slots:
    void on_pushButton_clicked();

    void on_listWidget_currentRowChanged(int currentRow);

private:
    Ui::Dialog_dmitrieva *ui;
};

#endif // DIALOG_DMITRIEVA_H
