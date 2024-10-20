cmake_minimum_required(VERSION 3.22.1)
project(Practice)
add_executable(${PROJECT_NAME} main.c) # copmlie into file execute

include_directories(${CMAKE_SOURCE_DIR}/../lib/inc) # are used to specify directories where the compiler should look for header files
#target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/../lib/inc) # are used to specify directories where the compiler should look for header files

#############---EXPLAIn---##############
# "include_directories()" applies to all targets that follow it. For example, if I have "add_executable(main_2 main_2.c)", main_2 also add file header
# "target_include_directories()" it specific particular target look for directory that has header file 

target_link_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/../lib/build) # tell Cmake where to find  library's compiled code.
target_link_libraries(${PROJECT_NAME} addNum) # link with file execute that is found by target_link_directories (libaddNum.a) 
install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_SOURCE_DIR}/../bin) #when you type "sudo make install" file execute will store at ${CMAKE_SOURCE_DIR}/../bin