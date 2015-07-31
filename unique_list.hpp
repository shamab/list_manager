#ifndef UNIQUE_LIST_HPP
#define UNIQUE_LIST_HPP
#include "ListItem.hpp"
#include "list.hpp"

class unique_list:public List, public ListItem
{
	public:
	void push(std::string);

};

#endif