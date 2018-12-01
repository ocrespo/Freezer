/*
 * Freezer.h
 *
 *  Created on: 1 Dec 2018
 *      Author: Oscar Crespo
 */

#ifndef SRC_MODEL_FREEZER_FREEZER_H_
#define SRC_MODEL_FREEZER_FREEZER_H_

#include <unordered_map>
#include <vector>

#include "Item.h"

namespace freezer {

class Freezer {
public:
	Freezer();
	virtual ~Freezer();

	void addItem(int drawer, const std::string& name, const std::string& description);

	void moveItem(int key, int drawer);

	void editItem(int key, const std::string& name, const std::string& description);

	void removeItem(int key);

	std::vector<Item> getItems();

protected:

	int findNextId();

	void save();
	void load();

	std::unordered_map<int,Item> freezer;
	int next_id;

	int num_drawer;


private:


};

} /* namespace freezer */

#endif /* SRC_MODEL_FREEZER_FREEZER_H_ */
