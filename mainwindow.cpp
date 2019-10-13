#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->gridLayout->setAlignment(Qt::AlignCenter);

    for(int i= 0; i<ui->gridLayout->columnCount(); i++) {
            //ui->gridLayout->setColumnMinimumWidth(i, 10);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

