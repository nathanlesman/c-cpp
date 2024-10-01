#include "fib.ih"

size_t rawfib(size_t value)
{
    return value == 0 ? 0 : 
           value <= 2 ? 1 : 
                        rawfib(value - 1) + rawfib(value - 2);
}
