#include <pybind11/pybind11.h>

namespace py = pybind11;

unsigned int Fibonacci(const unsigned int x)
{
    if ((x == 1) || (x == 0))
    {
        return (x);
    }

    return (Fibonacci(x - 1) + Fibonacci(x - 2));
}

PYBIND11_MODULE(module_name, module_handle)
{
    module_handle.def("fibonacci_cpp", &Fibonacci, "Recursive fibonacci algorithm.");
}