#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_count_clicked()
{
    QString numberStr = ui->result->text();
    int number = numberStr.toInt();
    number++;
    QString resstr = QString::number(number);
    ui->result->setText(resstr);
}


void MainWindow::on_reset_clicked()
{
    QString numberStr = ui->result->text();
    int number = numberStr.toInt();
    number=0;
    QString resstr = QString::number(number);
    ui->result->setText(resstr);
}

