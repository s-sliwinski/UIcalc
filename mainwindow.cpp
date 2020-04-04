#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dzialanie.addButton(ui->radioButto_dodawanie,0);
    dzialanie.addButton(ui->radioButton_odejmowanie,1);
    dzialanie.addButton(ui->radioButton_mnozenie,2);
    dzialanie.addButton(ui->radioButton_dzielenie,3);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_oblicz_clicked()
{
    float x=ui->lineEdit_x->text().toFloat();
    float y=ui->lineEdit_y->text().toFloat();
    float wynik=0;

    switch(dzialanie.checkedId())
    {
    case 0: wynik=x+y; break;
    case 1: wynik=x-y; break;
    case 2: wynik=x*y; break;
    case 3: wynik=x/y; break;
    default: wynik = -1;
    }

    QString strWynik=QString::number(wynik);
    ui->lineEdit_wynik->setText(strWynik);
}

