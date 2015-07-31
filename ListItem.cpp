#include<iostream>
#include "ListItem.hpp"

    ListItem::ListItem()
	{
		value = "";
		next = NULL;
		previous = NULL;
	}
	
	void ListItem::set_value(std::string v)
	{
		value = v;
	}
	void ListItem::set_next(ListItem* next_)
	{
		next= next_;
	}
	void ListItem:: set_previous(ListItem *previous_)
	{
		previous = previous_;
	}
	ListItem* ListItem::get_previous()
	{
		return previous;
	}
	ListItem* ListItem:: get_next()
	{
		return next;
	}

	std::string ListItem::get_value()
	{
		return value;
	}