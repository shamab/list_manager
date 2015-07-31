#ifndef LISTITEM_HPP
#define LISTITEM_HPP


class ListItem
{

	private:
	ListItem* next;
	ListItem* previous;
	std::string value;
	
	public:
	
	ListItem();
	
	void set_value(std::string v);
	
	void set_next(ListItem* next);
	
	void set_previous(ListItem *previous_);
	
	ListItem* get_previous();
	
	ListItem* get_next();
	
	bool has_next();
	
	std::string get_value();
	
};

#endif