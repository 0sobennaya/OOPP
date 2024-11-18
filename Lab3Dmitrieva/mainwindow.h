#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "dialog_dmitrieva.h"
#include <QMainWindow>
#include <sstream>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QString filename;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Open_button_triggered();

    void on_Clear_button_triggered();

    void on_Save_as_button_triggered();

    void on_Edit_button_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
