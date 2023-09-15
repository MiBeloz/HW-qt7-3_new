#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "dialog_login.h"

#define VERSION_MAJOR 0
#define VERSION_MINOR 1

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_connect_clicked();

    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
    QMessageBox *msgAbout;
    Dialog_login *dialog_login;
};
#endif // MAINWINDOW_H
