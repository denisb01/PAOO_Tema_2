cmake_minimum_required(VERSION 3.7.2)

project(tema)

add_subdirectory(numbers)
target_include_directories(numbers_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/numbers/)

add_subdirectory(simple_numbers)
target_include_directories(simple_numbers_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/simple_numbers/)

add_executable(app main.cpp)

target_link_libraries(app numbers_library simple_numbers_library)