/*
 * Model.h
 *
 *  Created on: 10 Dec 2017
 *      Author: Oscar Crespo
 */

#ifndef SRC_MODEL_MODEL_H_
#define SRC_MODEL_MODEL_H_

#include "observer/Observable.h"
#include "events/Event.h"

#include "Model_types.h"

class Model : public ocutils::Observable<EModelEvents,ocutils::Event*> {
public:
	Model();
	virtual ~Model();


};

#endif /* SRC_MODEL_MODEL_H_ */
