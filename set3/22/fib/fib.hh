#ifndef FIB_H_
#define FIB_H_

enum fib_limits
{
    MAXFIB = 90,
    ENDFIB = MAXFIB + 1
};

size_t fib(size_t value);
size_t rawfib(size_t value);
double golden_ratio(size_t value);

#endif


