#include "fib.ih"

double golden_ratio(size_t value)
{
    return static_cast<double>(fib(value)) / 
           static_cast<double>(fib(value - 1));
}

