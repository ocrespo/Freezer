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
#include <vector>

class IObserver;

using std::vector;
using std::function;
using std::string;

using void_func = function<void()>;
using voidInt_func = function<void(int)>;


class Subject {
public:
	Subject();
	virtual ~Subject();

	void registerUpdateStartProcess(void_func& fn);
	void registerUpdateProgression(voidInt_func& fn);
	void registerUpdateEndProcess(void_func& fn);


protected:

	void notifyStartProcess();
	void notifyProgression(int value);
	void notifyEndProcess();

private:

	vector<void_func> startProcessCallback;
	vector<voidInt_func> progressionCallback;
	vector<void_func> endProcessCallback;
};

#endif /* SRC_OBSERVER_SUBJECT_H_ */
