/*
 * Observer.h
 *
 *  Created on: 15 Mar 2017
 *      Author: ocrespo
 */

#ifndef SRC_OBSERVER_OBSERVER_H_
#define SRC_OBSERVER_OBSERVER_H_

#include <string>

class IObserver {

	friend class Subject;

public:
	IObserver();
	virtual ~IObserver();

	virtual void updateInputFile(std::string text) = 0;

private:

	IObserver* next;

};

#endif /* SRC_OBSERVER_OBSERVER_H_ */
