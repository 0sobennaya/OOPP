#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Open_button_triggered()
{
    filename = QFileDialog::getOpenFileName(this, tr("Открыть"), QDir::currentPath(), tr("Текстовый файл(*.txt)"));
    if (!filename.isEmpty())
        ui->scroll_widget->load(filename);
}




void MainWindow::on_Clear_button_triggered()
{
    ui->scroll_widget->clean();
}


void MainWindow::on_Save_as_button_triggered()
{
    filename = QFileDialog::getSaveFileName(this, tr("Открыть"), QDir::currentPath(), tr("Текстовый файл(*.txt)"));
    if (!filename.isEmpty())
        ui->scroll_widget->save(filename);
}



void MainWindow::on_Edit_button_triggered()
{


    std::shared_ptr<Dmitrieva_market> market_ptr = std::make_shared<Dmitrieva_market>(ui->scroll_widget->market);
    Dialog_dmitrieva dlg(market_ptr, this);

    if (dlg.exec() == QDialog::Accepted){
        ui->scroll_widget->market = *dlg.market_ptr;
    }
}

