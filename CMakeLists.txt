cmake_minimum_required(VERSION 2.8)

add_executable(linked_list unique_list.cpp list.cpp ListItem.cpp list_main)

install(TARGETS linked_list DESTINATION bin)