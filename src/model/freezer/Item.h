/*
 * Item.h
 *
 *  Created on: 1 Dec 2018
 *      Author: Oscar Crespo
 */

#ifndef SRC_MODEL_FREEZER_ITEM_H_
#define SRC_MODEL_FREEZER_ITEM_H_

#include <string>

#include <boost/date_time/gregorian/gregorian.hpp>

namespace freezer {

class Item {
public:
	Item(int id, int drawer, const std::string& name, const std::string& description = "");
	virtual ~Item();

	inline int getId()const {return id;}

	inline int getDrawer()const {return drawer;}
	inline void setDrawer(int drawer){ this->drawer = drawer;}

	inline std::string getName()const {return name;}
	inline void setName(const std::string& name){ this->name = name;}

	inline std::string getDescription()const {return description;}
	inline void setDescription(const std::string& description){ this->description = description;}


protected:

	int id;
	int drawer;
	std::string name;
	std::string description;
	boost::gregorian::date date;

private:


};

} /* namespace freezer */

#endif /* SRC_MODEL_FREEZER_ITEM_H_ */
