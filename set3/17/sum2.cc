#include "main.ih"

double sum(size_t argc, char *argv[], bool is_double)
{
    double total = 0;

    for (size_t term_number = 1; term_number != argc; ++term_number)
        total += stod(argv[term_number]);

    return total;
}

