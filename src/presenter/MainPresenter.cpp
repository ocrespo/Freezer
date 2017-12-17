/*
 * MainPresenter.cpp
 *
 *  Created on: 17 Dec 2017
 *      Author: Oscar Crespo
 */

#include "MainPresenter.h"

#include <functional>

//QT
#include <qfiledialog.h>
#include <QMessageBox>

//Project
#include <view/MainWindow.h>
#include <model/Model.h>


MainPresenter::MainPresenter(MainWindow *view,Model *model) :
	mainView(view),
	model(model)
{
	/*model->registerUpdateStartProcess ( std::bind( &MainPresenter::updateStartProgression, this) );
	model->registerUpdateProgression( std::bind( &MainPresenter::updateProgression, this, std::placeholders::_1 ) );
	model->registerUpdateEndProcess ( std::bind( &MainPresenter::updateFinishProgression, this) );*/


	QObject::connect(mainView,SIGNAL(ButtonStartClicked()),this,SLOT(run()));

	QObject::connect(mainView,SIGNAL(InputFileClicked()),this,SLOT(InputFileClicked()));

	QObject::connect(mainView,SIGNAL(OutputFileClicked()),this,SLOT(OutputFileClicked()));


}

MainPresenter::~MainPresenter() {
	// TODO Auto-generated destructor stub
}

