/*
 * Subject.h
 *
 *  Created on: 15 Mar 2017
 *      Author: ocrespo
 */

#ifndef SRC_OBSERVER_SUBJECT_H_
#define SRC_OBSERVER_SUBJECT_H_

#include <string>

#include <functional>
#include <list>

class IObserver;

using std::list;
using std::function;
using std::string;

class Subject {
public:
	Subject();
	virtual ~Subject();

	void registerUpdateStartProcess(function<void()> fn);
	void registerUpdateProgression(function<void(int)> fn);
	void registerUpdateEndProcess(function<void()> fn);


protected:

	void notifyStartProcess();
	void notifyProgression(int value);
	void notifyEndProcess();

private:

	list<function<void()>> startProcessCallback;
	list<function<void(int)>> progressionCallback;
	list<function<void()>> endProcessCallback;
};

#endif /* SRC_OBSERVER_SUBJECT_H_ */
