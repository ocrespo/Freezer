/*
 * Subject.cpp
 *
 *  Created on: 15 Mar 2017
 *      Author: ocrespo
 */

#include "subject.h"

#include "observer.h"

Subject::Subject() : startProcessCallback(),
progressionCallback(),
	endProcessCallback()
{

}

Subject::~Subject() {
}

void Subject::registerUpdateStartProcess(function<void()> fn){

	startProcessCallback.push_back(fn);

}

void Subject::notifyStartProcess(){

	for(auto it = startProcessCallback.cbegin(); it != startProcessCallback.cend(); ++it){
		(*it)();
	}
}



void Subject::registerUpdateProgression(function<void(int)> fn){

	progressionCallback.push_back(fn);

}

void Subject::notifyProgression(int value){

	for(auto it = progressionCallback.cbegin(); it != progressionCallback.cend(); ++it){
		(*it)(value);
	}
}


void Subject::registerUpdateEndProcess(function<void()> fn){

	endProcessCallback.push_back(fn);

}

void Subject::notifyEndProcess(){

	for(auto it = endProcessCallback.cbegin(); it != endProcessCallback.cend(); ++it){
		(*it)();
	}
}
