/*
 * Model.cpp
 *
 *  Created on: 10 Dec 2017
 *      Author: Oscar Crespo
 */

#include "Model.h"

Model::Model() {
	// TODO Auto-generated constructor stub

}

Model::~Model() {
	// TODO Auto-generated destructor stub
}

void Model::startTest(std::string input_file, std::string output_file){
	//Doing test
	notifyStartProcess();
	notifyProgression(20);
	notifyProgression(40);
	notifyProgression(50);
	notifyProgression(60);
	notifyProgression(70);
	notifyProgression(80);
	notifyProgression(90);
	notifyProgression(99);
	notifyProgression(100);

	notifyEndProcess();

}
