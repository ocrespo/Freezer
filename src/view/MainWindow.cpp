/*
 * MainWindow.cpp
 *
 *  Created on: 10 Dec 2017
 *      Author: Oscar Crespo
 */

#include "MainWindow.h"
#include "ui/ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*ui->progressBar->hide();

    QObject::connect(ui->ButtonStart,SIGNAL(clicked()),this,SIGNAL(ButtonStartClicked()));
    QObject::connect(ui->FileInputFile,SIGNAL(clicked()),this,SIGNAL(InputFileClicked()));

    QObject::connect(ui->FileOutputFile,SIGNAL(clicked()),this,SIGNAL(OutputFileClicked()));*/
}

MainWindow::~MainWindow() {
    delete ui;
}

