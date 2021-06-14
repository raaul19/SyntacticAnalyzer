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

    text = ui->textTE->toPlainText().toStdString();
    if(syntactic->analyze(text)){
        popUp.setText("Cadena válida!");
        popUp.exec();

    }
    else{
        popUp.setText("Cadena NO válida :( ! ");
        popUp.exec();
    }
}
