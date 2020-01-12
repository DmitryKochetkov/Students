#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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


void MainWindow::on_equalsButton_clicked()
{
    QString s = ui->lineArg1->text();
    QMessageBox::warning(this, "Arg 1", s);
    double a = 0.3;
    ui->lineArg1->setText(QString::number(a));
}
