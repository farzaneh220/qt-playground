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

int firstNum,secondNum, result;



void MainWindow::on_btnAdd_clicked()
{
    firstNum= ui->textFirstNum->text().toInt();
    secondNum= ui->textSecondNum->text().toInt();
    result = firstNum+secondNum;
    ui->textResult->setText(QString::number(result));

}



void MainWindow::on_btnSubtract_clicked()
{
    firstNum= ui->textFirstNum->text().toInt();
    secondNum= ui->textSecondNum->text().toInt();
    result = firstNum-secondNum;
    ui->textResult->setText(QString::number(result));
}



void MainWindow::on_btnDivide_clicked()
{
    firstNum= ui->textFirstNum->text().toInt();
    secondNum= ui->textSecondNum->text().toInt();
    result = firstNum/secondNum;
    ui->textResult->setText(QString::number(result));

}


void MainWindow::on_btnMultiply_clicked()
{

    firstNum= ui->textFirstNum->text().toInt();
    secondNum= ui->textSecondNum->text().toInt();
    result = firstNum*secondNum;
    ui->textResult->setText(QString::number(result));

}

