#include<iostream>
#include "unique_list.hpp"
#include "ListItem.hpp"
#include "list.hpp"


void unique_list::push(std::string v)
{
			if(first->get_next()==NULL)
		{	
			
			first->set_value(v);
			first->set_next(new ListItem());
			
		}
		else 
		{		
				ListItem* check = first;
				
				while(check != last->get_next())
				{
					if(check->get_value()== v)
						{
							return;
						}
						check = check->get_next();
				}
				ListItem* temp = new ListItem();
				last->set_next(temp);
				temp->set_previous(last);
			    last = last->get_next();
				last->set_value(v);
			
		}
	
}