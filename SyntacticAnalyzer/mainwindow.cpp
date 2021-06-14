#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    syntactic = new Syntactic();
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_analyzeBT_clicked(){
    std::string text;
    QMessageBox popUp;
    QPixmap img("://images/check.png");
    QPixmap img2("://images/cross.png");

    text = ui->textTE->toPlainText().toStdString();
    if(syntactic->analyze(text)){
        ui->checkLB->setEnabled(true);
        ui->crossLB->setEnabled(false);
        popUp.setText("Cadena válida!");
        popUp.setIconPixmap(img.scaled(40,39));
        popUp.exec();
    }
    else{
        ui->checkLB->setEnabled(false);
        ui->crossLB->setEnabled(true);
        popUp.setText("Cadena NO válida :( ! ");
        popUp.setIconPixmap(img2.scaled(40,39));
        popUp.exec();
    }

}
