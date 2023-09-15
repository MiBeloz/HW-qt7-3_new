#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    msgAbout = new QMessageBox(this);
    dialog_login = new Dialog_login(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_connect_clicked()
{
    dialog_login->setModal(true);
    dialog_login->show();
}

void MainWindow::on_actionAbout_triggered()
{
    msgAbout->setWindowTitle("О программе");
    msgAbout->setIcon(QMessageBox::Information);
    msgAbout->setText("Версия: " + QString::number(VERSION_MAJOR) + '.' + QString::number(VERSION_MINOR));

    msgAbout->show();
}
