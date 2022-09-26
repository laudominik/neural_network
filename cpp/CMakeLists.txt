cmake_minimum_required(VERSION 3.22)
project(nnmain)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(libwrapper)
add_subdirectory(libnn)
add_subdirectory(libneuron)
add_subdirectory(liberror)
add_subdirectory(test)