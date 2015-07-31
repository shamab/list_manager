cmake_minimum_required(VERSION 2.8)

add_executable(list_manager unique_list.cpp list.cpp ListItem.cpp list_main)

install(TARGETS list_manager DESTINATION bin)
