#include <iostream>
#include <fstream>
#include "list.hpp"
#include "ListItem.hpp"

List::List() {
    last = new ListItem();
    first = last;

}

void List::push(std::string v) {

    if (first->get_next() == NULL) {

        first->set_value(v);
        first->set_next(new ListItem());

    } else {
        ListItem* temp = new ListItem();
        last->set_next(temp);
        temp->set_previous(last);
        last = last->get_next();
        last->set_value(v);

    }

}

void List::push_list() {
    std::ofstream mylist;
    mylist.open("list.txt", std::ios::app);
    ListItem* start = first;
    mylist << first->get_value() << std::endl;
    while (start->get_next() != NULL) {
        start = start->get_next();
        mylist << start->get_value() << std::endl;
    }
    mylist.close();

}

void List::reverse() {
    ListItem* temp = last;
    std::cout << last->get_value() << std::endl;
    while (temp ->get_previous() != NULL) {
        temp = temp->get_previous();
        std::cout << temp->get_value() << std::endl;

    }


}

void List::pop_first() {
    ListItem* temp = first;
    first = first->get_next();
    first->set_previous(NULL);
    delete temp;
}

void List::pop_last() {
    ListItem* temp = last;
    last = last->get_previous();
    last->set_next(NULL);
    delete temp;


}

void List::print() {
    std::string line;
    std::ifstream printlist;

    printlist.open("~/.list_manager.lst");
    while (printlist) {
        getline(printlist, line);
        std::cout << line << std::endl;
    }
}

void List::delete_item(std::string item) {
    std::string line;
    std::ifstream printlist;
    int count = 0;

    printlist.open("~/.list_manager.lst");
    while (printlist) {
        getline(printlist, line);
        if (line == item) {
            delete line;
            count++;
        }

    }
    if (count == 0)
        std::cout << "The given Item is not present in your list" << std::endl;
}


