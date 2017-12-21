/*
 * MainPresenter.h
 *
 *  Created on: 17 Dec 2017
 *      Author: Oscar Crespo
 */

#ifndef SRC_PRESENTER_MAINPRESENTER_H_
#define SRC_PRESENTER_MAINPRESENTER_H_

#include <QObject>


class Model;
class MainWindow;

class MainPresenter: public QObject  {

	Q_OBJECT

public:
	MainPresenter(MainWindow *mainView,Model *model);
	virtual ~MainPresenter();

private slots:
	void run();

private:
	MainWindow *mainView;
	Model *model;
};

#endif /* SRC_PRESENTER_MAINPRESENTER_H_ */
