/*
 * Freezer.cpp
 *
 *  Created on: 1 Dec 2018
 *      Author: Oscar Crespo
 */

#include "Freezer.h"

namespace freezer {

Freezer::Freezer() :
		next_id(0),
		num_drawer(0)
{

}

Freezer::~Freezer() {

}

void Freezer::addItem(int drawer, const std::string& name, const std::string& description){
	freezer.emplace(next_id,Item(next_id,drawer,name,description));
	next_id = findNextId();

}

bool Freezer::moveItem(int key, int drawer){
	bool ret{false};
	auto item{freezer.find(key)};
	if(item != freezer.cend()){
		item->second.setDrawer(drawer);
		ret = true;
	}
	return ret;
}

bool Freezer::editItem(int key, const std::string& name, const std::string& description){
	bool ret{false};
	auto item{freezer.find(key)};
	if(item != freezer.cend()){
		item->second.setName(name);
		item->second.setDescription(description);
		ret = true;
	}
	return ret;
}

bool Freezer::removeItem(int key){
	bool ret{freezer.erase(key) == 1};
	next_id = findNextId();
	return ret;
}

Item Freezer::getItem(int key){
	return freezer.find(key)->second;
}

std::vector<Item> Freezer::getItems(){
	std::vector<Item> items;
	for(auto it = freezer.cbegin(); it != freezer.cend(); ++it){
		items.push_back(it->second);
	}
	return items;
}

int Freezer::findNextId(){
	if(freezer.empty() || freezer.find(0) == freezer.cend()){
		return 0;
	}

	bool found{false};
	int key{-1};
	for(auto it = freezer.cbegin(); it != freezer.cend() && !found; ++it){
		if(key == -1){
			key = it->second.getId();
		}
		else{
			if(it->second.getId() != key){
				found = true;
			}
		}
		if(!found){
			++key;
		}
	}

	return key;
}



} /* namespace freezer */
