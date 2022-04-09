cmake_minimum_required(VERSION 3.20)
project(ninth_sem)

set(CMAKE_CXX_STANDARD 20)

find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

add_executable(request request.cpp)
add_executable(basic basic.cpp)

target_link_libraries(basic ${PYTHON_LIBRARIES})
target_link_libraries(request ${PYTHON_LIBRARIES})