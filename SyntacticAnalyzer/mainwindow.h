#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QPixmap>

#include "automatum.h"
#include <list>
#include "syntactic.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Syntactic* syntactic;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_analyzeBT_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
