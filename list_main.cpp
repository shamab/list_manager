#include<iostream>
#include "ListItem.hpp"
#include "List.hpp"
#include "unique_list.hpp"

int main() {
    int option;
    std::string item;
    char ch;
    List l;
    unique_list l1;
    int count = 0;
    ;


    //Check the data file
    std::string line;
    std::ifstream checkfile;
    checkfile.open("~/.list_manager.lst", ios::out | ios::app);
    if (checkfile.is_open()) {
        std::cout << "Your list is uptodate" << std::endl;
        while (checkfile) {
            getline(checkfile, line);
            count++;
        }
        std::cout << "You have an existing list of" << count << "items in the list" << std::endl;

    } else {
        std::cout << "You do not maintain a list." << std::endl;
    }
    //gLoad list from data file

    //Tell user you have an existing list with <size> entries.

    //Ask what user wants to do
    std::cout << "Enter your choice for list" << std::endl;
    std::cout << "1: Print the list. 2: Add Item to list. 3: Delete item from the list: 4: Remove the List:   5:Exit: " << std::endl;
    //Options:
    //1. Print the list
    //2. Add item to the list
    //3. Delete item from the list
    //4. Remove the list
    //5. Exit.
    std::cin>>option;
    switch (option) {
        case 1:
            l.print();
            break;

        case 2:
            std::cout << "Enter the Item to be added in the list." << std::endl;
            while (item != "exit") {
                std::cin>>item;
                if (item != "exit")
                    l.push(item);
            }

            break;
        case 3:
            std::cout << "Enter the item to be deleted from the list" << std::endl;
            std::cin>>item;
            l.delete();
            break;
    }
    l.push_list();
    std::cout << "Do you want to print the existing list?Press Y or N" << std::endl;
    std::cin>>ch;
    if (ch == 'y') {
        l.print();
    }

    //l.pop_first();
    //l.pop_last();
    //l.reverse();

    return 0;

}
