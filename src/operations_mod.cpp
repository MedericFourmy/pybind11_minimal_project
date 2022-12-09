#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include <cmake_minimal_project/operations.h>

namespace py = pybind11;

PYBIND11_MODULE(_module_ops, m) {
    m.doc() = "pybind11 example plugin";

    m.def("add", &cmp::add, "A function that adds two numbers");
    m.def("mult", &cmp::mult, "A function that multiplies two numbers");
    m.def("add_mat3", &cmp::add_mat3, "A function that adds two 3x3 matrices");

    m.attr("__version__") = "dev";
}