cmake_minimum_required(VERSION 3.10)
project(pybind11_minimal_project LANGUAGES CXX)

# Automatically installed when pip install?
find_package(pybind11 CONFIG REQUIRED)

# Overriding default option set in the external project we are based on
set(BUILD_MAIN ON CACHE BOOL "Build main executable")
add_subdirectory(extern/cmake_minimal_project)

# pybind11_add_module is a wrapper around ADD_LIBRARY
# -> creates a target to which we have to link corresponding target libraries\
# The cmake_minimal_project is created by cmake_minimal_project/CMakeLists.txt which is accessible in the current scope
# Leads that did not payoff so far:
# - https://scikit-build.readthedocs.io/en/latest/usage.html#usage-cmake-configure-options
# - https://scikit-build.readthedocs.io/en/latest/usage.html#scikit-build-options
# - https://pip-python3.readthedocs.io/en/latest/reference/pip_install.html#per-requirement-overrides
pybind11_add_module(_module_ops MODULE src/operations_mod.cpp)
target_link_libraries(_module_ops PUBLIC cmake_minimal_project)

# Copy the <module-name><version>.so in the installation directory (has to be same )
# install(TARGETS <module-name> DESTINATION <folder-name-in-site-packages>)
install(TARGETS _module_ops DESTINATION pybind11_minimal_project)