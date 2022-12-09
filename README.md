A test project to learn how to create [pybind11](https://github.com/pybind/pybind11) python bindings from another cmake based project (here: [cmake_minimal_project](https://github.com/MedericFourmy/cmake_minimal_project)). Directly inspired by [scikit_build_example](https://github.com/pybind/scikit_build_example).  

## Building
Clone this project along with the submodules  
`git clone --recursive git@github.com:MedericFourmy/pybind11_minimal_project.git`

Then in the project folder  
Build module: `python3 -m build`  
Install module: `pip install .`  

Then, from anywhere: 
`python3 -c "from pybind11_minimal_project import operations_mod; print(operations_mod.add(1,2))"`
