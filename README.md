pybind11_minimal_project
========================

A test project to learn how to create [pybind11](https://github.com/pybind/pybind11) python bindings from another cmake based project (here: [cmake_minimal_project](https://github.com/MedericFourmy/cmake_minimal_project)) using [scikit-build](https://github.com/scikit-build/scikit-build). Directly inspired by [scikit_build_example](https://github.com/pybind/scikit_build_example).  

Installation
------------

- Clone this project along with the submodules:  
`git clone --recursive git@github.com:MedericFourmy/pybind11_minimal_project.git`

- Build and install package:  
`pip install pybind11_minimal_project/`  

- Note: `pip install -e .` not supported by scikit-build yet See [this issue](https://github.com/scikit-build/scikit-build/issues/770)

Testing
-------
Then, from anywhere:  
```
from pybind11_minimal_project import add 
print(add(1,2))
```

TODO
----
