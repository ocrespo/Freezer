/*
 * Subject.cpp
 *
 *  Created on: 15 Mar 2017
 *      Author: ocrespo
 */

#include "subject.h"

#include "observer.h"

Subject::Subject() : startProcessCallback(3),
					progressionCallback(3),
					endProcessCallback(3)
{

}

Subject::~Subject() {
}

void Subject::registerUpdateStartProcess(void_func& fn){

	startProcessCallback.push_back(fn);

}

void Subject::notifyStartProcess(){

	for(auto it = startProcessCallback.cbegin(); it != startProcessCallback.cend(); ++it){
		(*it)();
	}
}



void Subject::registerUpdateProgression(voidInt_func& fn){

	progressionCallback.push_back(fn);

}

void Subject::notifyProgression(int value){

	for(auto it = progressionCallback.cbegin(); it != progressionCallback.cend(); ++it){
		(*it)(value);
	}
}


void Subject::registerUpdateEndProcess(void_func& fn){

	endProcessCallback.push_back(fn);

}

void Subject::notifyEndProcess(){

	for(auto it = endProcessCallback.cbegin(); it != endProcessCallback.cend(); ++it){
		(*it)();
	}
}
