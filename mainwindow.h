#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QButtonGroup>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_oblicz_clicked();



private:
    Ui::MainWindow *ui;
    int dzialanie_id;
    QButtonGroup dzialanie;
};

#endif // MAINWINDOW_H
