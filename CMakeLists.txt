cmake_minimum_required(VERSION 3.10)
project(pybind11_minimal_project LANGUAGES CXX)

add_subdirectory(extern/pybind11)
add_subdirectory(extern/cmake_minimal_project)

# pybind11_add_module is a wrapper around ADD_LIBRARY
# -> creates a target to which we have to link corresponding target libraries\
# The cmake_minimal_project is created by cmake_minimal_project/CMakeLists.txt which is accessible in the current scope
pybind11_add_module(operations_mod MODULE src/operations_mod.cpp)
target_link_libraries(operations_mod PUBLIC cmake_minimal_project)

# Copy the <module-name><version>.so in the installation directory (has to be same )
# install(TARGETS <module-name> DESTINATION <folder-name-in-site-packages>)
install(TARGETS operations_mod DESTINATION pybind11_minimal_project)