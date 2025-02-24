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

void MainWindow::numberClickHandler(int number)
{

    qDebug() << "numero valittu = " << number;
    if(state == 1){
        QString resstr = QString::number(number);
        ui->Num1->setText(resstr);
        qDebug() << "numero1=" << number1 << "numero2=" << number2;
    }
    if(state == 2){
        QString resstr = QString::number(number);
        ui->Num2->setText(resstr);
        qDebug() << "numero1=" << number1 << "numero2=" << number2;
    }

}

void MainWindow::clearAndEnterClickHandler()
{

}

void MainWindow::addSubMulDivClickHandler()
{

}

void MainWindow::resetLineEdits()
{

}

void MainWindow::on_plus_clicked()
{
    if(state==3){
    QString num1Str = ui->Num1->text();
    int number1 = num1Str.toInt();

    QString num2Str = ui->Num2->text();
    int number2 = num2Str.toInt();

    int result = number1+number2;

    QString resstr = QString::number(result);
    ui->Resul->setText(resstr);
    qDebug() << "vastaus=" << result;
    }
}


void MainWindow::on_miinus_clicked()
{
    if(state==3){
    QString num1Str = ui->Num1->text();
    int number1 = num1Str.toInt();

    QString num2Str = ui->Num2->text();
    int number2 = num2Str.toInt();

    int result = number1-number2;

    QString resstr = QString::number(result);
    ui->Resul->setText(resstr);
    qDebug() << "vastaus=" << result;
    }
}


void MainWindow::on_kerto_clicked()
{
    if(state==3){
    QString num1Str = ui->Num1->text();
    int number1 = num1Str.toInt();

    QString num2Str = ui->Num2->text();
    int number2 = num2Str.toInt();

    int result = number1*number2;

    QString resstr = QString::number(result);
    ui->Resul->setText(resstr);
    qDebug() << "vastaus=" << result;
    }
}


void MainWindow::on_Jako_clicked()
{
    if(state==3){
    QString num1Str = ui->Num1->text();
    int number1 = num1Str.toInt();

    QString num2Str = ui->Num2->text();
    int number2 = num2Str.toInt();

    int result = number1/number2;

    QString resstr = QString::number(result);
    ui->Resul->setText(resstr);
    qDebug() << "vastaus=" << result;
    }

}


void MainWindow::on_N1_clicked()
{
    QString numberStr = ui->N1->text();
    int number = numberStr.toInt();
    numberClickHandler(number);
}


void MainWindow::on_N2_clicked()
{
    QString numberStr = ui->N2->text();
    int number = numberStr.toInt();
    numberClickHandler(number);
}


void MainWindow::on_N3_clicked()
{
    QString numberStr = ui->N3->text();
    int number = numberStr.toInt();
    numberClickHandler(number);
}


void MainWindow::on_N4_clicked()
{
    QString numberStr = ui->N4->text();
    int number = numberStr.toInt();
    numberClickHandler(number);
}


void MainWindow::on_N5_clicked()
{
    QString numberStr = ui->N5->text();
    int number = numberStr.toInt();
    numberClickHandler(number);
}


void MainWindow::on_N6_clicked()
{
    QString numberStr = ui->N6->text();
    int number = numberStr.toInt();
    numberClickHandler(number);
}


void MainWindow::on_N7_clicked()
{
    QString numberStr = ui->N7->text();
    int number = numberStr.toInt();
    numberClickHandler(number);
}


void MainWindow::on_N8_clicked()
{
    QString numberStr = ui->N8->text();
    int number = numberStr.toInt();
    numberClickHandler(number);
}


void MainWindow::on_N9_clicked()
{
    QString numberStr = ui->N9->text();
    int number = numberStr.toInt();
    numberClickHandler(number);
}


void MainWindow::on_N0_clicked()
{
    QString numberStr = ui->N0->text();
    int number = numberStr.toInt();
    numberClickHandler(number);
}


void MainWindow::on_Enter_clicked()
{
    if(state==3){
        qDebug() << "tilanne" << state;
    }
    else{
    state++;
    qDebug() << "tilanne" << state;
    }
}


void MainWindow::on_Clear_clicked()
{
    state=1;
    qDebug() << "tilanne=" << state;
}

