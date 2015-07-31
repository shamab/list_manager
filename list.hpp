#ifndef LIST_HPP
#define LIST_HPP 
#include "ListItem.hpp"

class List {
protected:
    ListItem* first;
    ListItem* last;

public:
    List();

    void push(std::string);

    void push_list();

    void delete_item(std::string);

    void reverse();

    void pop_first();

    void pop_last();

    void print();
};

#endif
