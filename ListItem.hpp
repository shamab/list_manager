#ifndef LISTITEM_HPP
#define LISTITEM_HPP


class ListItem
{

	private:
	ListItem* next;
	ListItem* previous;
	double value;
	
	public:
	
	ListItem();
	
	void set_value(double v);
	
	void set_next(ListItem* next);
	
	void set_previous(ListItem *previous_);
	
	ListItem* get_previous();
	
	ListItem* get_next();
	
	bool has_next();
	
	double get_value();
	
};

#endif