#include<iostream>
#include "ListItem.hpp"
#include "List.hpp"
#include "unique_list.hpp"

int main()
{	
	int option,item;
	char ch;
	List l;
	unique_list l1;
	
	std::cout<<"Enter your choice for list"<<std::endl;
	std::cout<<"1: Add Item to list.  2:Exit: "<<std::endl; 
	std::cin>>option;
	switch (option)
	{
	case 1:
		std::cout<<"Enter the Item to be added in the list."<<std::endl;
		while(item!= 2)
		{
		std::cin>>item;
		if(item != 2)
		l.push(item);
		}
		
		break;
	case 2:
		break;
	}
	l.push_list();
	std::cout<<"Do you want to print the existing list?Press Y or N"<<std::endl;
	std::cin>>ch;
	if(ch== 'y'||'Y')
	{
		l.print();
	}
	//l.pop_first();
	//l.pop_last();
	//l.reverse();
	
	return 0;
	
}