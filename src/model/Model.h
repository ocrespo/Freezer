/*
 * Model.h
 *
 *  Created on: 10 Dec 2017
 *      Author: Oscar Crespo
 */

#ifndef SRC_MODEL_MODEL_H_
#define SRC_MODEL_MODEL_H_

#include "observer/Subject.h"


class Model : public Subject{
public:
	Model();
	virtual ~Model();

	void startTest(std::string input_file, std::string output_file);

};

#endif /* SRC_MODEL_MODEL_H_ */
