#include "fib.ih"

size_t fib(size_t value)
{  
    size_t fibval[ENDFIB] = { };

    if (value == 1 || value == 2)
        fibval[value] = 1;
    
    if (fibval[value] == 0 && value != 0)
        fibval[value] = fib(value - 1) + fib(value - 2);

    return fibval[value];
    
}

