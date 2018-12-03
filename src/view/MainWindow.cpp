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

    QObject::connect(ui->removeButton,
            &QPushButton::clicked,
            this,
            [&](){buttonDeleteClicked(ui->treeWidget->currentItem()->text(0));}
    );
    QObject::connect(ui->addButton,SIGNAL(clicked()),this,SIGNAL(buttonAddedClicked()));

    QObject::connect(ui->treeWidget,
                &QTreeWidget::itemDoubleClicked,
                this,
                [&](){itemSelected(ui->treeWidget->currentItem()->text(0));}
    );

    QObject::connect(ui->treeWidget,
                &QTreeWidget::itemEntered,
                this,
                [&](){itemSelected(ui->treeWidget->currentItem()->text(0));}
    );

    ui->treeWidget->setSortingEnabled(true);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::addItem(int id,int drawer, const QString& name, const QString& description, const QString& date){
    ui->treeWidget->setSortingEnabled(false);

    QTreeWidgetItem * item = new QTreeWidgetItem();
    item->setText(0,QString::number(id));
    item->setText(1,QString::number(drawer));
    item->setText(2,name);
    item->setText(3,description);
    item->setText(4,date);

	ui->treeWidget->addTopLevelItem(item);

	items[id] = item;

    ui->treeWidget->setSortingEnabled(true);
}

void MainWindow::removeItem(int id){
    ui->treeWidget->setSortingEnabled(false);
    ui->treeWidget->takeTopLevelItem(ui->treeWidget->indexOfTopLevelItem(items[id]));
    delete items.take(id);
    ui->treeWidget->setSortingEnabled(true);
}

void MainWindow::updateItem(int id,int drawer, const QString& name, const QString& description){
    items[id]->setText(1,QString::number(drawer));
    items[id]->setText(2,name);
    items[id]->setText(3,description);
}


#include "moc_MainWindow.cpp"


