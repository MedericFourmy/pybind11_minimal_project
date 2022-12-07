#include <pybind11/pybind11.h>
#include <cmake_minimal_project/operations.h>

namespace py = pybind11;

PYBIND11_MODULE(operations_mod, m) {
    m.doc() = "pybind11 example plugin";

    m.def("add", &cmp::add, "A function that adds two numbers");
    m.def("mult", &cmp::mult, "A function that multiplies two numbers");
}