/*
 * MainWindow.h
 *
 *  Created on: 10 Dec 2017
 *      Author: Oscar Crespo
 */

#ifndef SRC_VIEW_MAINWINDOW_H_
#define SRC_VIEW_MAINWINDOW_H_

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow: public QMainWindow {

    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
	virtual ~MainWindow();

signals:
	void ButtonStartClicked();
	void InputFileClicked();
	void OutputFileClicked();

private:
    Ui::MainWindow *ui;
};

#endif /* SRC_VIEW_MAINWINDOW_H_ */
