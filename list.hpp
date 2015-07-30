#ifndef LIST_HPP
#define LIST_HPP 
#include "ListItem.hpp"

class List
{
	protected:
	ListItem* first;
	ListItem* last;
	
	public:
	List();
	
	void push(double v);
	
	void push_list();

	void reverse();
		
	void pop_first();
	
	void pop_last();

	void print();
};
	
#endif
