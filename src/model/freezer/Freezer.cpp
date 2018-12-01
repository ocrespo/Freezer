/*
 * Freezer.cpp
 *
 *  Created on: 1 Dec 2018
 *      Author: Oscar Crespo
 */

#include "Freezer.h"

namespace freezer {

Freezer::Freezer() {
	// TODO Auto-generated constructor stub

}

Freezer::~Freezer() {
	// TODO Auto-generated destructor stub
}

void Freezer::addItem(int drawer, const std::string& name, const std::string& description){
	freezer.emplace(next_id,Item(next_id,drawer,name,description));
}

void Freezer::moveItem(int key, int drawer){

}

void Freezer::editItem(int key, const std::string& name, const std::string& description){

}

void Freezer::removeItem(int key){
	freezer.erase(key);
}

std::vector<Item> Freezer::getItems(){
	std::vector<Item> items;
	for(auto it = freezer.cbegin(); it != freezer.cend(); ++it){
		items.push_back(it->second);
	}
	return items;
}

int Freezer::findNextId(){

}

} /* namespace freezer */
